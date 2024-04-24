/********************************************************************************
** Form generated from reading UI file 'car.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAR_H
#define UI_CAR_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Car
{
public:
    QHBoxLayout *horizontalLayout_7;
    QStackedWidget *stack;
    QWidget *main;
    QHBoxLayout *horizontalLayout_5;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *fileopen;
    QLabel *screen_label;
    QPushButton *camera_button;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *video_pause;
    QPushButton *camera_take;
    QPushButton *video_start;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *Car_idinput;
    QPushButton *submitCar;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *Car_output;
    QPushButton *DeleteCar;
    QLabel *label_pie;
    QLabel *camera;
    QLabel *park_all;
    QLabel *park_now;
    QLabel *park_reserve;
    QWidget *message;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelCar;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *find_lineEdit;
    QDateTimeEdit *begin_dateTimeEdit;
    QDateTimeEdit *end_dateTimeEdit;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *Carcheck;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *Car_delete;
    QSpacerItem *horizontalSpacer_7;
    QTableWidget *tableCar;
    QSpacerItem *verticalSpacer_12;
    QWidget *ctrol;
    QVBoxLayout *verticalLayout_9;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *ButtonADD;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *ButtonDelete;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *ButtonModify;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_16;
    QTableWidget *tablectrol;
    QSpacerItem *verticalSpacer_18;
    QSpacerItem *verticalSpacer_20;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *verticalSpacer_19;
    QSpacerItem *verticalSpacer_21;
    QWidget *camera_page;
    QPushButton *thread_release;
    QPushButton *thread_pause;
    QLabel *camera_label;
    QPushButton *thread_camera_init;
    QComboBox *comboBox;
    QPushButton *camera_open_button;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_9;
    QPushButton *check_camera;
    QSpacerItem *verticalSpacer_10;
    QPushButton *CtrolButton;
    QSpacerItem *verticalSpacer_6;
    QPushButton *messageButton;
    QSpacerItem *verticalSpacer_7;
    QPushButton *MainButton;
    QSpacerItem *verticalSpacer_8;

    void setupUi(QWidget *Car)
    {
        if (Car->objectName().isEmpty())
            Car->setObjectName("Car");
        Car->resize(1482, 715);
        Car->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalLayout_7 = new QHBoxLayout(Car);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        stack = new QStackedWidget(Car);
        stack->setObjectName("stack");
        stack->setMinimumSize(QSize(1030, 0));
        stack->setSizeIncrement(QSize(30, 30));
        stack->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        main = new QWidget();
        main->setObjectName("main");
        horizontalLayout_5 = new QHBoxLayout(main);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalSlider = new QSlider(main);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setStyleSheet(QString::fromUtf8("/* \351\234\200\350\246\201\345\205\210\350\256\276\347\275\256groove\357\274\214\346\260\264\345\271\263\346\273\221\345\212\250\346\235\241*/\n"
"QSlider#customSlider::groove:horizontal {\n"
"    border: none;\n"
"    height: 6px;\n"
"    border-radius: 3px;\n"
"    background: lightgray;\n"
"}\n"
"QSlider#customSlider::handle:horizontal {\n"
"    border: none;\n"
"    margin: -5px 0px; /* \344\270\212\344\270\213\350\276\271\350\267\235\345\222\214\345\267\246\345\217\263\350\276\271\350\267\235*/\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    border-radius: 8px;\n"
"    background: #e83c3c;\n"
"    border-image: url(:/images/white.png);\n"
"}\n"
"/*\345\210\222\350\277\207\351\203\250\345\210\206*/\n"
"QSlider#customSlider::sub-page:horizontal {\n"
"    background: red;\n"
"    height: 4px;\n"
"    border-radius: 3px;\n"
"}\n"
"/*\346\234\252\345\210\222\350\277\207\351\203\250\345\210\206*/\n"
"QSlider#customSlider::add-page:horizontal {\n"
"    background: lightgray;\n"
"    height: 4px;\n"
"    bord"
                        "er-radius: 3px;\n"
