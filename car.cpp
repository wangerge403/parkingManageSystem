#include "car.h"
#include "ui_car.h"
#include "login.h" //导入登录的初始化数据库
#include "QFileDialog"
#include <QDebug>
#include "dbthreadPool.h"
#include <QDateTime>

Car::Car(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Car)
{
    ui->setupUi(this);
    qDebug()<<"进入停车场主页";
    setWindowTitle("停车场管理系统");
    mysql_C = new mysql;

    // 显示系统时间
    QTimer *timer2 = new QTimer(this);  // 创建一个定时器
    connect(timer2, &QTimer::timeout, this, &Car::updateTime);
    timer2->start(1000);  // 每隔1000毫秒触发一次 timeout 信号，即每秒更新一次

    //3. 播放视频初始化
    // video_Init();
    camera_Init();

    viewfinder->setVisible(true); //显示摄像头显示区域
    // 默认不开启摄像头
    camera->stop();  //让摄像头开始工作
    static int CameraCount = Camera::getCameraCount();
    if( CameraCount != 0)
    {
        qDebug()<<"1.初始化-当前摄像头的个数："<<CameraCount;
    }
    // 3. end


    // 子线程
    // 图片识别
    QThread* t1 = new QThread;
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
    connect(ui->MainButton, &QPushButton::clicked, this, &Car::SwitchPage);
    connect(ui->carInforButton, &QPushButton::clicked, this, &Car::SwitchPage);
    connect(ui->CtrolButton, &QPushButton::clicked, this, &Car::SwitchPage);
    //点击查看监控后的相关处理
    connect(ui->check_camera, &QPushButton::clicked, this, &Car::SwitchPage);


    //创建任务类的对象 摄像头画面 自动识别车牌
    PlateRecognize *Rec  = new PlateRecognize;

    //将任务队列添加到线程
    Rec->moveToThread(t1);
    t1->start();
    // 由Plate_start事件信号驱动 - on_camera_take_clicked()函数来触发此信号
    connect(this, &Car::Plate_start, Rec, &PlateRecognize::Recognize);
    connect(Rec, &PlateRecognize::Recogned, this, [=](Mat localImg,QString plateStr)
            {
                Mat plateImg = localImg.clone();
                QImage qPlateImg(plateImg.data,plateImg.cols,plateImg.rows,static_cast<int>(plateImg.step), QImage::Format_RGB888);
                ui->screen_label->setPixmap(QPixmap::fromImage(qPlateImg));
                ui->Car_idinput->setText(plateStr);
                ui->Car_output->setText(plateStr);
            });

    //线程池
    QThreadPool::globalInstance()->setMaxThreadCount(4);

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
    else if(button==ui->carInforButton)
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
    series->setHoleSize(0.3); //设置半径
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
// 饼图高亮槽函数
void Car::on_PieSliceHighlight(bool show)
{
    //鼠标移入，移出时发射hovered()信号，动态设置exploed效果
    QPieSlice* slice = static_cast<QPieSlice *>(sender());
    slice->setExploded(show);
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
        ui->camera->setAlignment(Qt::AlignCenter);
        viewfinder->setGeometry(10, 40, 500, 300);

        // 创建媒体捕获会话并设置视窗设备
        captureSession = new QMediaCaptureSession(this);
        captureSession->setCamera(camera);
        captureSession->setVideoOutput(viewfinder);

        // 设置图像捕获
        imageCapture = new QImageCapture(captureSession);

        viewfinder->show(); // 显示视图窗口
    }
}

// 2. 视频文件初始化
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
    if (camera->isActive()) {
        // player->stop(); // 停止播放文件
        // videoWidget->setVisible(true); // 隐藏文件播放的 QVideoWidget
        camera->stop();
        viewfinder->setVisible(false); // 隐藏摄像头区域
    }
    // 对于 Qt 6, 以下两行不再需要
    // camera->setViewfinder(viemfinder); // 在 Qt 6 中，这在 captureSession->setVideoOutput(viewfinder) 中设置
    viewfinder->setVisible(true); // 显示摄像头预览区域
    camera->start();  // 开启摄像头
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

/*
*车牌出库 & 入库
*/

