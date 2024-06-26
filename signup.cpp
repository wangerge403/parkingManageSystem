#include "signup.h"
#include "ui_signup.h"

Signup::Signup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Signup)
{
    ui->setupUi(this);
    setWindowTitle("车辆管理系统注册");
    mysql(); //mysql初始化
    //设置左侧背景图片
    QPixmap *pix = new QPixmap(":/icon/images/parking.png");
    QSize sz = ui->label_login_image->size();
    // 将 QPixmap 缩放到 QLabel 的尺寸，忽略纵横比
    QPixmap scaledPix = pix->scaled(sz, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->label_login_image->setPixmap(scaledPix);

    connect(ui->lineEdit_tel, &QLineEdit::returnPressed, ui->pushButton_sure, &QPushButton::click);
}

Signup::~Signup()
{
    delete ui;
}

void Signup::on_pushButton_back_clicked()
{
    //创建登陆注册页面
    MainWindow * w =new MainWindow;
    //呈现登陆主页面
    w->show();
    //关闭当前的注册页面
    this->close();
    w->setAttribute(Qt::WA_DeleteOnClose);
}

//点击注册页面的确认按钮
void Signup::on_pushButton_sure_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    QString surepass = ui->lineEdit_sure_password->text();
    QString telephone = ui->lineEdit_tel->text();
    QString truename = ui->lineEdit_name->text();
    if (username.isEmpty() || password.isEmpty())
    {
        QMessageBox::warning(this, "注册认证", "账户和密码不能为空");
        return;
    }

    //判断确认密码是够一致
    if(password == surepass)
    {
        QString encryptedPassword = encryptPassword(password); // 对密码进行加密
        QString sql = QStringLiteral("insert into USER(username,password,telephone,truename) values('%1','%2','%3','%4');").arg(username, encryptedPassword,telephone,truename);


        //判断执行结果
        if(!mysql_c->execute_bool(sql))
        {
            qDebug()<<username<<encryptedPassword<<telephone<<truename;
            qDebug()<<"insert into error";

        }
        else
        {
            qDebug()<<"inert into success";
            QMessageBox::information(this,"注册成功", "注册账号成功!");
            //创建主登陆页面的堆空间，进入登陆页面，释放注册页面空间
            MainWindow *w = new MainWindow;
            w->show();
            this->close();
        }
    }
    else
    {
        QMessageBox::information(this,"注册认证","两次密码输入不一致");
    }
}

