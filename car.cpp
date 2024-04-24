#include "car.h"
#include "ui_car.h"
#include <login.h> //引用登录函数的初始化数据库
#include "QFileDialog"
#include <QDebug>
#include "dbthreadPool.h"

Car::Car(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Car)
{
    ui->setupUi(this);
    qDebug()<<"进入停车场主页";
    setWindowTitle("停车场管理系统");
    mysql_C = new mysql;

    //3. 播放视频初始化
    // video_Init();
    camera_Init();

    viewfinder->setVisible(true); //显示摄像头显示区域
    //如果当前计算机没有摄像头，默认不开启摄像头
    static int CameraCount = Camera::getCameraCount();
    if( CameraCount != 0)
    {
        qDebug()<<"1.初始化-当前摄像头的个数："<<CameraCount;
        camera->start();  //让摄像头开始工作
    }
    // 3. end


    // 子线程
    // 图片识别
    // QThread* t1 = new QThread;
    // 更新饼图线程
    QThread* t2 = new QThread;

    //创建饼图
    //车位展示
    park_num();
    //先给视频一个图片
    // 创建QPixmap对象，加载png图像存储到pix变量中，使用new关键字分配堆内存来储存该对象
    //定时更新 ---使用子线程
    UpdatePie* upPie = new UpdatePie;
    upPie->moveToThread(t2);
    t2->start();
    //主线程信号连接到子线程运行函数
    connect(this, &Car::UpPieData, upPie, &UpdatePie::CheckPie);
    //子线程更新信号传到主线程
    connect(upPie, &UpdatePie::PieChanged, this, &Car::create_pie);
    //当主线程不在主页面时暂停线程

    //当主线程在主页面时启动线程
    //QString m_Parking_name,int m_reserve,int m_now_count_L
    // TODO 主线程添加数据删除数据引发的数据不同步以及调用子线程引发的while循环？？？
    // 互斥问题
    emit UpPieData(mysql_C->Parking_name, mysql_C->reserve, mysql_C->parking_now_count);

    // 将timeout信号连接到槽函数

    //现有车辆数据发生变化进行同步
    connect(this, &Car::now_count_acc_signal, mysql_C, &mysql::parking_acc);
    connect(this, &Car::now_count_dec_signal, mysql_C, &mysql::parking_dec);
    //数据库入库量发生改变，同步饼图检测


    // 设置默认显示第二页
    ui->stack->setCurrentIndex(0);
    //链接
    connect(ui->MainButton,&QPushButton::clicked,this,&Car::SwitchPage);
    connect(ui->messageButton,&QPushButton::clicked,this,&Car::SwitchPage);
    connect(ui->CtrolButton,&QPushButton::clicked,this,&Car::SwitchPage);
    //点击查看监控后的相关处理
    connect(ui->check_camera,&QPushButton::clicked,this,&Car::SwitchPage);


    // //创建任务类的对象 识别车牌
    // PlateRecognize *Rec  = new PlateRecognize;

    // //将任务队列添加到线程
    // Rec->moveToThread(t1);
    // t1->start();
    // connect(this, &Car::Plate_start, Rec, &PlateRecognize::Recognize);
    // connect(Rec, &PlateRecognize::Recogned, this, [=](Mat localImg,QString plateStr)
    //         {
    //             Mat plateImg = localImg.clone();
    //             QImage qPlateImg(plateImg.data,plateImg.cols,plateImg.rows,static_cast<int>(plateImg.step), QImage::Format_RGB888);
    //             ui->screen_label->setPixmap(QPixmap::fromImage(qPlateImg));
    //             ui->Car_idinput->setText(plateStr);
    //             ui->Car_output->setText(plateStr);
    //         });

    // //线程池
    // QThreadPool::globalInstance()->setMaxThreadCount(4);

}

Car::~Car()
{
    mysql_C->mysql_close();
    delete ui;
}