// 1. 入库
//车辆入库将信息提交到数据库
void Car::on_submitCar_clicked()
{
    //读取车牌号
    QString license_plate = ui->Car_idinput->text(); //读取输入或识别出来的车牌号
    //检查车牌是否合规，不合规直接退出
    if(!checkPlateNumber(license_plate))
    {
        qDebug()<<license_plate ;
        //QMessageBox::information(this,"识别失败","您输入的车牌号不合规");
        return;
    }

    qDebug() << "输入时:" << mysql_C->reserve;
    if((mysql_C->parking_now_count+mysql_C->reserve)>mysql_C->parking_count)
    {
        //当预定车位满时，判断车牌是否在预定表中，如果在则入库，若不在则出库

        qDebug()<<"现有车位"<<mysql_C->parking_now_count<<"预约量:"<<mysql_C->reserve<<"总车位:"<<mysql_C->parking_count;
        QMessageBox::information(this,"入场失败","当前停车场已满！");
        return ;
    }
    //检查当前车牌是否在车库内部还未出库

    q.prepare("select check_in_time,check_out_time from car WHERE license_plate = :license_plate;");
    q.bindValue(":license_plate", license_plate);
    q.exec();
    q.next();
    //qDebug()<<qISin.value(0)<<qISin.value(1);
    if((!q.value(0).isNull())&&q.value(1).isNull()) //如果车入库时间非空，出库未空则未出场
    {
        //qDebug()<<q.value(0);
        //qDebug()<<q.value(1);
        QMessageBox::information(this,"入场失败","车辆仍未出场");
        ui->Car_idinput->clear();
        return ;
    }
    //qDebug()<<q.value(0);
    //qDebug()<<q.value(1);

    //获取当前的时间
    // 获取当前时间
    QDateTime currentDateTime = QDateTime::currentDateTime();
    // 将时间转换为字符串格式（格式化为 "yyyy-MM-dd hh:mm:ss"）存储到MySQL的database
    QString formattedDateTime = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");
    //将信息上传到数据库
    //位置
    QString location = mysql_C->Parking_name;

    QString sql_submitCar = QStringLiteral("INSERT INTO CAR (license_plate, check_in_time,location) VALUES ('%1','%2','%3');").arg(license_plate,formattedDateTime,location);

    if(mysql_C->execute_bool(sql_submitCar))
    {
        qDebug()<<"车牌数据插入成功";
        ui->Car_idinput->clear();  //清空输入框
        QMessageBox::information(this,"停车入库","车牌入库成功!");

        // mysql_C.parking_acc(); //让现有车库加一
        emit now_count_acc_signal();
        qDebug()<<mysql_C->parking_now_count;
        park_num();

    }
    else {
        qDebug()<<"车牌插入失败";
        QMessageBox::information(this,"停车入库","车牌入库失败！！");
    }
}

// 2. 出库
//当出库操作之后
void Car::on_DeleteCar_clicked()
{
    //读取车牌号
    QString license_plate = ui->Car_output->text(); //读取输入或识别出来的车牌号
    if(!checkPlateNumber(license_plate))
    {
        //QMessageBox::information(this,"识别失败","您输入的车牌号不合规");
        return;
    }
    //先检查车牌是否已入库，若未入库则报错，并返回时间
    QString sqlplate_check= QStringLiteral("select id from CAR where license_plate = '%1' AND check_out_time IS NULL; ").arg(license_plate);
    QSqlQuery query =mysql_C->execute(sqlplate_check);
    if(!query.size()) //如果不存在此数据
    {
        QMessageBox::information(this,"入库检测","当前车牌不在车库当中!!");
        return ;
    }
    //获取当前车牌号的时间
    QString sql_time= QStringLiteral("select check_in_time from CAR where license_plate = '%1' ORDER BY check_in_time DESC;").arg(license_plate);
    QSqlQuery q = mysql_C->execute(sql_time);
    q.next();
    QDateTime oldDateTime = q.value(0).toDateTime();



    //获取当前的时间
    // 获取当前时间
    QDateTime currentDateTime = QDateTime::currentDateTime();
    // 将时间转换为字符串格式（格式化为 "yyyy-MM-dd hh:mm:ss"）存储到MySQL的database
    QString formattedDateTime = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");

    //qDebug()<<oldDateTime<<currentDateTime;
    //根据时间计算费用
    //调用时间函数，传入参数，识别的车牌号（去求过去的时间)，还有现在的时间,根据时间差去求所需要的费用
    qDebug()<<oldDateTime<<currentDateTime;
    int fee = fee_charge(oldDateTime,currentDateTime,license_plate);


    //将信息上传到数据库
    qDebug()<< formattedDateTime << fee << license_plate;


    //QString sql_submitfee = QStringLiteral("UPDATE CAR SET check_out_time='%1', fee='%2' WHERE license_plate='%3';").arg(formattedDateTime,fee,QChar::fromLatin1(license_plate.toLatin1()[0]));

    q.prepare("UPDATE CAR SET check_out_time=:check_out_time, fee=:fee WHERE license_plate=:license_plate");
    q.bindValue(":check_out_time", formattedDateTime);
    q.bindValue(":fee", fee);
    q.bindValue(":license_plate", license_plate);

    if(q.exec())
    {
        qDebug()<<"车辆出库成功";
        ui->Car_output->clear();  //清空输入框
        QString message = QString("出库成功，车牌号'%1'需要支付'%2'元").arg(license_plate, QString::number(fee, 'f', 2));

        QMessageBox::information(this,"停车出库库",message);
        //车牌插入成功后，更新车库数据
        // mysql_C.parking_dec(); //让现有车位数量减一
        emit now_count_dec_signal();
        park_num();

    }
    else {
        qDebug()<<"车牌出库失败";
        //qDebug()<<sql_submitfee;
        QMessageBox::information(this,"停车入库","车牌入库失败！！");
    }
}

