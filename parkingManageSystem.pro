QT       += core gui sql widgets uitools

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dbThreadPool.cpp \
    init.cpp \
    main.cpp \
    login.cpp \
    mysql.cpp \
    mysqlinit.cpp \
    signup.cpp \
    # car.cpp \

HEADERS += \
    dbThreadPool.h \
    init.h \
    login.h \
    mysql.h \
    mysqlinit.h \
    signup.h \
    # car.h \

FORMS += \
    mainwindow.ui \
    car.ui \
    # signup.ui \
    initfile.ui \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


# # 设置logo
# RC_ICONS = logo.ico

RESOURCES +=


