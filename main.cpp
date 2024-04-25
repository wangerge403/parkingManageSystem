
#include <QApplication>
#include <QCoreApplication>
#include <opencv2/opencv.hpp>
#include <QSqlDatabase>

#include "login.h"
#include "init.h"
#include "car.h"

int main(int argc, char *argv[])
{
    qRegisterMetaType<cv::Mat>("cv::Mat");
    QApplication a(argc, argv);

    //判断是否存在初始化文件若不存在启动，初始化程序
    QString filePath =QApplication::applicationDirPath() + "/parkinginit.json";
    QFile file(filePath);
    //如果文件不能打开不存在
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"文件不存在，初始化!77777";
        initFile *initmysql_file = new initFile;
        initmysql_file->show();
        file.close();
    }
    else
    {
        // bool login_status = true;
        // if (login_status) { // 已登录
        //     // 进入主页面
        //     Car *w = new Car();
        //     w->show();
        // }
        // 进入登录页
        // else {
            qDebug()<<"打开登录页11111";
            MainWindow *w = new MainWindow;
            w->show();
            w->setAttribute(Qt::WA_DeleteOnClose);
        // }
        file.close();
    }
    return a.exec();
}