//收费函数
int Car::fee_charge(QDateTime oldDateTime, QDateTime currentDateTime,QString license_plate)
{
    //计算彼此的秒差
    qint64 seconds = oldDateTime.secsTo(currentDateTime);
    long long hours = std::abs(seconds) / 3600LL;
    qDebug()<<seconds << hours;

    //计算出费用
    if(hours<0.5) //如果小于半个小时，则不收费
    {
        return 0;
    }
    QString sql_fee= QStringLiteral("SELECT parking.P_fee FROM parking JOIN car ON car.location = parking.P_name WHERE CAR.license_plate='%1';").arg(license_plate);
    QSqlQuery q = mysql_C->execute(sql_fee);
    q.next();
    int p_fee = q.value(0).toInt();

    int fee = int(hours) * p_fee;

    //首先根据车牌号，
    return fee;
}

// 出库 & 入库 end

/*
*管理员信息板块
*/

// 添加管理员
void Car::on_ButtonADD_clicked()
{
    //读取当前鼠标所在的行
    int row = ui->tablectrol->currentRow();
    qDebug()<< row;
    if(row >= 0)
    {
        //读取用户添加数据后鼠标所在的行
        QString ID = ui->tablectrol->item(row,0)->text();
        QString username = ui->tablectrol->item(row,1)->text();
        QString password = ui->tablectrol->item(row,2)->text();
        QString telephone = ui->tablectrol->item(row,3)->text();
        if(telephone.length()>11)
        {
            QMessageBox::information(this,"添加失败","您输入的手机号不符合11位");
            return ;
        }
        QString truename = ui->tablectrol->item(row,4)->text();
        // 当前添加的信息
        qDebug()<< ID << username << password << telephone << truename;

        //将读取到的数据更新到数据库
        QString encryptedPassword = encryptPassword(password); // 对密码进行加密
        QString sql_insert = QStringLiteral("insert into USER(id,username,password,telephone,truename) values('%1','%2','%3','%4','%5');").arg(ID,username, encryptedPassword,telephone,truename);

        if (mysql_C->execute_bool(sql_insert))
        {
            qDebug() << "User Add successfully.";
            //为添加过后的每i行第0列设置数据只读
            ui->tablectrol->item(row,0)->setFlags(ui->tablectrol->item(row,0)->flags()^Qt::ItemIsEditable);
            Car::on_CtrolButton_clicked(); // 刷新列表
        }
        else
        {
            qDebug()<<sql_insert;
            qDebug() << "User Add error" << ID;
        }
    }
}

