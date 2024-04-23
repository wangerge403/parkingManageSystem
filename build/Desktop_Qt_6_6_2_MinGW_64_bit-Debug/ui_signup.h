/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_login_image;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_username;
    QLabel *label_4;
    QLineEdit *lineEdit_password;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_5;
    QLineEdit *lineEdit_sure_password;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_name;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_tel;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_back;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_sure;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName("Signup");
        Signup->setEnabled(true);
        Signup->resize(780, 540);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Signup->sizePolicy().hasHeightForWidth());
        Signup->setSizePolicy(sizePolicy);
        Signup->setMinimumSize(QSize(780, 540));
        Signup->setMaximumSize(QSize(780, 540));
        Signup->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalLayout_4 = new QHBoxLayout(Signup);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        label_login_image = new QLabel(Signup);
        label_login_image->setObjectName("label_login_image");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_login_image->sizePolicy().hasHeightForWidth());
        label_login_image->setSizePolicy(sizePolicy1);
        label_login_image->setMinimumSize(QSize(488, 512));

        horizontalLayout_4->addWidget(label_login_image);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(Signup);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\255\227\345\277\203\345\235\212\347\214\253\347\232\204\345\244\251\347\251\272\344\271\213\345\237\216\357\274\210\347\211\271\345\210\253\345\256\232\345\210\266\347\211\210\357\274\211\";"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_title = new QLabel(Signup);
        label_title->setObjectName("label_title");
        label_title->setStyleSheet(QString::fromUtf8("font: 87 20pt \"\345\255\227\345\277\203\345\235\212\347\214\253\347\232\204\345\244\251\347\251\272\344\271\213\345\237\216\357\274\210\347\211\271\345\210\253\345\256\232\345\210\266\347\211\210\357\274\211\";"));

        horizontalLayout->addWidget(label_title);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        lineEdit_username = new QLineEdit(Signup);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setMinimumSize(QSize(0, 57));
        lineEdit_username->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));

        verticalLayout_3->addWidget(lineEdit_username);

        label_4 = new QLabel(Signup);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\255\227\345\277\203\345\235\212\347\214\253\347\232\204\345\244\251\347\251\272\344\271\213\345\237\216\357\274\210\347\211\271\345\210\253\345\256\232\345\210\266\347\211\210\357\274\211\";"));

        verticalLayout_3->addWidget(label_4);

        lineEdit_password = new QLineEdit(Signup);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setMinimumSize(QSize(0, 57));
        lineEdit_password->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(lineEdit_password);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);

        label_5 = new QLabel(Signup);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\255\227\345\277\203\345\235\212\347\214\253\347\232\204\345\244\251\347\251\272\344\271\213\345\237\216\357\274\210\347\211\271\345\210\253\345\256\232\345\210\266\347\211\210\357\274\211\";"));

        verticalLayout_3->addWidget(label_5);

        lineEdit_sure_password = new QLineEdit(Signup);
        lineEdit_sure_password->setObjectName("lineEdit_sure_password");
        lineEdit_sure_password->setMinimumSize(QSize(0, 57));
        lineEdit_sure_password->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        lineEdit_sure_password->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(lineEdit_sure_password);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Signup);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\255\227\345\277\203\345\235\212\347\214\253\347\232\204\345\244\251\347\251\272\344\271\213\345\237\216\357\274\210\347\211\271\345\210\253\345\256\232\345\210\266\347\211\210\357\274\211\";"));

        verticalLayout->addWidget(label);

        lineEdit_name = new QLineEdit(Signup);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setMinimumSize(QSize(0, 57));
        lineEdit_name->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));

        verticalLayout->addWidget(lineEdit_name);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(Signup);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\255\227\345\277\203\345\235\212\347\214\253\347\232\204\345\244\251\347\251\272\344\271\213\345\237\216\357\274\210\347\211\271\345\210\253\345\256\232\345\210\266\347\211\210\357\274\211\";"));

        verticalLayout_2->addWidget(label_2);

        lineEdit_tel = new QLineEdit(Signup);
        lineEdit_tel->setObjectName("lineEdit_tel");
        lineEdit_tel->setMinimumSize(QSize(0, 57));
        lineEdit_tel->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));

        verticalLayout_2->addWidget(lineEdit_tel);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_back = new QPushButton(Signup);
        pushButton_back->setObjectName("pushButton_back");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_back->sizePolicy().hasHeightForWidth());
        pushButton_back->setSizePolicy(sizePolicy3);
        pushButton_back->setMinimumSize(QSize(74, 46));
        pushButton_back->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"border-radius:7px;"));

        horizontalLayout_2->addWidget(pushButton_back);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButton_sure = new QPushButton(Signup);
        pushButton_sure->setObjectName("pushButton_sure");
        pushButton_sure->setMinimumSize(QSize(74, 46));
        pushButton_sure->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"border-radius:7px;"));

        horizontalLayout_2->addWidget(pushButton_sure);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);


        horizontalLayout_4->addLayout(verticalLayout_4);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QWidget *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Form", nullptr));
        label_login_image->setText(QString());
        label_3->setText(QCoreApplication::translate("Signup", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_title->setText(QCoreApplication::translate("Signup", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        lineEdit_username->setText(QString());
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("Signup", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("Signup", "\345\257\206\347\240\201", nullptr));
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("Signup", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        label_5->setText(QCoreApplication::translate("Signup", "\347\241\256\345\256\232\345\257\206\347\240\201", nullptr));
        lineEdit_sure_password->setPlaceholderText(QCoreApplication::translate("Signup", "\350\257\267\345\206\215\346\254\241\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        label->setText(QCoreApplication::translate("Signup", "\345\247\223\345\220\215", nullptr));
        lineEdit_name->setPlaceholderText(QCoreApplication::translate("Signup", "\350\276\223\345\205\245\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("Signup", "\346\211\213\346\234\272\345\217\267", nullptr));
        lineEdit_tel->setPlaceholderText(QCoreApplication::translate("Signup", "\350\276\223\345\205\245\346\211\213\346\234\272\345\217\267", nullptr));
        pushButton_back->setText(QCoreApplication::translate("Signup", "\350\277\224\345\233\236", nullptr));
        pushButton_sure->setText(QCoreApplication::translate("Signup", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
