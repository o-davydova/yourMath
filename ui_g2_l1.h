/********************************************************************************
** Form generated from reading UI file 'g2_l1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_G2_L1_H
#define UI_G2_L1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_g2_l1
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *homeButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *printButton;
    QLabel *logo;
    QLabel *title;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *pears_3;
    QLabel *pears_1;
    QLabel *pears_4;
    QLabel *pears_5;
    QLabel *task;
    QLabel *pears_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *answ;
    QWidget *page_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QLabel *task_2;
    QLabel *arrow;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_13;
    QLabel *num_23;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *answ_2_1;
    QSpacerItem *horizontalSpacer_4;
    QLabel *num_25;
    QSpacerItem *horizontalSpacer_5;
    QLabel *num_26;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *answ_2_2;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *answ_2_3;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *answ_2_4;
    QSpacerItem *horizontalSpacer_9;
    QLabel *num_27;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer;
    QWidget *page_3;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QLabel *task_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *answ_3_1;
    QPushButton *answ_3_2;
    QPushButton *answ_3_3;
    QPushButton *answ_3_4;
    QPushButton *answ_3_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QWidget *page_4;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *task_4;
    QLabel *task_4_1;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *answ_4_3;
    QPushButton *answ_4_2;
    QPushButton *answ_4_1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *nextButton;

    void setupUi(QDialog *g2_l1)
    {
        if (g2_l1->objectName().isEmpty())
            g2_l1->setObjectName(QString::fromUtf8("g2_l1"));
        g2_l1->resize(1187, 820);
        g2_l1->setStyleSheet(QString::fromUtf8("#g2_l1{background-color: #cbd6da;}"));
        verticalLayout = new QVBoxLayout(g2_l1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        homeButton = new QPushButton(g2_l1);
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

        horizontalLayout->addWidget(homeButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        printButton = new QPushButton(g2_l1);
        printButton->setObjectName(QString::fromUtf8("printButton"));
        printButton->setMinimumSize(QSize(60, 60));
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

        horizontalLayout->addWidget(printButton);

        logo = new QLabel(g2_l1);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setMinimumSize(QSize(150, 47));
        logo->setStyleSheet(QString::fromUtf8("image: url(:/res/img/title.png);"));

        horizontalLayout->addWidget(logo);


        verticalLayout->addLayout(horizontalLayout);

        title = new QLabel(g2_l1);
        title->setObjectName(QString::fromUtf8("title"));
        title->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";\n"
""));
        title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(title);

        stackedWidget = new QStackedWidget(g2_l1);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 1151, 511));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pears_3 = new QLabel(layoutWidget);
        pears_3->setObjectName(QString::fromUtf8("pears_3"));
        pears_3->setStyleSheet(QString::fromUtf8("image: url(:/res/img/tenPears.png);"));

        gridLayout->addWidget(pears_3, 0, 2, 1, 1);

        pears_1 = new QLabel(layoutWidget);
        pears_1->setObjectName(QString::fromUtf8("pears_1"));
        pears_1->setMinimumSize(QSize(300, 150));
        pears_1->setStyleSheet(QString::fromUtf8("image: url(:/res/img/tenPears.png);"));

        gridLayout->addWidget(pears_1, 0, 0, 1, 1);

        pears_4 = new QLabel(layoutWidget);
        pears_4->setObjectName(QString::fromUtf8("pears_4"));
        pears_4->setMinimumSize(QSize(0, 150));
        pears_4->setStyleSheet(QString::fromUtf8("image: url(:/res/img/tenPears.png);"));

        gridLayout->addWidget(pears_4, 2, 0, 1, 1);

        pears_5 = new QLabel(layoutWidget);
        pears_5->setObjectName(QString::fromUtf8("pears_5"));
        pears_5->setStyleSheet(QString::fromUtf8("image: url(:/res/img/tenPears.png);"));

        gridLayout->addWidget(pears_5, 2, 2, 1, 1);

        task = new QLabel(layoutWidget);
        task->setObjectName(QString::fromUtf8("task"));
        task->setStyleSheet(QString::fromUtf8("font: 35pt \"Yu Gothic UI Semilight\";"));
        task->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(task, 2, 1, 1, 1);

        pears_2 = new QLabel(layoutWidget);
        pears_2->setObjectName(QString::fromUtf8("pears_2"));
        pears_2->setStyleSheet(QString::fromUtf8("image: url(:/res/img/tenPears.png);"));

        gridLayout->addWidget(pears_2, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        answ = new QLineEdit(layoutWidget);
        answ->setObjectName(QString::fromUtf8("answ"));
        answ->setMinimumSize(QSize(100, 100));
        answ->setMaximumSize(QSize(100, 100));
        answ->setStyleSheet(QString::fromUtf8("font: 45pt \"Yu Gothic UI Semilight\";"));
        answ->setFrame(false);
        answ->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(answ);


        verticalLayout_2->addLayout(horizontalLayout_3);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        layoutWidget1 = new QWidget(page_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 10, 1151, 501));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        task_2 = new QLabel(layoutWidget1);
        task_2->setObjectName(QString::fromUtf8("task_2"));
        task_2->setStyleSheet(QString::fromUtf8("font: 35pt \"Yu Gothic UI Semilight\";"));
        task_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(task_2);

        arrow = new QLabel(layoutWidget1);
        arrow->setObjectName(QString::fromUtf8("arrow"));
        arrow->setMinimumSize(QSize(0, 150));
        arrow->setStyleSheet(QString::fromUtf8("image: url(:/res/img/notchedArrow.png);"));

        verticalLayout_3->addWidget(arrow);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_13);

        num_23 = new QLabel(layoutWidget1);
        num_23->setObjectName(QString::fromUtf8("num_23"));
        num_23->setMinimumSize(QSize(70, 60));
        num_23->setStyleSheet(QString::fromUtf8("font: 35pt \"Yu Gothic UI Semilight\";"));
        num_23->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(num_23);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        answ_2_1 = new QLineEdit(layoutWidget1);
        answ_2_1->setObjectName(QString::fromUtf8("answ_2_1"));
        answ_2_1->setMinimumSize(QSize(70, 60));
        answ_2_1->setMaximumSize(QSize(60, 16777215));
        answ_2_1->setStyleSheet(QString::fromUtf8("font: 35pt \"Yu Gothic UI Semilight\";\n"
"border-radius: 5px;"));
        answ_2_1->setFrame(false);
        answ_2_1->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(answ_2_1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        num_25 = new QLabel(layoutWidget1);
        num_25->setObjectName(QString::fromUtf8("num_25"));
        num_25->setMinimumSize(QSize(70, 60));
        num_25->setStyleSheet(QString::fromUtf8("font: 35pt \"Yu Gothic UI Semilight\";"));
        num_25->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(num_25);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        num_26 = new QLabel(layoutWidget1);
        num_26->setObjectName(QString::fromUtf8("num_26"));
        num_26->setMinimumSize(QSize(70, 60));
        num_26->setStyleSheet(QString::fromUtf8("font: 35pt \"Yu Gothic UI Semilight\";"));
        num_26->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(num_26);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        answ_2_2 = new QLineEdit(layoutWidget1);
        answ_2_2->setObjectName(QString::fromUtf8("answ_2_2"));
        answ_2_2->setMinimumSize(QSize(70, 60));
        answ_2_2->setMaximumSize(QSize(60, 16777215));
        answ_2_2->setStyleSheet(QString::fromUtf8("font: 35pt \"Yu Gothic UI Semilight\";\n"
"border-radius: 5px;"));
        answ_2_2->setFrame(false);
        answ_2_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(answ_2_2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        answ_2_3 = new QLineEdit(layoutWidget1);
        answ_2_3->setObjectName(QString::fromUtf8("answ_2_3"));
        answ_2_3->setMinimumSize(QSize(70, 60));
        answ_2_3->setMaximumSize(QSize(60, 16777215));
        answ_2_3->setStyleSheet(QString::fromUtf8("font: 35pt \"Yu Gothic UI Semilight\";\n"
"border-radius: 5px;"));
        answ_2_3->setFrame(false);
        answ_2_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(answ_2_3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        answ_2_4 = new QLineEdit(layoutWidget1);
        answ_2_4->setObjectName(QString::fromUtf8("answ_2_4"));
        answ_2_4->setMinimumSize(QSize(70, 60));
        answ_2_4->setMaximumSize(QSize(60, 16777215));
        answ_2_4->setStyleSheet(QString::fromUtf8("font: 35pt \"Yu Gothic UI Semilight\";\n"
"border-radius: 5px;"));
        answ_2_4->setFrame(false);
        answ_2_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(answ_2_4);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        num_27 = new QLabel(layoutWidget1);
        num_27->setObjectName(QString::fromUtf8("num_27"));
        num_27->setMinimumSize(QSize(70, 60));
        num_27->setStyleSheet(QString::fromUtf8("font: 35pt \"Yu Gothic UI Semilight\";"));
        num_27->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(num_27);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_14);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        layoutWidget2 = new QWidget(page_3);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 1151, 511));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        task_3 = new QLabel(layoutWidget2);
        task_3->setObjectName(QString::fromUtf8("task_3"));
        task_3->setStyleSheet(QString::fromUtf8("font: 35pt \"Yu Gothic UI Semilight\";"));
        task_3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(task_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        answ_3_1 = new QPushButton(layoutWidget2);
        answ_3_1->setObjectName(QString::fromUtf8("answ_3_1"));
        answ_3_1->setMinimumSize(QSize(0, 250));
        answ_3_1->setStyleSheet(QString::fromUtf8("#answ_3_1{\n"
"	background-image: url(:/res/img/BG.png);\n"
"	image: url(:/res/img/\321\201arrot.png);\n"
"	border: 0px;\n"
"}\n"
"#answ_3_1:hover{\n"
"	background-color: rgb(250, 191, 35);\n"
"	image: url(:/res/img/\321\201arrot_2.png);\n"
"border: 0px;\n"
"}\n"
"\n"
"\n"
""));

        horizontalLayout_5->addWidget(answ_3_1);

        answ_3_2 = new QPushButton(layoutWidget2);
        answ_3_2->setObjectName(QString::fromUtf8("answ_3_2"));
        answ_3_2->setMinimumSize(QSize(0, 250));
        answ_3_2->setStyleSheet(QString::fromUtf8("#answ_3_2{\n"
"	background-image: url(:/res/img/BG.png);\n"
"image: url(:/res/img/\321\201arrot_2.png);\n"
"	border: 0px;\n"
"}\n"
"#answ_3_2:hover{\n"
"	image: url(:/res/img/\321\201arrot.png);\n"
"}\n"
"\n"
"\n"
""));

        horizontalLayout_5->addWidget(answ_3_2);

        answ_3_3 = new QPushButton(layoutWidget2);
        answ_3_3->setObjectName(QString::fromUtf8("answ_3_3"));
        answ_3_3->setMinimumSize(QSize(0, 250));
        answ_3_3->setStyleSheet(QString::fromUtf8("#answ_3_3{\n"
"	background-image: url(:/res/img/BG.png);\n"
"	image: url(:/res/img/\321\201arrot.png);\n"
"	border: 0px;\n"
"}\n"
"#answ_3_3:hover{\n"
"	image: url(:/res/img/\321\201arrot_2.png);\n"
"}\n"
"\n"
""));

        horizontalLayout_5->addWidget(answ_3_3);

        answ_3_4 = new QPushButton(layoutWidget2);
        answ_3_4->setObjectName(QString::fromUtf8("answ_3_4"));
        answ_3_4->setMinimumSize(QSize(0, 250));
        answ_3_4->setStyleSheet(QString::fromUtf8("#answ_3_4{\n"
"	background-image: url(:/res/img/BG.png);\n"
"image: url(:/res/img/\321\201arrot_2.png);\n"
"	border: 0px;\n"
"}\n"
"#answ_3_4:hover{\n"
"	image: url(:/res/img/\321\201arrot.png);\n"
"}\n"
""));

        horizontalLayout_5->addWidget(answ_3_4);

        answ_3_5 = new QPushButton(layoutWidget2);
        answ_3_5->setObjectName(QString::fromUtf8("answ_3_5"));
        answ_3_5->setMinimumSize(QSize(0, 250));
        answ_3_5->setStyleSheet(QString::fromUtf8("#answ_3_5{\n"
"	background-image: url(:/res/img/BG.png);\n"
"	image: url(:/res/img/\321\201arrot.png);\n"
"	border: 0px;\n"
"}\n"
"#answ_3_5:hover{\n"
"	image: url(:/res/img/\321\201arrot_2.png);\n"
"}\n"
"\n"
""));

        horizontalLayout_5->addWidget(answ_3_5);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 35pt \"Yu Gothic UI Semilight\";"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_2);

        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 35pt \"Yu Gothic UI Semilight\";"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_6);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 35pt \"Yu Gothic UI Semilight\";"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_5);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 35pt \"Yu Gothic UI Semilight\";"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_4);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 35pt \"Yu Gothic UI Semilight\";"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_3);


        verticalLayout_4->addLayout(horizontalLayout_6);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        layoutWidget3 = new QWidget(page_4);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 0, 1151, 511));
        verticalLayout_7 = new QVBoxLayout(layoutWidget3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        task_4 = new QLabel(layoutWidget3);
        task_4->setObjectName(QString::fromUtf8("task_4"));
        task_4->setStyleSheet(QString::fromUtf8("font: 35pt \"Yu Gothic UI Semilight\";"));
        task_4->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(task_4);

        task_4_1 = new QLabel(layoutWidget3);
        task_4_1->setObjectName(QString::fromUtf8("task_4_1"));
        task_4_1->setMinimumSize(QSize(150, 200));
        QFont font;
        font.setFamily(QString::fromUtf8("Yu Gothic UI Semilight"));
        font.setPointSize(45);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        task_4_1->setFont(font);
        task_4_1->setStyleSheet(QString::fromUtf8("\n"
"font: 45pt \"Yu Gothic UI Semilight\";\n"
"	color: rgb(250, 191, 35);\n"
"image: url(:/res/img/tomato.png);"));
        task_4_1->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(task_4_1);


        horizontalLayout_7->addLayout(verticalLayout_5);


        verticalLayout_7->addLayout(horizontalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        answ_4_3 = new QPushButton(layoutWidget3);
        answ_4_3->setObjectName(QString::fromUtf8("answ_4_3"));
        answ_4_3->setMinimumSize(QSize(0, 200));
        answ_4_3->setStyleSheet(QString::fromUtf8("#answ_4_3{\n"
"	background-image: url(:/res/img/BG.png);\n"
"	image: url(:/res/img/potato.png);\n"
"	border: 0px;\n"
"\n"
"font: 45pt \"Yu Gothic UI Semilight\";\n"
"}\n"
"#answ_4_3:hover{\n"
"	\n"
"	image: url(:/res/img/potato_2.png);\n"
"}"));

        horizontalLayout_8->addWidget(answ_4_3);

        answ_4_2 = new QPushButton(layoutWidget3);
        answ_4_2->setObjectName(QString::fromUtf8("answ_4_2"));
        answ_4_2->setMinimumSize(QSize(0, 200));
        answ_4_2->setStyleSheet(QString::fromUtf8("#answ_4_2{\n"
"	background-image: url(:/res/img/BG.png);\n"
"	image: url(:/res/img/eggplant.png);\n"
"	border: 0px;\n"
"\n"
"font: 45pt \"Yu Gothic UI Semilight\";\n"
"}\n"
"#answ_4_2:hover{\n"
"	\n"
"	image: url(:/res/img/eggplant_2.png);\n"
"}"));

        horizontalLayout_8->addWidget(answ_4_2);

        answ_4_1 = new QPushButton(layoutWidget3);
        answ_4_1->setObjectName(QString::fromUtf8("answ_4_1"));
        answ_4_1->setMinimumSize(QSize(0, 200));
        answ_4_1->setLayoutDirection(Qt::LeftToRight);
        answ_4_1->setStyleSheet(QString::fromUtf8("#answ_4_1{\n"
"	background-image: url(:/res/img/BG.png);\n"
"	image: url(:/res/img/\321\201arrot.png);\n"
"	border: 0px;\n"
"font: 45pt \"Yu Gothic UI Semilight\";\n"
"}\n"
"#answ_4_1:hover{\n"
"	\n"
"	image: url(:/res/img/\321\201arrot_2.png);\n"
"}"));

        horizontalLayout_8->addWidget(answ_4_1);


        verticalLayout_6->addLayout(horizontalLayout_8);


        verticalLayout_7->addLayout(verticalLayout_6);

        stackedWidget->addWidget(page_4);

        verticalLayout->addWidget(stackedWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        backButton = new QPushButton(g2_l1);
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

        horizontalLayout_2->addWidget(backButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        nextButton = new QPushButton(g2_l1);
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

        horizontalLayout_2->addWidget(nextButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(g2_l1);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(g2_l1);
    } // setupUi

    void retranslateUi(QDialog *g2_l1)
    {
        g2_l1->setWindowTitle(QApplication::translate("g2_l1", "Dialog", nullptr));
        homeButton->setText(QApplication::translate("g2_l1", "\320\234\320\206\320\231 \320\232\320\233\320\220\320\241", nullptr));
        printButton->setText(QApplication::translate("g2_l1", "\360\237\226\250", nullptr));
        logo->setText(QString());
        title->setText(QApplication::translate("g2_l1", "\320\240\320\206\320\222\320\225\320\235\320\254 1, \320\232\320\233\320\220\320\241 2", nullptr));
        pears_3->setText(QString());
        pears_1->setText(QString());
        pears_4->setText(QString());
        pears_5->setText(QString());
        task->setText(QApplication::translate("g2_l1", "\320\237\320\276\321\200\320\260\321\205\321\203\320\271\n"
"\320\263\321\200\321\203\321\210\321\226 \320\277\320\276 10\n"
"\342\206\223", nullptr));
        pears_2->setText(QString());
        answ->setText(QString());
        task_2->setText(QApplication::translate("g2_l1", "\320\222\321\201\321\202\320\260\320\262 \n"
"\320\277\321\200\320\276\320\277\321\203\321\211\320\265\320\275\321\226 \321\207\320\270\321\201\320\273\320\260", nullptr));
        arrow->setText(QString());
        num_23->setText(QApplication::translate("g2_l1", "23", nullptr));
        num_25->setText(QApplication::translate("g2_l1", "25", nullptr));
        num_26->setText(QApplication::translate("g2_l1", "26", nullptr));
        num_27->setText(QApplication::translate("g2_l1", "30", nullptr));
        task_3->setText(QApplication::translate("g2_l1", "\320\236\320\261\320\265\321\200\320\270 \320\274\320\276\321\200\320\272\320\262\321\203\n"
"\320\267 \320\277\320\260\321\200\320\275\320\270\320\274\320\270 \321\207\320\270\321\201\320\273\320\260\320\274\320\270", nullptr));
        answ_3_1->setText(QString());
        answ_3_2->setText(QString());
        answ_3_3->setText(QString());
        answ_3_4->setText(QString());
        answ_3_5->setText(QString());
        label_2->setText(QApplication::translate("g2_l1", "153", nullptr));
        label_6->setText(QApplication::translate("g2_l1", "842", nullptr));
        label_5->setText(QApplication::translate("g2_l1", "500", nullptr));
        label_4->setText(QApplication::translate("g2_l1", "15", nullptr));
        label_3->setText(QApplication::translate("g2_l1", "46", nullptr));
        task_4->setText(QApplication::translate("g2_l1", "\320\227\320\275\320\260\320\271\320\264\320\270 \321\201\321\203\321\201\321\226\320\264\321\226\320\262 \320\277\320\276\320\274\321\226\320\264\320\276\321\200\320\272\320\270", nullptr));
        task_4_1->setText(QApplication::translate("g2_l1", "                   287", nullptr));
        answ_4_3->setText(QApplication::translate("g2_l1", "                286", nullptr));
        answ_4_2->setText(QApplication::translate("g2_l1", "              276", nullptr));
        answ_4_1->setText(QApplication::translate("g2_l1", "            288", nullptr));
        backButton->setText(QString());
        nextButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class g2_l1: public Ui_g2_l1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_G2_L1_H