// 刷新列表
// 初始化数据，如果连接成功
// 回显数据
void Car::on_CtrolButton_clicked()
{
    timer->stop();
    //判断摄像头状态
    if (camera->isActive())
    {
        // player->stop(); // 停止播放文件
        // videowidget->setVisible(false); // 隐藏视频文件
        viewfinder->setVisible(false); // 隐藏摄像头显示区域
    }

    //初始化数据连接
    ui->tablectrol->size();//设置表格

    //设置表头
    QStringList header;
    header<<"ID"<<"账户"<<"密码"<<"手机号"<<"姓名";

    ui->tablectrol->setHorizontalHeaderLabels(header);

    //使用MySQL语句查询
    QString sqlstr="select id,username,password,telephone,truename  from USER;";

    q.prepare(sqlstr);
    int i = 0;
    if(q.exec())
    {
        while (q.next()) {
            //设置表格行数，每一次加一行
            ui->tablectrol->setRowCount(i+1);
            //第一列
            ui->tablectrol->setItem(i,0,new QTableWidgetItem(q.value(0).toString()));
            ui->tablectrol->item(i,0)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

            //为添加过后的每i行第0列设置数据只读
            ui->tablectrol->item(i,0)->setFlags(ui->tablectrol->item(i,0)->flags()^Qt::ItemIsEditable);
            //第二列
            ui->tablectrol->setItem(i,1,new QTableWidgetItem(q.value(1).toString()));
            ui->tablectrol->item(i,1)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            //第三列
            ui->tablectrol->setItem(i,2,new QTableWidgetItem(q.value(2).toString()));
            ui->tablectrol->item(i,2)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            //第四列
            ui->tablectrol->setItem(i,3,new QTableWidgetItem(q.value(3).toString()));
            ui->tablectrol->item(i,3)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            //第五列
            ui->tablectrol->setItem(i,4,new QTableWidgetItem(q.value(4).toString()));
            ui->tablectrol->item(i,4)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            i++;
        }
        //在底部额外添加一行
        ui->tablectrol->setRowCount(i+1);

    }
}

// （2）.修改管理员信息
// 获取当前用户鼠标太Table WIdget所在的行
// 哪一行在修改
// 根据用户ID更新用户信息
void Car::on_ButtonModify_clicked()
{
    //读取当前鼠标所在的行
    int row = ui->tablectrol->currentRow();
    qDebug()<<row;
    if(row>=0)
    {
        //读取行对应的数据
        QString ID = ui->tablectrol->item(row,0)->text(); //ID为只读，作为唯一标识符
        //读取其它信息
        QString username = ui->tablectrol->item(row,1)->text();
        QString password = ui->tablectrol->item(row,2)->text();
        QString telephone = ui->tablectrol->item(row,3)->text();
        if(telephone.length()>11)
        {
            QMessageBox::information(this,"添加失败","您输入的手机号不符合11位");
            return;
        }
        QString truename = ui->tablectrol->item(row,4)->text();
        //
        qDebug()<< ID << username << password << telephone << truename;

        //将读取到的数据更新到数据库
        QString encryptedPassword = encryptPassword(password); // 对密码进行加密
        QString sql_update = QStringLiteral("UPDATE USER SET username='%1', password='%2', telephone='%3',truename='%4' WHERE id='%5';").arg(username,encryptedPassword,telephone,truename,ID);

        q.prepare(sql_update);
        if (q.exec()) {
            if (q.numRowsAffected() == 1) {
                qDebug() << "User updated successfully.";
                Car::on_CtrolButton_clicked(); // 刷新列表
            } else {
                qDebug() << "Could not update user with ID:" << ID;
            }
        } else {
            //检查执行语句
            qDebug() << sql_update;
            qDebug() << "Error executing SQL statement:" ;
        }
    }

}

// （3）. 删除管理员
void Car::on_ButtonDelete_clicked()
{
    //读取当前鼠标所在的行
    int row = ui->tablectrol->currentRow();
    qDebug() << row;
    if(row >= 0)
    {
        //读取用户添加数据后鼠标所在的行
        QString ID = ui->tablectrol->item(row,0)->text();

        QString sql_Drop = QStringLiteral("DELETE FROM USER WHERE id = '%1';").arg(ID);

        if (mysql_C->execute_bool(sql_Drop))
        {
            qDebug() << "User Add successfully.";
            //恢复可读
            ui->tablectrol->item(row,0)->setFlags(ui->tablectrol->item(row,0)->flags() | Qt::ItemIsEditable);
            Car::on_CtrolButton_clicked(); // 刷新列表
        }
        else
        {
            qDebug() << sql_Drop;
            qDebug() << "User Add error" << ID;
        }
    }
}

