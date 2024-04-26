#include "dbThreadPool.h"
#include <QElapsedTimer> //记录时间
#include <QtDebug>
#include <QThread>
// 车牌号线程池 构造函数初始化
DBthreadPool_Plate::DBthreadPool_Plate(QObject *parent) : QObject(parent),QRunnable ()
{
    // 任务执行完毕，该对象自动销毁
    setAutoDelete(false);
}

void DBthreadPool_Plate::run()
{

}