"}\n"
""));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(horizontalSlider);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        fileopen = new QPushButton(main);
        fileopen->setObjectName("fileopen");
        fileopen->setMinimumSize(QSize(0, 45));
        fileopen->setMaximumSize(QSize(16777215, 45));
        fileopen->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"border-radius:7px;"));

        horizontalLayout_2->addWidget(fileopen);

        screen_label = new QLabel(main);
        screen_label->setObjectName("screen_label");

        horizontalLayout_2->addWidget(screen_label);

        camera_button = new QPushButton(main);
        camera_button->setObjectName("camera_button");
        camera_button->setMinimumSize(QSize(0, 45));
        camera_button->setMaximumSize(QSize(16777215, 45));
        camera_button->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"border-radius:7px;"));

        horizontalLayout_2->addWidget(camera_button);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, 57, -1, -1);
        video_pause = new QPushButton(main);
        video_pause->setObjectName("video_pause");
        video_pause->setMinimumSize(QSize(0, 45));
        video_pause->setMaximumSize(QSize(16777215, 45));
        video_pause->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"border-radius:7px;"));

        horizontalLayout_3->addWidget(video_pause);

        camera_take = new QPushButton(main);
        camera_take->setObjectName("camera_take");
        camera_take->setMinimumSize(QSize(0, 45));
        camera_take->setMaximumSize(QSize(16777215, 45));
        camera_take->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"border-radius:7px;"));

        horizontalLayout_3->addWidget(camera_take);

        video_start = new QPushButton(main);
        video_start->setObjectName("video_start");
        video_start->setMinimumSize(QSize(0, 45));
        video_start->setMaximumSize(QSize(16777215, 45));
        video_start->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"border-radius:7px;"));

        horizontalLayout_3->addWidget(video_start);


        verticalLayout_5->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout_5, 1, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(-1, 39, -1, 60);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer);

        label_title = new QLabel(main);
        label_title->setObjectName("label_title");
        label_title->setMaximumSize(QSize(16777215, 45));
        label_title->setStyleSheet(QString::fromUtf8("font: 13pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));

        verticalLayout_4->addWidget(label_title);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, 19, -1, -1);
        Car_idinput = new QLineEdit(main);
        Car_idinput->setObjectName("Car_idinput");
        Car_idinput->setMinimumSize(QSize(0, 55));
        Car_idinput->setMaximumSize(QSize(16777215, 45));
        Car_idinput->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));

        verticalLayout_2->addWidget(Car_idinput);

        submitCar = new QPushButton(main);
        submitCar->setObjectName("submitCar");
        submitCar->setMinimumSize(QSize(0, 45));
        submitCar->setMaximumSize(QSize(16777215, 45));
        submitCar->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"border-radius:7px;"));

        verticalLayout_2->addWidget(submitCar);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, 18, -1, -1);
        Car_output = new QLineEdit(main);
        Car_output->setObjectName("Car_output");
        Car_output->setMinimumSize(QSize(0, 55));
        Car_output->setMaximumSize(QSize(16777215, 45));
        Car_output->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));

        verticalLayout_3->addWidget(Car_output);

        DeleteCar = new QPushButton(main);
        DeleteCar->setObjectName("DeleteCar");
        DeleteCar->setMinimumSize(QSize(0, 45));
        DeleteCar->setMaximumSize(QSize(16777215, 45));
        DeleteCar->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"border-radius:7px;"));

        verticalLayout_3->addWidget(DeleteCar);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_4, 1, 1, 1, 1);

        label_pie = new QLabel(main);
        label_pie->setObjectName("label_pie");
        label_pie->setMinimumSize(QSize(0, 350));
        label_pie->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_pie, 0, 1, 1, 1);

        camera = new QLabel(main);
        camera->setObjectName("camera");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(camera->sizePolicy().hasHeightForWidth());
        camera->setSizePolicy(sizePolicy);
        camera->setMinimumSize(QSize(500, 250));

        gridLayout->addWidget(camera, 0, 0, 1, 1);


        horizontalLayout_5->addLayout(gridLayout);

        park_all = new QLabel(main);
        park_all->setObjectName("park_all");

        horizontalLayout_5->addWidget(park_all);

        park_now = new QLabel(main);
        park_now->setObjectName("park_now");

        horizontalLayout_5->addWidget(park_now);

        park_reserve = new QLabel(main);
        park_reserve->setObjectName("park_reserve");

        horizontalLayout_5->addWidget(park_reserve);

        stack->addWidget(main);
        message = new QWidget();
        message->setObjectName("message");
        gridLayout_2 = new QGridLayout(message);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_9, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        labelCar = new QLabel(message);
        labelCar->setObjectName("labelCar");
        labelCar->setStyleSheet(QString::fromUtf8("font: 17pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));

        horizontalLayout_6->addWidget(labelCar);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        find_lineEdit = new QLineEdit(message);
        find_lineEdit->setObjectName("find_lineEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(find_lineEdit->sizePolicy().hasHeightForWidth());
        find_lineEdit->setSizePolicy(sizePolicy1);
        find_lineEdit->setMinimumSize(QSize(100, 40));
        find_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));

        horizontalLayout_6->addWidget(find_lineEdit);

        begin_dateTimeEdit = new QDateTimeEdit(message);
        begin_dateTimeEdit->setObjectName("begin_dateTimeEdit");
        begin_dateTimeEdit->setMinimumSize(QSize(0, 40));
        begin_dateTimeEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        begin_dateTimeEdit->setDateTime(QDateTime(QDate(2023, 1, 1), QTime(0, 0, 0)));
        begin_dateTimeEdit->setDate(QDate(2023, 1, 1));

        horizontalLayout_6->addWidget(begin_dateTimeEdit);

        end_dateTimeEdit = new QDateTimeEdit(message);
        end_dateTimeEdit->setObjectName("end_dateTimeEdit");
        end_dateTimeEdit->setMinimumSize(QSize(0, 40));
        end_dateTimeEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        end_dateTimeEdit->setDateTime(QDateTime(QDate(2024, 1, 1), QTime(0, 0, 0)));

        horizontalLayout_6->addWidget(end_dateTimeEdit);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        Carcheck = new QPushButton(message);
        Carcheck->setObjectName("Carcheck");
        Carcheck->setMinimumSize(QSize(100, 40));
        Carcheck->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"border-radius:7px;"));

        horizontalLayout_6->addWidget(Carcheck);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        Car_delete = new QPushButton(message);
        Car_delete->setObjectName("Car_delete");
        Car_delete->setMinimumSize(QSize(100, 40));
        Car_delete->setToolTipDuration(-3);
        Car_delete->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"border-radius:7px;"));

        horizontalLayout_6->addWidget(Car_delete);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        gridLayout_2->addLayout(horizontalLayout_6, 0, 1, 1, 1);

        tableCar = new QTableWidget(message);
        if (tableCar->columnCount() < 7)
            tableCar->setColumnCount(7);
        if (tableCar->rowCount() < 10)
            tableCar->setRowCount(10);
        tableCar->setObjectName("tableCar");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableCar->sizePolicy().hasHeightForWidth());
        tableCar->setSizePolicy(sizePolicy2);
        tableCar->setMinimumSize(QSize(951, 500));
        tableCar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: none;"));
        tableCar->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableCar->setRowCount(10);
        tableCar->setColumnCount(7);

        gridLayout_2->addWidget(tableCar, 1, 1, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_12, 2, 1, 1, 1);

        stack->addWidget(message);
        ctrol = new QWidget();
        ctrol->setObjectName("ctrol");
        verticalLayout_9 = new QVBoxLayout(ctrol);
        verticalLayout_9->setObjectName("verticalLayout_9");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        label = new QLabel(ctrol);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 1, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_14);

        ButtonADD = new QPushButton(ctrol);
        ButtonADD->setObjectName("ButtonADD");
        ButtonADD->setMinimumSize(QSize(100, 45));
        ButtonADD->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"border-radius:7px;"));

        horizontalLayout_4->addWidget(ButtonADD);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        ButtonDelete = new QPushButton(ctrol);
        ButtonDelete->setObjectName("ButtonDelete");
        ButtonDelete->setMinimumSize(QSize(100, 45));
        ButtonDelete->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"border-radius:7px;"));

        horizontalLayout_4->addWidget(ButtonDelete);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);

        ButtonModify = new QPushButton(ctrol);
        ButtonModify->setObjectName("ButtonModify");
        ButtonModify->setMinimumSize(QSize(100, 45));
        ButtonModify->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"border-radius:7px;"));

        horizontalLayout_4->addWidget(ButtonModify);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_13);


        gridLayout_3->addLayout(horizontalLayout_4, 5, 1, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_16, 3, 0, 1, 1);

        tablectrol = new QTableWidget(ctrol);
        if (tablectrol->columnCount() < 5)
            tablectrol->setColumnCount(5);
        if (tablectrol->rowCount() < 6)
            tablectrol->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tablectrol->setItem(0, 0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tablectrol->setItem(1, 0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tablectrol->setItem(1, 1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tablectrol->setItem(2, 0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tablectrol->setItem(2, 1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tablectrol->setItem(3, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tablectrol->setItem(3, 1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tablectrol->setItem(4, 0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tablectrol->setItem(4, 1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tablectrol->setItem(5, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tablectrol->setItem(5, 1, __qtablewidgetitem10);
        tablectrol->setObjectName("tablectrol");
        tablectrol->setMinimumSize(QSize(695, 300));
        tablectrol->setStyleSheet(QString::fromUtf8("\n"
"font: 25 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"border-radius:7px;"));
        tablectrol->setRowCount(6);
        tablectrol->setColumnCount(5);

        gridLayout_3->addWidget(tablectrol, 3, 1, 1, 1);

        verticalSpacer_18 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_18, 4, 1, 1, 1);

        verticalSpacer_20 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_20, 0, 1, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_15, 3, 2, 1, 1);

        verticalSpacer_19 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_19, 2, 1, 1, 1);

        verticalSpacer_21 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_21, 6, 1, 1, 1);


        verticalLayout_9->addLayout(gridLayout_3);

        stack->addWidget(ctrol);
        camera_page = new QWidget();
        camera_page->setObjectName("camera_page");
        thread_release = new QPushButton(camera_page);
        thread_release->setObjectName("thread_release");
        thread_release->setGeometry(QRect(730, 600, 101, 51));
        thread_pause = new QPushButton(camera_page);
        thread_pause->setObjectName("thread_pause");
        thread_pause->setGeometry(QRect(870, 600, 121, 51));
        camera_label = new QLabel(camera_page);
        camera_label->setObjectName("camera_label");
        camera_label->setGeometry(QRect(110, 50, 611, 511));
        camera_label->setMinimumSize(QSize(0, 500));
        thread_camera_init = new QPushButton(camera_page);
        thread_camera_init->setObjectName("thread_camera_init");
        thread_camera_init->setGeometry(QRect(180, 600, 93, 50));
        thread_camera_init->setMinimumSize(QSize(50, 50));
        comboBox = new QComboBox(camera_page);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(330, 600, 72, 50));
        comboBox->setMinimumSize(QSize(0, 50));
        comboBox->setMaximumSize(QSize(200, 30));
        comboBox->setLayoutDirection(Qt::LeftToRight);
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        camera_open_button = new QPushButton(camera_page);
        camera_open_button->setObjectName("camera_open_button");
        camera_open_button->setGeometry(QRect(590, 600, 93, 50));
        camera_open_button->setMinimumSize(QSize(0, 50));
        camera_open_button->setMaximumSize(QSize(200, 16777215));
        stack->addWidget(camera_page);

        horizontalLayout_7->addWidget(stack);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, -1, 10, -1);
        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_9);

        check_camera = new QPushButton(Car);
        check_camera->setObjectName("check_camera");
        check_camera->setMinimumSize(QSize(150, 45));
        check_camera->setMaximumSize(QSize(150, 45));
        check_camera->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"border-radius:7px;"));

        verticalLayout->addWidget(check_camera);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_10);

        CtrolButton = new QPushButton(Car);
        CtrolButton->setObjectName("CtrolButton");
        CtrolButton->setMinimumSize(QSize(0, 45));
        CtrolButton->setMaximumSize(QSize(150, 150));
        CtrolButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"border-radius:7px;"));

        verticalLayout->addWidget(CtrolButton);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        messageButton = new QPushButton(Car);
        messageButton->setObjectName("messageButton");
        messageButton->setMinimumSize(QSize(0, 45));
        messageButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"border-radius:7px;"));

        verticalLayout->addWidget(messageButton);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        MainButton = new QPushButton(Car);
        MainButton->setObjectName("MainButton");
        MainButton->setMinimumSize(QSize(0, 45));
        MainButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"border-radius:7px;"));

        verticalLayout->addWidget(MainButton);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);


        horizontalLayout_7->addLayout(verticalLayout);


        retranslateUi(Car);

        stack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Car);
    } // setupUi

    void retranslateUi(QWidget *Car)
    {
        Car->setWindowTitle(QCoreApplication::translate("Car", "Form", nullptr));
        fileopen->setText(QCoreApplication::translate("Car", "\350\247\206\351\242\221", nullptr));
        screen_label->setText(QString());
        camera_button->setText(QCoreApplication::translate("Car", "\346\221\204\345\203\217\345\244\264", nullptr));
        video_pause->setText(QCoreApplication::translate("Car", "\346\232\202\345\201\234", nullptr));
        camera_take->setText(QCoreApplication::translate("Car", "\346\210\252\345\217\226\347\205\247\347\211\207", nullptr));
        video_start->setText(QCoreApplication::translate("Car", "\346\222\255\346\224\276", nullptr));
        label_title->setText(QCoreApplication::translate("Car", "\350\257\206\345\210\253\347\232\204\350\275\246\347\211\214\345\217\267", nullptr));
        Car_idinput->setPlaceholderText(QCoreApplication::translate("Car", "\345\205\245\345\272\223\350\275\246\347\211\214\345\217\267", nullptr));
        submitCar->setText(QCoreApplication::translate("Car", "\345\205\245\345\272\223", nullptr));
        Car_output->setPlaceholderText(QCoreApplication::translate("Car", "\345\207\272\345\272\223\350\275\246\347\211\214\345\217\267", nullptr));
        DeleteCar->setText(QCoreApplication::translate("Car", "\345\207\272\345\272\223", nullptr));
        label_pie->setText(QString());
        camera->setText(QString());
        park_all->setText(QString());
        park_now->setText(QString());
        park_reserve->setText(QString());
        labelCar->setText(QCoreApplication::translate("Car", "\350\275\246\345\272\223\344\277\241\346\201\257\347\263\273\347\273\237", nullptr));
        find_lineEdit->setInputMask(QString());
        find_lineEdit->setPlaceholderText(QCoreApplication::translate("Car", "\346\237\245\350\257\242\347\232\204\350\275\246\347\211\214\345\217\267", nullptr));
        Carcheck->setText(QCoreApplication::translate("Car", "\346\237\245\350\257\242", nullptr));
#if QT_CONFIG(tooltip)
        Car_delete->setToolTip(QCoreApplication::translate("Car", "\351\274\240\346\240\207\351\200\211\344\270\255\350\275\246\347\211\214\345\220\216\347\202\271\345\207\273\345\215\263\345\217\257\345\210\240\351\231\244", nullptr));
#endif // QT_CONFIG(tooltip)
        Car_delete->setText(QCoreApplication::translate("Car", "\345\210\240\351\231\244", nullptr));
        label->setText(QCoreApplication::translate("Car", "\347\256\241\347\220\206\345\221\230\344\277\241\346\201\257", nullptr));
#if QT_CONFIG(tooltip)
        ButtonADD->setToolTip(QCoreApplication::translate("Car", "\345\234\250\350\241\250\346\240\274\350\276\223\345\205\245\346\226\260\347\224\250\346\210\267\344\277\241\346\201\257\347\202\271\345\207\273\345\215\263\345\217\257", nullptr));
#endif // QT_CONFIG(tooltip)
        ButtonADD->setText(QCoreApplication::translate("Car", "\346\267\273\345\212\240\346\226\260\347\224\250\346\210\267", nullptr));
#if QT_CONFIG(tooltip)
        ButtonDelete->setToolTip(QCoreApplication::translate("Car", "\351\274\240\346\240\207\347\202\271\345\207\273\350\246\201\345\210\240\351\231\244\347\232\204\350\241\214", nullptr));
#endif // QT_CONFIG(tooltip)
        ButtonDelete->setText(QCoreApplication::translate("Car", "\345\210\240\351\231\244", nullptr));
#if QT_CONFIG(tooltip)
        ButtonModify->setToolTip(QCoreApplication::translate("Car", "\347\233\264\346\216\245\350\277\233\350\241\214\344\277\256\346\224\271\347\202\271\345\207\273", nullptr));
#endif // QT_CONFIG(tooltip)
        ButtonModify->setText(QCoreApplication::translate("Car", "\344\277\256\346\224\271", nullptr));

        const bool __sortingEnabled = tablectrol->isSortingEnabled();
        tablectrol->setSortingEnabled(false);
        tablectrol->setSortingEnabled(__sortingEnabled);

        thread_release->setText(QCoreApplication::translate("Car", "\351\207\212\346\224\276\350\265\204\346\272\220", nullptr));
        thread_pause->setText(QCoreApplication::translate("Car", "\346\232\202\345\201\234", nullptr));
        camera_label->setText(QString());
        thread_camera_init->setText(QCoreApplication::translate("Car", "\345\210\235\345\247\213\345\214\226", nullptr));
        comboBox->setCurrentText(QString());
        camera_open_button->setText(QCoreApplication::translate("Car", "Open", nullptr));
        check_camera->setText(QCoreApplication::translate("Car", "\347\233\221\346\216\247", nullptr));
        CtrolButton->setText(QCoreApplication::translate("Car", "\347\256\241\347\220\206\345\221\230\344\277\241\346\201\257", nullptr));
        messageButton->setText(QCoreApplication::translate("Car", "\350\275\246\350\276\206\344\277\241\346\201\257", nullptr));
        MainButton->setText(QCoreApplication::translate("Car", "\350\277\224\345\233\236\344\270\273\351\241\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Car: public Ui_Car {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAR_H