//管理员信息板块 end

//画面捕获，截图
//使用easyPR将车牌号放到固定区域，然后将识别的照片放到入库和出库的位置
void Car::on_camera_take_clicked()
{
    //如果摄像头播放
    if (camera->isActive())
    {
        // 在 Qt 6 中，QCameraImageCapture 已经被弃用，使用 QMediaCaptureSession 和 QImageCapture 替代。
        captureSession->setCamera(camera);

        imageCapture = new QImageCapture();
        captureSession->setImageCapture(imageCapture);

        // 当摄像头成功捕获一张图片后，进行处理 正在修复bug
        connect(imageCapture, &QImageCapture::imageAvailable, this, [=](int id, const QVideoFrame& frame){
            using namespace cv;

            // 首先从 QVideoFrame 转换为 QImage
            QImage image = frame.toImage();

            // 将 QImage 转换为 OpenCV 的 Mat
            Mat src(image.height(), image.width(), CV_8UC4, const_cast<uchar*>(image.bits()), image.bytesPerLine());
            Mat rgbImg;
            cvtColor(src, rgbImg, COLOR_BGRA2RGB);  // OpenCV 的颜色通道与 Qt 不同

            QImage qImg(rgbImg.data, rgbImg.cols, rgbImg.rows, static_cast<int>(rgbImg.step), QImage::Format_RGB888);

            // 缩放图片到指定大小
            QSize newSize(200,100);
            QImage scaledImg = qImg.scaled(newSize, Qt::KeepAspectRatio);

            // 这里假设你有一个 Plate_start 信号已经在某处定义
            emit Plate_start(rgbImg);  // 调用子线程进行进一步处理
        });

        // 开始捕获
        imageCapture->captureToFile(fileName);  // 在 Qt 6 中，保存文件的方法有所不同
    }
    //如果视频播放 暂时不用
    // else
    // {
    //     //使用OpenCV截取图片
    //     //获取当前帧的时间
    //     qint64 currentTime = player->position();
    //     //将播放器跳转到当前时间
    //     player->setPosition(currentTime);
    //     //获取当前媒体文件的URL地址
    //     //QString filePath = player->currentMedia().canonicalUrl().toString();
    //     //获取当前媒体文件的本地文件路径
    //     QString filePath = player->currentMedia().canonicalUrl().toLocalFile();
    //     //使用OpenCV库读取该路径下的视频
    //     VideoCapture cap(filePath.toStdString());
    //     //
    //     if(!cap.isOpened())
    //     {
    //         qDebug()<<"Failed to open file:"<<filePath;
    //         return ;
    //     }
    //     //跳转到当前时间
    //     cap.set(CAP_PROP_POS_MSEC,currentTime);
    //     Mat  frame;
    //     cap.read(frame);
    //     //将获取到的图片显示在QLabel上供用户选择保存位置
    //     QImage img(static_cast<const uchar*>(frame.data),frame.cols,frame.rows,QImage::Format_RGB888);
    //     //缩放图片到指定大小
    //     QSize newSize(200,100);
    //     QImage scaledImg = img.scaled(newSize,Qt::KeepAspectRatio);
    //         //使用easyPR子线程获取车牌信息
    //     emit Plate_start(frame);
    // }

}



// 车辆信息
void Car::on_carInforButton_clicked()
{
    timer->stop();
    //判断摄像头和视频，如果视频暂停，隐藏，如果摄像头，隐藏即可
    if(camera->isActive())
    {
        // player->stop(); //停止播放文件
        // videowidget->setVisible(false); //隐藏文件播放的QVideoWidget
        viewfinder->setVisible(false); //隐藏摄像头显示区域
    }

    // 隐藏车辆信息的列号
    ui->tableCar->verticalHeader()->setVisible(false);
    // 设置表头
    QStringList header;
    header<<"ID" << "车牌号" << "入库时间" << "出库时间" << "费用" << "停车地点" << "车费单价";
    ui->tableCar->setHorizontalHeaderLabels(header);
    //让列号 自适应列表大小
    //ui->tableCar->resizeColumnsToContents(); //自适
    //设置列号的宽度
    ui->tableCar->setColumnWidth(2, 200);
    ui->tableCar->setColumnWidth(3, 200);
    //读取数据库的数据

    //使用MySQL语句查询车库信息，根据时间倒序
    QString sqlstrCar="SELECT id, license_plate, check_in_time, check_out_time, fee, location, P_fee FROM CAR JOIN parking ON Car.location = parking.P_name ORDER BY check_in_time DESC;";
    QSqlQuery q;
    q.prepare(sqlstrCar);
    int i = 0;
    if(q.exec())
    {

        while (q.next()) {
            print_widget(q,i);
            i++;
        }
    }
    //读取数据库数据，将车位剩余情况显示到TextLabel当中
}

