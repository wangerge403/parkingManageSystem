/********************************************************************************
** Form generated from reading UI file 'initfile.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITFILE_H
#define UI_INITFILE_H

#include <QtCore/QLocale>
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

class Ui_initFile
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *IP;
    QLineEdit *PORT;
    QLineEdit *database;
    QLineEdit *account;
    QLineEdit *password;
    QLineEdit *parking_name;
    QLineEdit *park_fee;
    QLineEdit *park_count;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *cancel_submit;
    QPushButton *submit_init;

    void setupUi(QWidget *initFile)
    {
        if (initFile->objectName().isEmpty())
            initFile->setObjectName("initFile");
        initFile->setEnabled(true);
        initFile->resize(629, 591);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(initFile->sizePolicy().hasHeightForWidth());
        initFile->setSizePolicy(sizePolicy);
        initFile->setMinimumSize(QSize(629, 591));
        initFile->setMaximumSize(QSize(644, 591));
        initFile->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout_3 = new QVBoxLayout(initFile);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(initFile);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\255\227\345\277\203\345\235\212\347\214\253\347\232\204\345\244\251\347\251\272\344\271\213\345\237\216\357\274\210\347\211\271\345\210\253\345\256\232\345\210\266\347\211\210\357\274\211\";"));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(50);
        label->setIndent(-1);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(initFile);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\255\227\345\277\203\345\235\212\347\214\253\347\232\204\345\244\251\347\251\272\344\271\213\345\237\216\357\274\210\347\211\271\345\210\253\345\256\232\345\210\266\347\211\210\357\274\211\";"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(initFile);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\255\227\345\277\203\345\235\212\347\214\253\347\232\204\345\244\251\347\251\272\344\271\213\345\237\216\357\274\210\347\211\271\345\210\253\345\256\232\345\210\266\347\211\210\357\274\211\";"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(initFile);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\255\227\345\277\203\345\235\212\347\214\253\347\232\204\345\244\251\347\251\272\344\271\213\345\237\216\357\274\210\347\211\271\345\210\253\345\256\232\345\210\266\347\211\210\357\274\211\";"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(initFile);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\255\227\345\277\203\345\235\212\347\214\253\347\232\204\345\244\251\347\251\272\344\271\213\345\237\216\357\274\210\347\211\271\345\210\253\345\256\232\345\210\266\347\211\210\357\274\211\";"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(initFile);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\255\227\345\277\203\345\235\212\347\214\253\347\232\204\345\244\251\347\251\272\344\271\213\345\237\216\357\274\210\347\211\271\345\210\253\345\256\232\345\210\266\347\211\210\357\274\211\";"));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(initFile);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\255\227\345\277\203\345\235\212\347\214\253\347\232\204\345\244\251\347\251\272\344\271\213\345\237\216\357\274\210\347\211\271\345\210\253\345\256\232\345\210\266\347\211\210\357\274\211\";"));

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(initFile);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\255\227\345\277\203\345\235\212\347\214\253\347\232\204\345\244\251\347\251\272\344\271\213\345\237\216\357\274\210\347\211\271\345\210\253\345\256\232\345\210\266\347\211\210\357\274\211\";"));

        verticalLayout->addWidget(label_8);

        label_9 = new QLabel(initFile);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\255\227\345\277\203\345\235\212\347\214\253\347\232\204\345\244\251\347\251\272\344\271\213\345\237\216\357\274\210\347\211\271\345\210\253\345\256\232\345\210\266\347\211\210\357\274\211\";"));

        verticalLayout->addWidget(label_9);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(20, -1, -1, -1);
        IP = new QLineEdit(initFile);
        IP->setObjectName("IP");
        IP->setMinimumSize(QSize(1, 52));
        IP->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));

        verticalLayout_2->addWidget(IP);

        PORT = new QLineEdit(initFile);
        PORT->setObjectName("PORT");
        PORT->setMinimumSize(QSize(0, 52));
        PORT->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));

        verticalLayout_2->addWidget(PORT);

        database = new QLineEdit(initFile);
        database->setObjectName("database");
        database->setMinimumSize(QSize(0, 52));
        database->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));

        verticalLayout_2->addWidget(database);

        account = new QLineEdit(initFile);
        account->setObjectName("account");
        account->setMinimumSize(QSize(200, 52));
        account->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));

        verticalLayout_2->addWidget(account);

        password = new QLineEdit(initFile);
        password->setObjectName("password");
        password->setMinimumSize(QSize(0, 52));
        password->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        password->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(password);

        parking_name = new QLineEdit(initFile);
        parking_name->setObjectName("parking_name");
        parking_name->setMinimumSize(QSize(0, 52));
        parking_name->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));

        verticalLayout_2->addWidget(parking_name);

        park_fee = new QLineEdit(initFile);
        park_fee->setObjectName("park_fee");
        park_fee->setMinimumSize(QSize(0, 52));
        park_fee->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));

        verticalLayout_2->addWidget(park_fee);

        park_count = new QLineEdit(initFile);
        park_count->setObjectName("park_count");
        park_count->setMinimumSize(QSize(0, 52));
        park_count->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));

        verticalLayout_2->addWidget(park_count);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        cancel_submit = new QPushButton(initFile);
        cancel_submit->setObjectName("cancel_submit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cancel_submit->sizePolicy().hasHeightForWidth());
        cancel_submit->setSizePolicy(sizePolicy1);
        cancel_submit->setMinimumSize(QSize(115, 57));
        cancel_submit->setContextMenuPolicy(Qt::DefaultContextMenu);
        cancel_submit->setLayoutDirection(Qt::LeftToRight);
        cancel_submit->setStyleSheet(QString::fromUtf8("background-color: rgbrgb(255, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"border-radius:7px;"));
        cancel_submit->setLocale(QLocale(QLocale::Chinese, QLocale::China));

        horizontalLayout_3->addWidget(cancel_submit);

        submit_init = new QPushButton(initFile);
        submit_init->setObjectName("submit_init");
        sizePolicy1.setHeightForWidth(submit_init->sizePolicy().hasHeightForWidth());
        submit_init->setSizePolicy(sizePolicy1);
        submit_init->setMinimumSize(QSize(115, 57));
        submit_init->setContextMenuPolicy(Qt::DefaultContextMenu);
        submit_init->setLayoutDirection(Qt::LeftToRight);
        submit_init->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"border-radius:7px;"));
        submit_init->setLocale(QLocale(QLocale::Chinese, QLocale::China));

        horizontalLayout_3->addWidget(submit_init);


        verticalLayout_3->addLayout(horizontalLayout_3);


        retranslateUi(initFile);

        QMetaObject::connectSlotsByName(initFile);
    } // setupUi

    void retranslateUi(QWidget *initFile)
    {
        initFile->setWindowTitle(QCoreApplication::translate("initFile", "Form", nullptr));
        label->setText(QCoreApplication::translate("initFile", "\345\201\234\350\275\246\345\234\272\346\225\260\346\215\256\345\210\235\345\247\213\345\214\226", nullptr));
        label_2->setText(QCoreApplication::translate("initFile", "IP", nullptr));
        label_3->setText(QCoreApplication::translate("initFile", "\347\253\257\345\217\243\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("initFile", "\346\225\260\346\215\256\345\272\223\345\220\215", nullptr));
        label_5->setText(QCoreApplication::translate("initFile", "\350\264\246\346\210\267", nullptr));
        label_6->setText(QCoreApplication::translate("initFile", "\345\257\206\347\240\201", nullptr));
        label_7->setText(QCoreApplication::translate("initFile", "\345\201\234\350\275\246\345\234\272\345\220\215", nullptr));
        label_8->setText(QCoreApplication::translate("initFile", "\345\201\234\350\275\246\345\234\272\344\273\267\346\240\274", nullptr));
        label_9->setText(QCoreApplication::translate("initFile", "\345\201\234\350\275\246\345\234\272\345\256\271\351\207\217", nullptr));
        IP->setText(QCoreApplication::translate("initFile", "127.0.0.1", nullptr));
        IP->setPlaceholderText(QCoreApplication::translate("initFile", "\350\257\267\350\276\223\345\205\245IP", nullptr));
        PORT->setText(QCoreApplication::translate("initFile", "3306", nullptr));
        PORT->setPlaceholderText(QCoreApplication::translate("initFile", "\350\257\267\350\276\223\345\205\245\347\253\257\345\217\243\345\217\267", nullptr));
        database->setText(QCoreApplication::translate("initFile", "car_system", nullptr));
        database->setPlaceholderText(QCoreApplication::translate("initFile", "\350\257\267\350\276\223\345\205\245\346\225\260\346\215\256\345\272\223\345\220\215", nullptr));
        account->setText(QCoreApplication::translate("initFile", "root", nullptr));
        account->setPlaceholderText(QCoreApplication::translate("initFile", "\350\257\267\350\276\223\345\205\245\350\264\246\346\210\267", nullptr));
        password->setText(QCoreApplication::translate("initFile", "123456", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("initFile", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        parking_name->setText(QCoreApplication::translate("initFile", "CAR123", nullptr));
        parking_name->setPlaceholderText(QCoreApplication::translate("initFile", "\350\257\267\350\276\223\345\205\245\345\201\234\350\275\246\345\234\272\345\220\215", nullptr));
        park_fee->setText(QCoreApplication::translate("initFile", "20", nullptr));
        park_fee->setPlaceholderText(QCoreApplication::translate("initFile", "\350\257\267\350\276\223\345\205\245\345\201\234\350\275\246\345\234\272 \345\215\225\344\273\267\346\257\217\345\260\217\346\227\266", nullptr));
        park_count->setText(QCoreApplication::translate("initFile", "2000", nullptr));
        park_count->setPlaceholderText(QCoreApplication::translate("initFile", "\345\201\234\350\275\246\345\234\272\346\200\273\345\256\271\351\207\217", nullptr));
        cancel_submit->setText(QCoreApplication::translate("initFile", "\345\217\226\346\266\210", nullptr));
        submit_init->setText(QCoreApplication::translate("initFile", "\346\217\220\344\272\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class initFile: public Ui_initFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITFILE_H
