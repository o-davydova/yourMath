/********************************************************************************
** Form generated from reading UI file 'g1_l1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_G1_L1_H
#define UI_G1_L1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_G1_L1
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *homeButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *printButton;
    QLabel *logo;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QLabel *title;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *answ_1;
    QPushButton *answ_2;
    QPushButton *answ_3;
    QPushButton *answ_4;
    QPushButton *answ_5;
    QPushButton *answ_6;
    QPushButton *answ_7;
    QLabel *task;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *verticalSpacer_4;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *nextButton;

    void setupUi(QDialog *G1_L1)
    {
        if (G1_L1->objectName().isEmpty())
            G1_L1->setObjectName(QString::fromUtf8("G1_L1"));
        G1_L1->resize(1080, 720);
        G1_L1->setMinimumSize(QSize(50, 50));
        G1_L1->setStyleSheet(QString::fromUtf8("#G1_L1{background-color: #cbd6da;}"));
        verticalLayout_3 = new QVBoxLayout(G1_L1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        homeButton = new QPushButton(G1_L1);
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

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        printButton = new QPushButton(G1_L1);
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

        horizontalLayout_2->addWidget(printButton);

        logo = new QLabel(G1_L1);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setMinimumSize(QSize(150, 0));
        logo->setStyleSheet(QString::fromUtf8("image: url(:/res/img/title.png);"));

        horizontalLayout_2->addWidget(logo);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_3);


        verticalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(verticalSpacer_2);

        title = new QLabel(G1_L1);
        title->setObjectName(QString::fromUtf8("title"));
        title->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";\n"
""));
        title->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(title);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(verticalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        answ_1 = new QPushButton(G1_L1);
        answ_1->setObjectName(QString::fromUtf8("answ_1"));
        answ_1->setMinimumSize(QSize(0, 200));
        answ_1->setStyleSheet(QString::fromUtf8("#answ_1{\n"
"	background-image: url(:/res/img/BG.png);\n"
"	image: url(:/res/img/red_apple1.png);\n"
"border: 0px;\n"
"}\n"
"#answ_1:hover{\n"
"	image: url(:/res/img/red_apple2.png);\n"
"}\n"
"\n"
"\n"
""));

        horizontalLayout->addWidget(answ_1);

        answ_2 = new QPushButton(G1_L1);
        answ_2->setObjectName(QString::fromUtf8("answ_2"));
        answ_2->setMinimumSize(QSize(0, 200));
        answ_2->setStyleSheet(QString::fromUtf8("#answ_2{\n"
"	background-image: url(:/res/img/BG.png);\n"
"	image: url(:/res/img/yellow_apple2.png);\n"
"	border: 0px;\n"
"}\n"
"#answ_2:hover{\n"
"	image: url(:/res/img/yellow_apple1.png);\n"
"}\n"
"\n"
""));

        horizontalLayout->addWidget(answ_2);

        answ_3 = new QPushButton(G1_L1);
        answ_3->setObjectName(QString::fromUtf8("answ_3"));
        answ_3->setMinimumSize(QSize(0, 200));
        answ_3->setStyleSheet(QString::fromUtf8("#answ_3{\n"
"	background-image: url(:/res/img/BG.png);\n"
"	image: url(:/res/img/red_apple1.png);\n"
"border: 0px;\n"
"}\n"
"#answ_3:hover{\n"
"	image: url(:/res/img/red_apple2.png);\n"
"}\n"
"\n"
""));

        horizontalLayout->addWidget(answ_3);

        answ_4 = new QPushButton(G1_L1);
        answ_4->setObjectName(QString::fromUtf8("answ_4"));
        answ_4->setMinimumSize(QSize(0, 200));
        answ_4->setStyleSheet(QString::fromUtf8("#answ_4{\n"
"	background-image: url(:/res/img/BG.png);\n"
"	image: url(:/res/img/yellow_apple2.png);\n"
"border: 0px;\n"
"}\n"
"#answ_4:hover{\n"
"	image: url(:/res/img/yellow_apple1.png);\n"
"}\n"
"\n"
""));

        horizontalLayout->addWidget(answ_4);

        answ_5 = new QPushButton(G1_L1);
        answ_5->setObjectName(QString::fromUtf8("answ_5"));
        answ_5->setMinimumSize(QSize(0, 200));
        answ_5->setStyleSheet(QString::fromUtf8("#answ_5{\n"
"	background-image: url(:/res/img/BG.png);\n"
"	image: url(:/res/img/red_apple1.png);\n"
"border: 0px;\n"
"}\n"
"#answ_5:hover{\n"
"	image: url(:/res/img/red_apple2.png);\n"
"}\n"
"\n"
""));

        horizontalLayout->addWidget(answ_5);

        answ_6 = new QPushButton(G1_L1);
        answ_6->setObjectName(QString::fromUtf8("answ_6"));
        answ_6->setMinimumSize(QSize(0, 200));
        answ_6->setStyleSheet(QString::fromUtf8("#answ_6{\n"
"	background-image: url(:/res/img/BG.png);\n"
"	image: url(:/res/img/yellow_apple2.png);\n"
"border: 0px;\n"
"}\n"
"#answ_6:hover{\n"
"	image: url(:/res/img/yellow_apple1.png);\n"
"}\n"
"\n"
""));

        horizontalLayout->addWidget(answ_6);

        answ_7 = new QPushButton(G1_L1);
        answ_7->setObjectName(QString::fromUtf8("answ_7"));
        answ_7->setMinimumSize(QSize(0, 200));
        answ_7->setStyleSheet(QString::fromUtf8("#answ_7{\n"
"	background-image: url(:/res/img/BG.png);\n"
"	image: url(:/res/img/red_apple1.png);\n"
"border: 0px;\n"
"}\n"
"#answ_7:hover{\n"
"	image: url(:/res/img/red_apple2.png);\n"
"}\n"
"\n"
""));

        horizontalLayout->addWidget(answ_7);


        verticalLayout_3->addLayout(horizontalLayout);

        task = new QLabel(G1_L1);
        task->setObjectName(QString::fromUtf8("task"));
        task->setStyleSheet(QString::fromUtf8("\n"
"font: 25pt \"Yu Gothic UI Semilight\";"));
        task->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(task);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(verticalSpacer_4);

        backButton = new QPushButton(G1_L1);
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

        horizontalLayout_4->addWidget(backButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        nextButton = new QPushButton(G1_L1);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setMinimumSize(QSize(200, 150));
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

        horizontalLayout_4->addWidget(nextButton);


        verticalLayout_3->addLayout(horizontalLayout_4);


        retranslateUi(G1_L1);

        QMetaObject::connectSlotsByName(G1_L1);
    } // setupUi

    void retranslateUi(QDialog *G1_L1)
    {
        G1_L1->setWindowTitle(QApplication::translate("G1_L1", "Dialog", nullptr));
        homeButton->setText(QApplication::translate("G1_L1", " \320\234\320\206\320\231 \320\232\320\233\320\220\320\241 ", nullptr));
        printButton->setText(QApplication::translate("G1_L1", "\360\237\226\250", nullptr));
        logo->setText(QString());
        title->setText(QApplication::translate("G1_L1", "\320\240\320\206\320\222\320\225\320\235\320\254 1, \320\232\320\233\320\220\320\241 1", nullptr));
        answ_1->setText(QString());
        answ_2->setText(QString());
        answ_3->setText(QString());
        answ_4->setText(QString());
        answ_5->setText(QString());
        answ_6->setText(QString());
        answ_7->setText(QString());
        task->setText(QApplication::translate("G1_L1", "\320\235\320\260\321\202\320\270\321\201\320\275\320\270 \320\275\320\260 \320\277'\321\217\321\202\320\265 \321\217\320\261\320\273\321\203\320\272\320\276.", nullptr));
        backButton->setText(QString());
        nextButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class G1_L1: public Ui_G1_L1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_G1_L1_H