//输出widget列表数据
void Car::print_widget(QSqlQuery q,int i)
{
    //设置表格行数，每一次加一行
    ui->tableCar->setRowCount(i+1);
        //第一列
    ui->tableCar->setItem(i,0,new QTableWidgetItem(q.value(0).toString()));
    ui->tableCar->item(i,0)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

    //为添加过后的每i行第0列设置数据只读
    ui->tableCar->item(i,0)->setFlags(ui->tableCar->item(i,0)->flags()^Qt::ItemIsEditable);

    //第二列
    ui->tableCar->setItem(i,1,new QTableWidgetItem(q.value(1).toString()));
    ui->tableCar->item(i,1)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
    //第三列
    //使用QDateTimeEdit
    QDateTimeEdit *editDateTime = new QDateTimeEdit();
    editDateTime->setDisplayFormat("yyyy-MM-dd hh:mm:ss");

    editDateTime->setDateTime(q.value(2).toDateTime());

    ui->tableCar->setCellWidget (i, 2, editDateTime);

    //ui->tableCar->setItem(i,2,new QTableWidgetItem(q.value(2).toString()));
    //ui->tableCar->item(i,2)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
    //第四列

    //如果数据库输出时间为空
    if (q.value(3).isNull())
    {
        ui->tableCar->setItem(i,3,new QTableWidgetItem(q.value(3).toString()));
        ui->tableCar->item(i,3)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
    }
    else
    {
        QDateTimeEdit *editDateTime2 = new QDateTimeEdit();
        editDateTime2->setDisplayFormat("yyyy-MM-dd hh:mm:ss");
        editDateTime2->setDateTime(q.value(3).toDateTime());
        ui->tableCar->setCellWidget(i, 3, editDateTime2);
    }
    //第五列
    ui->tableCar->setItem(i,4,new QTableWidgetItem(q.value(4).toString()));
    ui->tableCar->item(i,4)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
    //第六列
    ui->tableCar->setItem(i,5,new QTableWidgetItem(q.value(5).toString()));
    ui->tableCar->item(i,5)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
    //第七列
    ui->tableCar->setItem(i,6,new QTableWidgetItem(q.value(6).toString()));
    ui->tableCar->item(i,6)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
}