void Car::SwitchPage(){
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if(button==ui->MainButton)
        ui->stack->setCurrentIndex(0);
    else if(button==ui->messageButton)
        ui->stack->setCurrentIndex(1);
    else if(button==ui->CtrolButton)
        ui->stack->setCurrentIndex(2);
    else if (button==ui->check_camera)
        ui->stack->setCurrentIndex(3);
}
// 判断车牌是非合法
bool Car::checkPlateNumber(QString license_plate)
{

    //判断车牌位数企微，读取QString的位数
    if(license_plate.length() != 7&&license_plate.length() != 8)
    {
        QMessageBox::information(this,"入场失败","车牌号位数不对");
        ui->Car_idinput->clear();
        return false; //不满足7位，非法
    }
    //读取车牌的第一位，是否在所有省份的简称里面
    QString province = "京津沪渝冀豫云辽黑湘皖鲁新苏浙赣鄂桂甘晋蒙陕吉闽贵粤青藏川宁琼"; //省份简称
    if(!province.contains(license_plate.left(1)))
    { //判断首位是否省份简称
        ui->Car_idinput->clear();
        QMessageBox::information(this,"入场失败","首字母不含省份");
        return false;
    }
    //序列号共5位，包括英文和数字，其中第一位为英文字母，表示该车的使用性质；第二位为字母或数字，表示该车的行驶区域；后面三位为数字，表示该车的序号；
    QString letter = "ABCDEFGHJKLMNPQRSTUVWXYZ"; //序列号中的英文字母
    QString digit = "0123456789"; //序列号中的数字
    if(!letter.contains(license_plate.mid(1,1)))
    {
        QMessageBox::information(this,"入场失败","第二位不符合规定");
        ui->Car_idinput->clear();
        return false; //判断第二位是否符合规定
    }
    return true;

}

//展示车位图
void Car::park_num()
{

    QString park_name = mysql_C->Parking_name;

    q.prepare("SELECT P_now_count,P_all_count,P_reserve_count FROM parking WHERE P_name = :park_name;");
    q.bindValue(":park_name", park_name);
    q.exec();
    q.next();
    QString now_count = q.value(0).toString();
    QString all_count = q.value(1).toString();
    QString reserve_count = q.value(2).toString();
    //将停车场数据呈现到图表中

    mysql_C->reserve = reserve_count.toInt();
    mysql_C->parking_now_count = q.value(0).toInt();
    create_pie(reserve_count.toInt());

}

//创建饼图
void Car::create_pie(int reserve)
{
    // 同步数据到MySQL全局变量
    mysql_C->reserve = reserve;
    int now = mysql_C->parking_now_count;
    int surplus = mysql_C->parking_count-mysql_C->parking_now_count-mysql_C->reserve;
    //创建饼图
    // 创建一个QPieSeries对象并添加数据//为每个分块设置颜色
    series = new QPieSeries();
    series->append("预约数", reserve);
    series->append("入库数", now)->setColor("#FFA500");
    series->append("剩余数", surplus);
    series->setHoleSize(0.3); //设置中间 空洞大小
    series->pieSize();

    //为每个分块设置标签文字
    for(int i = 0; i <= 2; i++)
    {
        slice = series->slices().at(i); //获取分块

        slice->setLabel(slice->label()+QString::asprintf(":%.0f",slice->value()));
        if(slice->value()<10)
        {
            slice->setLabelVisible(false);
        }
        else {
            slice->setLabelVisible(true);

        }
        // 饼图高亮
        connect(slice,SIGNAL(hovered(bool)),this,SLOT(on_PieSliceHighlight(bool)));

    }
    slice->setExploded(true); //最后一个设置为exploded,设置分裂效果
    slice->setExplodeDistanceFactor(0.1);
    // 创建一个QChart对象，并将QPieSeries对象添加到图表中
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle(mysql_C->Parking_name);
    chart->legend()->setVisible(true);//图例
    chart->legend()->setAlignment(Qt::AlignBottom);
    chart->setBackgroundBrush(QBrush(QColor(255, 255, 255))); //设置背景为白色
    // 创建一个QChartView对象并设置图表
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->resize(532,371);
    chartView->backgroundBrush();

    // 将QChartView对象转换为QPixmap对象
    QPixmap pixmap = chartView->grab();

    // 将QPixmap对象显示到QLabel中
    ui->label_pie->setPixmap(pixmap);
}

