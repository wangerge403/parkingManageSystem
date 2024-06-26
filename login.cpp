#include "login.h"
#include "ui_mainwindow.h"
#include <QGraphicsDropShadowEffect>
#include <QCryptographicHash> //加载加密函数库
#include <QSettings>
#include "signup.h"
#include "car.h"

//加密函数，输入密码，返回hash值
QString encryptPassword(QString password) {
    // 将密码转换为字节数组
    QByteArray passwordBytes = password.toUtf8();
    // 使用SHA256算法进行加密
    QByteArray hashBytes = QCryptographicHash::hash(passwordBytes, QCryptographicHash::Sha256);
    // 将加密后的字节数组转换为十六进制字符串
    QString hash = QString::fromLatin1(hashBytes.toHex());
    return hash;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //设置窗口标题
    setWindowTitle("车辆管理系统登录");
    mysql(); //mysql初始化



    // 设置登陆页面左边logo
    // 创建QPixmap对象，加载png图像存储到pix变量中，使用new关键字分配堆内存来储存该对象
    QPixmap *pix = new QPixmap(":/icon/images/parking.png");
    QSize sz = ui->label_image->size();
    ui->label_image->setPixmap(pix->scaled(sz));

    connect(ui->lineEdit_password, &QLineEdit::returnPressed, ui->pushButton_2, &QPushButton::click);

}

MainWindow::~MainWindow()
{
//    mysql_c.mysql_close(); //关闭窗口则私房数据库连接
    delete ui;

}

//登录
void MainWindow::on_pushButton_2_clicked()
{

    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    if (username.isEmpty() || password.isEmpty())
    {
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setText("账户和密码不能为空");
        msgBox.setWindowTitle("登录");
        msgBox.setStyleSheet("background-color: white; color: red;");
        msgBox.exec();
        return;
    }
    QString encryptedPassword = encryptPassword(password); // 对密码进行加密
    QString sql =
        QStringLiteral("select * from USER WHERE username='%1' and password = '%2'")
                      .arg(username,encryptedPassword);

    //使用线程去执行MySQL语句
    QSqlQuery query = mysql_c.execute(sql);
    //判断执行结果
    if (query.lastError().isValid()) {
        qDebug() << "SQL error:" << query.lastError().text();
        QMessageBox::information(this, "登陆认证", "数据库查询失败");
    }
    else if(query.next())
    {
        // 记住我
        // if() {};
        qDebug()<<"Login success";
        // 进入主页面
        Car *w = new Car();
        qDebug()<< w;
        w->show();

        //关闭当前的注册页面
        this->close();
    }
    else
    {
        qDebug() << "Login error";
        QMessageBox::information(this, "登录校验", "账户或密码错误");

    }

}

//点击按钮 - 注册页
void MainWindow::on_return_2_clicked()
{

    this->close();
    Signup *s = new Signup;
    s->show();
    s->setAttribute(Qt::WA_DeleteOnClose);
}