// 2. 查询车辆信息
//点击查询后，根据用户输入的时间和车牌号，来进行输出数据
void Car::on_Carcheck_clicked()
{
    qDebug() << "查询车辆信息";
    //读取用户的输入数据
    QString Car_name = ui->find_lineEdit->text();
    QDateTime begin_datetimes = ui->begin_dateTimeEdit->dateTime();
    QDateTime end_datetimes = ui->end_dateTimeEdit->dateTime();
    QString begin_time = begin_datetimes.toString("yyyy-MM-dd hh:mm:ss");
    QString end_time = end_datetimes.toString("yyyy-MM-dd hh:mm:ss");
    //书写sql语句
    //如果用户没有输入车牌号 则不显示
    if(Car_name.isEmpty())
    {
        //名字为空根据时间查询
        //qDebug()<<"名字为空"<<begin_time<<end_time;

        q.prepare("SELECT id, license_plate, check_in_time, check_out_time, fee, location, P_fee from car JOIN parking ON car.location = parking.P_name WHERE check_in_time BETWEEN :begin_time AND :end_time;");
        q.bindValue(":begin_time", begin_time);
        q.bindValue(":end_time", end_time);
        int i = 0;
        if(q.exec())
        {

            while (q.next()) {
                print_widget(q,i);
                i++;
            }
        }
    }
    else
    {   //名字不为空，根据时间和 名字
        qDebug()<<"名字不为空" << Car_name << begin_time<<end_time;
        q.prepare("SELECT id, license_plate, check_in_time, check_out_time, fee, location, P_fee from car JOIN parking ON car.location = parking.P_name WHERE check_in_time BETWEEN :begin_time AND :end_time AND license_plate =:Car_name;");
        q.bindValue(":begin_time", begin_time);
        q.bindValue(":end_time", end_time);
        q.bindValue(":Car_name",Car_name);
        int i = 0;
        if(q.exec())
        {
            while (q.next())
            {
                print_widget(q,i);
                i++;
            }
        }
    }
    //调用函数输出
}
// 3. 删除车辆信息
//读取当前鼠标所在车牌号，进行删除
void Car::on_Car_delete_clicked()
{
    //读取当前鼠标所在车辆信息表的行数
    int row = ui->tableCar->currentRow();
    qDebug()<<row;
    if(row>=0)
    {
        //读取用户点击位置的车牌号
        QString license_plate = ui->tableCar->item(row,1)->text();

        QString sql_Drop_car = QStringLiteral("DELETE FROM CAR WHERE license_plate = '%1';").arg(license_plate);

        if (mysql_C->execute_bool(sql_Drop_car))
        {
            qDebug() << "CAR delete successfully.";
            Car::on_carInforButton_clicked(); // 刷新列表
            // TODO现有车位同步
            emit now_count_dec_signal();
        }
        else
        {
            qDebug()<<sql_Drop_car;
            qDebug() << "User Add error" << license_plate;
        }
    }
}

// 监控
void Car::on_check_camera_clicked()  //打开右侧监控按钮
{
    // 获得当前的摄像头数量
   for(int i = 0;i < Camera::getCameraCount(); )
   {
       //将摄像头数量呈现到comboBox里面
       ui->comboBox->addItem("摄像头:  "+QString::number(++i));
       qDebug() << i;
   }
   // 判断主线程的摄像头是否开启，关闭摄像头
   ui->comboBox->setCurrentIndex(0);  //默认为第一个
   camera->stop(); //停止摄像头


   viewfinder = new QVideoWidget(ui->camera_label);
   viewfinder->setAspectRatioMode(Qt::IgnoreAspectRatio); //设置宽高比为自由调整
   //viemfinder->resize(500,250);
   viewfinder->setGeometry(10, 10, 500, 250);
}

// 监控-初始化
void Car::on_thread_camera_init_clicked()
{
   // 建立Camerathread线程
   Camera *camerth = new Camera(ui->comboBox->currentIndex()); //传入用于选中的并实现初始化
   QThread* t3 = new QThread;  // 摄像头线程
   camerth->moveToThread(t3);
   t3->start();
   //连接主线程启动子线程
   connect(this, &Car::Camerathread_open_Signale, camerth, &Camera::CameraShow);
   //子线程有图片传过来
   connect(camerth, &Camera::Camera_Image_signal, this,[=](int id,const QVideoFrame& frame)
   {
       qDebug()<< "子线程传入的图片ID" <<id;
       // 首先从 QVideoFrame 转换为 QImage
       QImage image = frame.toImage();
       //将图片呈现到UI当中
       ui->camera_label->setPixmap(QPixmap::fromImage(image));//将视频帧转入图片传到UI当中
   });
}
// 监控-释放摄像头子线程资源
void Car::on_thread_release_clicked()
{
    qDebug() <<" 点击了释放资源槽函数";
}

// 监控-打开关闭摄像头操作
void Car::on_camera_open_button_clicked()
{
   qDebug()<<"open/close按钮";
   if(ui->camera_open_button->text() == "Open")
   {
       qDebug()<<"启动子线程 ";
       emit Camerathread_open_Signale();
       ui->camera_open_button->setText("Close");
       bool camera_status = true; // 停止状态 需要修复bug
   }
   else{
       ui->camera_open_button->setText("Open");

   }
}

// 获取系统时间
void Car::updateTime()
{
    QDateTime now = QDateTime::currentDateTime();  // 获取当前的日期和时间
    QString formattedTime = now.toString("yyyy-MM-dd HH:mm:ss");  // 将日期和时间格式化为字符串

    // 显示的文本为当前时间
    ui->datetime->setText(formattedTime);
}
