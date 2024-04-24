/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_image;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_5;
    QLabel *label;
    QLineEdit *lineEdit_username;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_3;
    QCheckBox *remebermeBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *return_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(781, 543);
        MainWindow->setMinimumSize(QSize(781, 521));
        MainWindow->setMaximumSize(QSize(781, 543));
        MainWindow->setSizeIncrement(QSize(0, 0));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_image = new QLabel(centralwidget);
        label_image->setObjectName("label_image");
        label_image->setMinimumSize(QSize(450, 519));

        horizontalLayout_2->addWidget(label_image);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, -1, 12, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(10, -1, -1, -1);
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 20pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));

        verticalLayout->addWidget(label);

        lineEdit_username = new QLineEdit(centralwidget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setMinimumSize(QSize(0, 60));
        lineEdit_username->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove transparent;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));

        verticalLayout->addWidget(lineEdit_username);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));

        verticalLayout->addWidget(label_2);

        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setMinimumSize(QSize(0, 61));
        lineEdit_password->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove transparent;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_password);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(9, 10, -1, -1);
        remebermeBox = new QCheckBox(centralwidget);
        remebermeBox->setObjectName("remebermeBox");

        gridLayout_3->addWidget(remebermeBox, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(9, 0, -1, -1);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgba(64, 145, 232, 255);\n"
"color: rgb(255, 255, 255);\n"
"border:0px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 14pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));

        horizontalLayout->addWidget(pushButton_2);

        return_2 = new QPushButton(centralwidget);
        return_2->setObjectName("return_2");
        return_2->setMinimumSize(QSize(0, 61));
        return_2->setStyleSheet(QString::fromUtf8("background-color: rgba(64, 145, 232, 255);\n"
"color: rgb(255, 255, 255);\n"
"border:0px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 14pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));

        horizontalLayout->addWidget(return_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_image->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        lineEdit_username->setText(QCoreApplication::translate("MainWindow", "admin123", nullptr));
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201", nullptr));
        lineEdit_password->setText(QCoreApplication::translate("MainWindow", "123456", nullptr));
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\347\224\250\344\272\216\345\257\206\347\240\201", nullptr));
        remebermeBox->setText(QCoreApplication::translate("MainWindow", "\350\256\260\344\275\217\346\210\221", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        return_2->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
