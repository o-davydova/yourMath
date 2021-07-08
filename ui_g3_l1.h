/********************************************************************************
** Form generated from reading UI file 'g3_l1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_G3_L1_H
#define UI_G3_L1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_g3_l1
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *homeButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *printButton;
    QLabel *logo;
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *task_1_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QLabel *task_1;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *answ_1_1;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *answ_1_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *answ_1_3;
    QSpacerItem *horizontalSpacer_6;
    QWidget *page_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QLabel *task_2_1;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *task_2_2;
    QLineEdit *answ2_1;
    QLabel *task_2_3;
    QLineEdit *answ2_2;
    QLabel *task_2_4;
    QLabel *task_2_5;
    QWidget *page_3;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_9;
    QLabel *task_3_1;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_12;
    QLabel *task_3_2;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_5;
    QLabel *task_3_3;
    QSpacerItem *verticalSpacer_7;
    QLabel *task_3_4;
    QLineEdit *answ3_1;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_11;
    QLabel *task_3_5;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_6;
    QWidget *page_4;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_7;
    QLabel *task_4_1;
    QLabel *task_4_2;
    QLabel *task_4_3;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *answ_4_1;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *answ_4_2;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *answ_4_3;
    QSpacerItem *horizontalSpacer_16;
    QWidget *page_5;
    QLabel *task_5_4;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_8;
    QLabel *task_5_1;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *answ_5_1;
    QLabel *task_5_2;
    QPushButton *answ_5_2;
    QLabel *task_5_3;
    QPushButton *answ_5_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *nextButton;

    void setupUi(QDialog *g3_l1)
    {
        if (g3_l1->objectName().isEmpty())
            g3_l1->setObjectName(QString::fromUtf8("g3_l1"));
        g3_l1->resize(1229, 838);
        g3_l1->setStyleSheet(QString::fromUtf8("#g3_l1{background-color: #cbd6da;}"));
        verticalLayout = new QVBoxLayout(g3_l1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        homeButton = new QPushButton(g3_l1);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setStyleSheet(QString::fromUtf8("#homeButton{\n"
"background-color:rgb(250, 191, 35);\n"
"color: white;\n"
"font: 15pt \"Yu Gothic UI Semilight\";\n"
"border:5px solid;\n"
"border-radius: 5px;\n"
"border-color: rgb(250, 191, 35);\n"
"}\n"
"\n"
"#homeButton:hover{\n"
"border-color: rgb(45, 44, 44);\n"
"background-color: rgb(45, 44, 44);\n"
"color: white;\n"
"font: 14pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout_2->addWidget(homeButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        printButton = new QPushButton(g3_l1);
        printButton->setObjectName(QString::fromUtf8("printButton"));
        printButton->setStyleSheet(QString::fromUtf8("#printButton{\n"
"font: 25pt \"Yu Gothic UI Semilight\";\n"
"	background-color: rgb(203, 214, 218);\n"
"border: 0px;\n"
"}\n"
"\n"
"#printButton:hover{\n"
"font: 30pt \"Yu Gothic UI Semilight\";\n"
"	background-color: white;\n"
"border: 2px;\n"
"border-radius: 15px;\n"
"border-color: rgb(203, 214, 218);\n"
"}"));

        horizontalLayout_2->addWidget(printButton);

        logo = new QLabel(g3_l1);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setMinimumSize(QSize(150, 47));
        logo->setStyleSheet(QString::fromUtf8("image: url(:/res/img/title.png);"));

        horizontalLayout_2->addWidget(logo);


        verticalLayout->addLayout(horizontalLayout_2);

        label = new QLabel(g3_l1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";\n"
""));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        stackedWidget = new QStackedWidget(g3_l1);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 1211, 561));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        task_1_2 = new QLabel(layoutWidget);
        task_1_2->setObjectName(QString::fromUtf8("task_1_2"));
        task_1_2->setStyleSheet(QString::fromUtf8("color:rgb(45, 44, 44);\n"
"font: 40pt \"Yu Gothic UI Semilight\";"));
        task_1_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(task_1_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        task_1 = new QLabel(layoutWidget);
        task_1->setObjectName(QString::fromUtf8("task_1"));
        task_1->setStyleSheet(QString::fromUtf8("color: rgb(250, 191, 35);\n"
"font: 195pt \"Arial Rounded MT Bold\";\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 15px;\n"
"border-color: rgb(255, 255, 255);"));
        task_1->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(task_1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        answ_1_1 = new QPushButton(layoutWidget);
        answ_1_1->setObjectName(QString::fromUtf8("answ_1_1"));
        answ_1_1->setMinimumSize(QSize(250, 120));
        QFont font;
        font.setFamily(QString::fromUtf8("Yu Gothic UI Semilight"));
        font.setPointSize(35);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        answ_1_1->setFont(font);
        answ_1_1->setStyleSheet(QString::fromUtf8("#answ_1_1{\n"
"color: rgb(0, 0, 0);\n"
"font: 35pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;\n"
"}\n"
"\n"
"#answ_1_1:hover{\n"
"	background-color: rgb(250, 191, 35);\n"
"border: 2px;\n"
"border-radius: 15px;\n"
"border-color: rgb(250, 191, 35);\n"
"color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout_3->addWidget(answ_1_1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        answ_1_2 = new QPushButton(layoutWidget);
        answ_1_2->setObjectName(QString::fromUtf8("answ_1_2"));
        answ_1_2->setMinimumSize(QSize(250, 120));
        answ_1_2->setStyleSheet(QString::fromUtf8("#answ_1_2{\n"
"color: rgb(0, 0, 0);\n"
"font: 35pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;\n"
"}\n"
"\n"
"#answ_1_2:hover{\n"
"	background-color: rgb(250, 191, 35);\n"
"border: 2px;\n"
"border-radius: 15px;\n"
"border-color: rgb(250, 191, 35);\n"
"color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout_3->addWidget(answ_1_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        answ_1_3 = new QPushButton(layoutWidget);
        answ_1_3->setObjectName(QString::fromUtf8("answ_1_3"));
        answ_1_3->setMinimumSize(QSize(250, 120));
        answ_1_3->setStyleSheet(QString::fromUtf8("#answ_1_3{\n"
"color: rgb(0, 0, 0);\n"
"font: 35pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;\n"
"}\n"
"\n"
"#answ_1_3:hover{\n"
"	background-color: rgb(250, 191, 35);\n"
"border: 2px;\n"
"border-radius: 15px;\n"
"border-color: rgb(250, 191, 35);\n"
"color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout_3->addWidget(answ_1_3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_3);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        layoutWidget1 = new QWidget(page_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 1211, 551));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        task_2_1 = new QLabel(layoutWidget1);
        task_2_1->setObjectName(QString::fromUtf8("task_2_1"));
        task_2_1->setStyleSheet(QString::fromUtf8("color:rgb(45, 44, 44);\n"
"font: 40pt \"Yu Gothic UI Semilight\";"));
        task_2_1->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(task_2_1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        task_2_2 = new QLabel(layoutWidget1);
        task_2_2->setObjectName(QString::fromUtf8("task_2_2"));
        task_2_2->setStyleSheet(QString::fromUtf8("color: rgb(250, 191, 35);\n"
"font: 60pt \"Arial Rounded MT Bold\";"));
        task_2_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(task_2_2);

        answ2_1 = new QLineEdit(layoutWidget1);
        answ2_1->setObjectName(QString::fromUtf8("answ2_1"));
        answ2_1->setMinimumSize(QSize(0, 50));
        answ2_1->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"color: rgb(45, 44, 44);\n"
"font: 55pt \"Arial Rounded MT Bold\";\n"
""));
        answ2_1->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(answ2_1);

        task_2_3 = new QLabel(layoutWidget1);
        task_2_3->setObjectName(QString::fromUtf8("task_2_3"));
        task_2_3->setStyleSheet(QString::fromUtf8("color: rgb(250, 191, 35);\n"
"font:60pt \"Arial Rounded MT Bold\";"));
        task_2_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(task_2_3);

        answ2_2 = new QLineEdit(layoutWidget1);
        answ2_2->setObjectName(QString::fromUtf8("answ2_2"));
        answ2_2->setMinimumSize(QSize(0, 50));
        answ2_2->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"color: rgb(45, 44, 44);\n"
"font: 55pt \"Arial Rounded MT Bold\";\n"
""));
        answ2_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(answ2_2);

        task_2_4 = new QLabel(layoutWidget1);
        task_2_4->setObjectName(QString::fromUtf8("task_2_4"));
        task_2_4->setStyleSheet(QString::fromUtf8("color: rgb(250, 191, 35);\n"
"font: 60pt \"Arial Rounded MT Bold\";"));
        task_2_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(task_2_4);


        verticalLayout_3->addLayout(horizontalLayout_5);

        task_2_5 = new QLabel(layoutWidget1);
        task_2_5->setObjectName(QString::fromUtf8("task_2_5"));
        task_2_5->setMinimumSize(QSize(200, 250));
        task_2_5->setStyleSheet(QString::fromUtf8("image: url(:/res/img/orange_2.png)"));
        task_2_5->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(task_2_5);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        layoutWidget2 = new QWidget(page_3);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 3, 1211, 561));
        verticalLayout_6 = new QVBoxLayout(layoutWidget2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_9);

        task_3_1 = new QLabel(layoutWidget2);
        task_3_1->setObjectName(QString::fromUtf8("task_3_1"));
        task_3_1->setStyleSheet(QString::fromUtf8("color:rgb(45, 44, 44);\n"
"font: 40pt \"Yu Gothic UI Semilight\";"));
        task_3_1->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(task_3_1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);

        task_3_2 = new QLabel(layoutWidget2);
        task_3_2->setObjectName(QString::fromUtf8("task_3_2"));
        task_3_2->setStyleSheet(QString::fromUtf8("color: rgb(250, 191, 35);\n"
"font: 195pt \"Arial Rounded MT Bold\";"));

        horizontalLayout_7->addWidget(task_3_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        task_3_3 = new QLabel(layoutWidget2);
        task_3_3->setObjectName(QString::fromUtf8("task_3_3"));
        task_3_3->setStyleSheet(QString::fromUtf8("color:rgb(45, 44, 44);\n"
"font: 45pt \"Yu Gothic UI Semilight\";"));
        task_3_3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(task_3_3);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_7);


        horizontalLayout_7->addLayout(verticalLayout_4);

        task_3_4 = new QLabel(layoutWidget2);
        task_3_4->setObjectName(QString::fromUtf8("task_3_4"));
        task_3_4->setStyleSheet(QString::fromUtf8("color: rgb(250, 191, 35);\n"
"font: 195pt \"Arial Rounded MT Bold\";"));

        horizontalLayout_7->addWidget(task_3_4);

        answ3_1 = new QLineEdit(layoutWidget2);
        answ3_1->setObjectName(QString::fromUtf8("answ3_1"));
        answ3_1->setMinimumSize(QSize(0, 50));
        answ3_1->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"color: rgb(45, 44, 44);\n"
"font: 195pt \"Arial Rounded MT Bold\";\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 15px;\n"
"border-color: rgb(255, 255, 255);"));
        answ3_1->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(answ3_1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_11);

        task_3_5 = new QLabel(layoutWidget2);
        task_3_5->setObjectName(QString::fromUtf8("task_3_5"));
        task_3_5->setStyleSheet(QString::fromUtf8("color:rgb(45, 44, 44);\n"
"font: 45pt \"Yu Gothic UI Semilight\";"));
        task_3_5->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(task_3_5);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_8);


        horizontalLayout_7->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout_7);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_6);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        layoutWidget3 = new QWidget(page_4);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(1, 15, 1211, 541));
        verticalLayout_7 = new QVBoxLayout(layoutWidget3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        task_4_1 = new QLabel(layoutWidget3);
        task_4_1->setObjectName(QString::fromUtf8("task_4_1"));
        task_4_1->setStyleSheet(QString::fromUtf8("color:rgb(45, 44, 44);\n"
"font: 40pt \"Yu Gothic UI Semilight\";"));
        task_4_1->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(task_4_1);

        task_4_2 = new QLabel(layoutWidget3);
        task_4_2->setObjectName(QString::fromUtf8("task_4_2"));
        task_4_2->setStyleSheet(QString::fromUtf8("color: rgb(250, 191, 35);\n"
"font: 75pt \"Arial Rounded MT Bold\";\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 15px;\n"
"border-color: rgb(255, 255, 255);"));
        task_4_2->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(task_4_2);

        task_4_3 = new QLabel(layoutWidget3);
        task_4_3->setObjectName(QString::fromUtf8("task_4_3"));
        task_4_3->setMinimumSize(QSize(0, 200));
        task_4_3->setStyleSheet(QString::fromUtf8("image: url(:/res/img/tomato.png);"));
        task_4_3->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(task_4_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_15);

        answ_4_1 = new QPushButton(layoutWidget3);
        answ_4_1->setObjectName(QString::fromUtf8("answ_4_1"));
        answ_4_1->setMinimumSize(QSize(250, 120));
        answ_4_1->setFont(font);
        answ_4_1->setStyleSheet(QString::fromUtf8("#answ_4_1{\n"
"color: rgb(0, 0, 0);\n"
"font: 35pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;\n"
"}\n"
"\n"
"#answ_4_1:hover{\n"
"	background-color: rgb(250, 191, 35);\n"
"border: 2px;\n"
"border-radius: 15px;\n"
"border-color: rgb(250, 191, 35);\n"
"color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout_8->addWidget(answ_4_1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_13);

        answ_4_2 = new QPushButton(layoutWidget3);
        answ_4_2->setObjectName(QString::fromUtf8("answ_4_2"));
        answ_4_2->setMinimumSize(QSize(250, 120));
        answ_4_2->setFont(font);
        answ_4_2->setStyleSheet(QString::fromUtf8("#answ_4_2{\n"
"color: rgb(0, 0, 0);\n"
"font: 35pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;\n"
"}\n"
"\n"
"#answ_4_2:hover{\n"
"	background-color: rgb(250, 191, 35);\n"
"border: 2px;\n"
"border-radius: 15px;\n"
"border-color: rgb(250, 191, 35);\n"
"color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout_8->addWidget(answ_4_2);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_14);

        answ_4_3 = new QPushButton(layoutWidget3);
        answ_4_3->setObjectName(QString::fromUtf8("answ_4_3"));
        answ_4_3->setMinimumSize(QSize(250, 120));
        answ_4_3->setFont(font);
        answ_4_3->setStyleSheet(QString::fromUtf8("#answ_4_3{\n"
"color: rgb(0, 0, 0);\n"
"font: 35pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;\n"
"}\n"
"\n"
"#answ_4_3:hover{\n"
"	background-color: rgb(250, 191, 35);\n"
"border: 2px;\n"
"border-radius: 15px;\n"
"border-color: rgb(250, 191, 35);\n"
"color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout_8->addWidget(answ_4_3);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_16);


        verticalLayout_7->addLayout(horizontalLayout_8);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        task_5_4 = new QLabel(page_5);
        task_5_4->setObjectName(QString::fromUtf8("task_5_4"));
        task_5_4->setGeometry(QRect(210, 110, 761, 631));
        task_5_4->setStyleSheet(QString::fromUtf8("image: url(:/res/img/pea.png);"));
        layoutWidget4 = new QWidget(page_5);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 10, 1197, 382));
        verticalLayout_8 = new QVBoxLayout(layoutWidget4);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        task_5_1 = new QLabel(layoutWidget4);
        task_5_1->setObjectName(QString::fromUtf8("task_5_1"));
        task_5_1->setStyleSheet(QString::fromUtf8("color:rgb(45, 44, 44);\n"
"font: 40pt \"Yu Gothic UI Semilight\";"));
        task_5_1->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(task_5_1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        answ_5_1 = new QPushButton(layoutWidget4);
        answ_5_1->setObjectName(QString::fromUtf8("answ_5_1"));
        answ_5_1->setMinimumSize(QSize(250, 120));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font1.setPointSize(195);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        answ_5_1->setFont(font1);
        answ_5_1->setStyleSheet(QString::fromUtf8("#answ_5_1{\n"
"color: white;\n"
"font: 195pt \"Arial Rounded MT Bold\";\n"
"border: 0px;\n"
"}\n"
"\n"
"#answ_5_1:hover{\n"
"background-color: white;\n"
"border: 2px;\n"
"border-radius: 15px;\n"
"border-color: rgb(250, 191, 35);\n"
"color: rgb(250, 191, 35);\n"
"font: 195pt \"Arial Rounded MT Bold\";}"));

        horizontalLayout_9->addWidget(answ_5_1);

        task_5_2 = new QLabel(layoutWidget4);
        task_5_2->setObjectName(QString::fromUtf8("task_5_2"));
        task_5_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 195pt \"Arial Rounded MT Bold\";"));

        horizontalLayout_9->addWidget(task_5_2);

        answ_5_2 = new QPushButton(layoutWidget4);
        answ_5_2->setObjectName(QString::fromUtf8("answ_5_2"));
        answ_5_2->setMinimumSize(QSize(250, 120));
        answ_5_2->setFont(font1);
        answ_5_2->setStyleSheet(QString::fromUtf8("#answ_5_2{\n"
"color: white;\n"
"font: 195pt \"Arial Rounded MT Bold\";\n"
"border: 0px;\n"
"}\n"
"\n"
"#answ_5_2:hover{\n"
"background-color: white;\n"
"border: 2px;\n"
"border-radius: 15px;\n"
"border-color: rgb(250, 191, 35);\n"
"color: rgb(250, 191, 35);\n"
"font: 195pt \"Arial Rounded MT Bold\";}"));

        horizontalLayout_9->addWidget(answ_5_2);

        task_5_3 = new QLabel(layoutWidget4);
        task_5_3->setObjectName(QString::fromUtf8("task_5_3"));
        task_5_3->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 195pt \"Arial Rounded MT Bold\";"));

        horizontalLayout_9->addWidget(task_5_3);

        answ_5_3 = new QPushButton(layoutWidget4);
        answ_5_3->setObjectName(QString::fromUtf8("answ_5_3"));
        answ_5_3->setMinimumSize(QSize(250, 120));
        answ_5_3->setFont(font1);
        answ_5_3->setStyleSheet(QString::fromUtf8("#answ_5_3{\n"
"color: white;\n"
"font: 195pt \"Arial Rounded MT Bold\";\n"
"border: 0px;\n"
"}\n"
"\n"
"#answ_5_3:hover{\n"
"background-color: white;\n"
"border: 2px;\n"
"border-radius: 15px;\n"
"border-color: rgb(250, 191, 35);\n"
"color: rgb(250, 191, 35);\n"
"font: 195pt \"Arial Rounded MT Bold\";}"));

        horizontalLayout_9->addWidget(answ_5_3);


        verticalLayout_8->addLayout(horizontalLayout_9);

        stackedWidget->addWidget(page_5);

        verticalLayout->addWidget(stackedWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        backButton = new QPushButton(g3_l1);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setMinimumSize(QSize(200, 120));
        backButton->setStyleSheet(QString::fromUtf8("#backButton{\n"
"	background-image: url(:/res/img/BG.png);\n"
"	image: url(:/res/img/back.png);\n"
"    border: 0px;\n"
"}\n"
"#backButton:hover{\n"
"	image: url(:/res/img/back2.png);\n"
"}\n"
"\n"
""));

        horizontalLayout->addWidget(backButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        nextButton = new QPushButton(g3_l1);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setMinimumSize(QSize(200, 120));
        nextButton->setStyleSheet(QString::fromUtf8("#nextButton{\n"
"	background-image: url(:/res/img/BG.png);\n"
"	image: url(:/res/img/next.png);\n"
"border: 0px;\n"
"}\n"
"#nextButton:hover{\n"
"	image: url(:/res/img/next2.png);\n"
"}\n"
"\n"
""));

        horizontalLayout->addWidget(nextButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(g3_l1);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(g3_l1);
    } // setupUi

    void retranslateUi(QDialog *g3_l1)
    {
        g3_l1->setWindowTitle(QApplication::translate("g3_l1", "Dialog", nullptr));
        homeButton->setText(QApplication::translate("g3_l1", "\320\234\320\206\320\231 \320\232\320\233\320\220\320\241", nullptr));
        printButton->setText(QApplication::translate("g3_l1", "\360\237\226\250", nullptr));
        logo->setText(QString());
        label->setText(QApplication::translate("g3_l1", "\320\240\320\206\320\222\320\225\320\235\320\254 1, \320\232\320\233\320\220\320\241 3", nullptr));
        task_1_2->setText(QApplication::translate("g3_l1", "\320\222\320\272\320\260\320\266\320\270, \321\217\320\272\320\270\320\271 \321\200\320\276\320\267\321\200\321\217\320\264 \320\274\320\260\321\224 \321\206\320\270\321\204\321\200\320\260 9 \321\203 \321\207\320\270\321\201\320\273\321\226", nullptr));
        task_1->setText(QApplication::translate("g3_l1", " 40 795 ", nullptr));
        answ_1_1->setText(QApplication::translate("g3_l1", "\320\236\320\224\320\230\320\235\320\230\320\246\320\206", nullptr));
        answ_1_2->setText(QApplication::translate("g3_l1", "\320\224\320\225\320\241\320\257\320\242\320\232\320\230", nullptr));
        answ_1_3->setText(QApplication::translate("g3_l1", "\320\241\320\236\320\242\320\235\320\206", nullptr));
        task_2_1->setText(QApplication::translate("g3_l1", "\320\227\321\200\321\226\320\262\320\275\321\217\320\271 \320\277\321\200\320\270\320\272\320\273\320\260\320\264\320\270", nullptr));
        task_2_2->setText(QApplication::translate("g3_l1", "900-(", nullptr));
        answ2_1->setPlaceholderText(QApplication::translate("g3_l1", "?", nullptr));
        task_2_3->setText(QApplication::translate("g3_l1", "-63) = 900-(765-", nullptr));
        answ2_2->setPlaceholderText(QApplication::translate("g3_l1", "?", nullptr));
        task_2_4->setText(QApplication::translate("g3_l1", ")", nullptr));
        task_2_5->setText(QString());
        task_3_1->setText(QApplication::translate("g3_l1", "\320\222\320\270\320\272\320\276\320\275\320\260\320\271 \320\277\320\265\321\200\320\265\321\202\320\262\320\276\321\200\320\265\320\275\320\275\321\217 \321\200\320\276\320\267\321\200\321\217\320\264\321\226\320\262", nullptr));
        task_3_2->setText(QApplication::translate("g3_l1", " 6", nullptr));
        task_3_3->setText(QApplication::translate("g3_l1", "\n"
"\n"
"\321\202\320\270\321\201\321\217\321\207", nullptr));
        task_3_4->setText(QApplication::translate("g3_l1", "=", nullptr));
        answ3_1->setPlaceholderText(QApplication::translate("g3_l1", "?", nullptr));
        task_3_5->setText(QApplication::translate("g3_l1", "\n"
"\n"
"\321\201\320\276\321\202\320\265\320\275\321\214 ", nullptr));
        task_4_1->setText(QApplication::translate("g3_l1", "\320\257\320\272\320\265 \321\207\320\270\321\201\320\273\320\276 \320\267\320\260\320\277\320\270\321\201\320\260\320\275\320\265 \321\203 \320\262\320\270\320\263\320\273\321\217\320\264\321\226 \321\201\321\203\320\274\320\270 \321\200\320\276\320\267\321\200\321\217\320\264\321\226\320\262?", nullptr));
        task_4_2->setText(QApplication::translate("g3_l1", "60000+4000+300+70+2", nullptr));
        task_4_3->setText(QString());
        answ_4_1->setText(QApplication::translate("g3_l1", "60 372", nullptr));
        answ_4_2->setText(QApplication::translate("g3_l1", "64 732", nullptr));
        answ_4_3->setText(QApplication::translate("g3_l1", "64 372", nullptr));
        task_5_4->setText(QString());
        task_5_1->setText(QApplication::translate("g3_l1", "\320\236\320\261\320\265\321\200\320\270 \320\267\320\274\320\265\320\275\321\210\321\203\320\262\320\260\320\275\320\265 \321\207\320\270\321\201\320\273\320\276", nullptr));
        answ_5_1->setText(QApplication::translate("g3_l1", "85", nullptr));
        task_5_2->setText(QApplication::translate("g3_l1", "-", nullptr));
        answ_5_2->setText(QApplication::translate("g3_l1", "23", nullptr));
        task_5_3->setText(QApplication::translate("g3_l1", "=", nullptr));
        answ_5_3->setText(QApplication::translate("g3_l1", "62", nullptr));
        backButton->setText(QString());
        nextButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class g3_l1: public Ui_g3_l1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_G3_L1_H
