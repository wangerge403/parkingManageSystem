// 摄像头线程

#include "camerasThread.h"


Camera::Camera(int number)
{
    // 获得所有摄像头列表
    const QList<QCameraDevice> cameras = QMediaDevices::videoInputs();
    if (!cameras.isEmpty() && cameras.size() > number) {
        // 初始化摄像头
        camera = new QCamera(cameras.at(number));

        // 创建捕获会话并设置摄像头为视频源
        captureSession = new QMediaCaptureSession;
        captureSession->setCamera(camera);

        // 创建图像捕获对象，并设置到捕获会话
        imageCapture = new QImageCapture(captureSession);

        // 开启摄像头
        camera->start();

        // 更新状态标志
        camera_statue = true;
    } else {
        qDebug() << "Camera not found or index out of bounds.";
        camera_statue = false;
    }
}


Camera::~Camera()
{
    //释放资源
    camera->stop();
    delete imageCapture;
    delete camera;
}


int Camera::getCameraCount()
{
    //获取可用相机数目
    const QList<QCameraDevice> cameras = QMediaDevices::videoInputs();
    return cameras.count();

}

void Camera::CameraShow()
{
    // //信号槽
    // /*QCameraImageCapture::imageCaptured(int id, const QImage &preview)
    //   Signal emitted when the frame with request id was captured, but not processed and saved yet. Frame preview can be displayed to user.
    //  *
    //  * */
    // connect(imageCapture,&QCameraImageCapture::imageCaptured,this,[=](int id,const QImage &preview)
    //         {
    //             qDebug()<<"图片传出";
    //             emit Camera_Image_signal(id,preview);

    //         });
    // //进入图片子线程
    // qDebug()<<"进入图片子线程";
    // while(camera_statue)
    // {

    //     if(camera->status() == QCamera::ActiveStatus)
    //     {
    //         //抓取图片
    //         qDebug()<<"开始抓取图片";
    //         imageCapture->capture();
    //         //使用信号槽
    //     }
    //     QThread::msleep(1000); //线程休眠100毫秒
    // }

}
