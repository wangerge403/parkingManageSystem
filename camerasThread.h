#ifndef CAMERASTHREAD_H
#define CAMERASTHREAD_H
#include <QMediaPlayer>
#include <QVideoWidget>

#include <QCamera>
#include <QMediaDevices> // <QCameraInfo>
#include <QCameraDevice>
#include <QVideoWidget> // #include <QCameraViewfinder> // 显示摄像头区域
#include <QMediaCaptureSession> // #include <QCameraImageCapture> // 捕获图片
#include <QImageCapture>// 该类是用于拍照和捕获静态图像。
#include <QFileDialog>
#include <QDateTime>
#include <QtGui/QScreen>
#include <QObject>
#include <QDebug>
#include <QImage>
#include <QString>
#include <QThread>
#include "iostream"

using namespace std;

// TODO纯Qcamera 方案舍弃

//相机类：提供相机的基本操作
class Camera : public QObject
{
    Q_OBJECT

public:
    Camera(int number);  //传入初始化的摄像头编号
    ~Camera();

    static int getCameraCount();
signals:
    void Camera_Image_signal(int id, const QVideoFrame& frame);
public slots:

    void CameraShow();

private:

    //创建摄像头对象
    QCamera *camera;

    //捕获图片,操作用于捕获的对象
    QMediaCaptureSession *captureSession;
    // QCameraImageCapture *imageCapture;
    QImageCapture *imageCapture;
    bool camera_status = false;
};
#endif // CAMERASTHREAD_H