// 1. 摄像头初始化
void Car::camera_Init()
{
    auto cameras = QMediaDevices::videoInputs();
    if (!cameras.isEmpty()) {
        for (const auto &cameraInfo : cameras)
            qDebug() << cameraInfo.description();  // 输出所有可用摄像头的描述

        // 创建一个摄像头实例
        camera = new QCamera(cameras.first());

        // 创建一个视频显示组件
        viewfinder = new QVideoWidget(ui->camera); // 假设 ui->camera 是放置 QVideoWidget 的 QWidget
        viewfinder->setAspectRatioMode(Qt::IgnoreAspectRatio);
        viewfinder->setGeometry(10, 10, 500, 250);

        // 创建媒体捕获会话并设置视窗设备
        captureSession = new QMediaCaptureSession(this);
        captureSession->setCamera(camera);
        captureSession->setVideoOutput(viewfinder);

        // 设置图像捕获
        imageCapture = new QImageCapture(captureSession);

        viewfinder->show(); // 显示视图窗口
        camera->start(); // 开始捕获
    }
}

// 2. 视频初始化
// void Car::video_Init()
// {
//     //本地视频播放初始化
//     //初始化

//     player = new QMediaPlayer(ui->camera);
//     //显示的窗体
//     videowidget = new QVideoWidget(ui->camera);
//     //    videowidget->resize(500,250);
//     videowidget->setGeometry(20, 10, 500, 282); //设置窗口位置和大小
//     //播放视频
//     player->setVideoOutput(videowidget);   //设置输出到哪里
//     //获取视频总时长
//     connect(player,&QMediaPlayer::durationChanged,this,&Car::Get_Duration);

//     connect(player, &QMediaPlayer::positionChanged, this, &Car::On_Position_Changed);
//     //Open File为打开窗体名称

//     //让滑动与视频时长产生关联
//     connect(ui->horizontalSlider,&QSlider::valueChanged,this,&Car::Slider_Changed);
// }

// 开启/关闭摄像头
void Car::on_camera_button_clicked()
{
    qDebug() << "点击了开启/关闭摄像头";
    // if (player->playbackState() == player->PlayingState ||
    //     player->playbackState() == player->StoppedState ||
    //     player->playbackState() == player->PausedState) {
    //     // player->stop(); // 停止播放文件
    //     qDebug() << "关闭摄像头";
    //     // videoWidget->setVisible(true); // 隐藏文件播放的 QVideoWidget
    // }
    // 对于 Qt 6, 以下两行不再需要
    // camera->setViewfinder(viemfinder); // 在 Qt 6 中，这在 captureSession->setVideoOutput(viewfinder) 中设置
    // viewfinder->setVisible(true); // 显示摄像头预览区域
    // camera->start();  // 让摄像头开始工作
}

// 点击主页判断状态
void Car::on_MainButton_clicked()
{
    timer->start(2000);

    // 获取当前摄像头实例
    camera = captureSession ? captureSession->camera() : nullptr;

    if (camera && camera->isActive())
    {
        qDebug() << "摄像头激活了";
        // 摄像头已经激活的逻辑处理
        if (viewfinder && !viewfinder->isVisible()) {
            qDebug() << "摄像头使用中";
            viewfinder->setVisible(true); // 显示摄像头的实时预览区域
        }

        // if (videowidget && videowidget->isVisible()) {
        //     videowidget->setVisible(false); // 隐藏视频播放的 QVideoWidget
        // }
    } else {
        // 如果摄像头不是激活状态的逻辑处理
        if (player && player->playbackState() != QMediaPlayer::PlayingState) {
            player->stop(); // 停止播放文件
        }

        if (viewfinder && viewfinder->isVisible()) {
            viewfinder->setVisible(false); // 隐藏摄像头的实时预览区域
        }

        // if (videowidget && !videowidget->isVisible()) {
        //     videowidget->setVisible(true); // 显示视频播放的 QVideoWidget
        // }
    }

    qDebug() << "点击了返回主页按钮";
    park_num();
}


// 饼图高亮槽函数
void Car::on_PieSliceHighlight(bool show)
{
    //鼠标移入，移出时发射hovered()信号，动态设置exploed效果
    QPieSlice* slice = static_cast<QPieSlice *>(sender());
    slice->setExploded(show);
}

