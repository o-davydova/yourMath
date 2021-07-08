/********************************************************************************
** Form generated from reading UI file 'levels.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVELS_H
#define UI_LEVELS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Levels
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QPushButton *homeButton;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *title;
    QLabel *title_s;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QPushButton *Lev_11;
    QPushButton *Lev_12;
    QPushButton *Lev_3;
    QPushButton *Lev_6;
    QPushButton *Lev_1;
    QPushButton *Lev_8;
    QPushButton *Lev_10;
    QPushButton *Lev_7;
    QPushButton *Lev_9;
    QPushButton *Lev_4;
    QPushButton *Lev_5;
    QPushButton *Lev_2;
    QPushButton *DPA;

    void setupUi(QDialog *Levels)
    {
        if (Levels->objectName().isEmpty())
            Levels->setObjectName(QString::fromUtf8("Levels"));
        Levels->resize(1371, 934);
        Levels->setStyleSheet(QString::fromUtf8("#Levels{background-color: #cbd6da;}"));
        gridLayout_2 = new QGridLayout(Levels);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 1, 1, 1);

        homeButton = new QPushButton(Levels);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setMinimumSize(QSize(0, 50));
        homeButton->setStyleSheet(QString::fromUtf8("#homeButton{\n"
"background-color: rgb(45, 44, 44);\n"
"color: white;\n"
"font: 15pt \"Yu Gothic UI Semilight\";\n"
"border:0px;}\n"
"\n"
"#homeButton:hover{\n"
"background-color:rgb(250, 191, 35);\n"
"color: white;\n"
"font: 14pt \"Yu Gothic UI Semilight\";}"));

        gridLayout_2->addWidget(homeButton, 3, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        title = new QLabel(Levels);
        title->setObjectName(QString::fromUtf8("title"));
        title->setMaximumSize(QSize(16777215, 16777215));
        title->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";"));
        title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(title);

        title_s = new QLabel(Levels);
        title_s->setObjectName(QString::fromUtf8("title_s"));
        title_s->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 20pt \"Yu Gothic UI Semilight\";"));

        verticalLayout->addWidget(title_s);


        gridLayout_2->addLayout(verticalLayout, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(20);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Lev_11 = new QPushButton(Levels);
        Lev_11->setObjectName(QString::fromUtf8("Lev_11"));
        Lev_11->setMinimumSize(QSize(200, 200));
        Lev_11->setStyleSheet(QString::fromUtf8("#Lev_11{\n"
"background-color:rgb(250, 191, 35);\n"
"color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";\n"
"border: 15px solid;\n"
"border-color: white;}\n"
"\n"
"#Lev_11:hover{\n"
"background-color: rgb(45, 44, 44);\n"
"color: white;\n"
"font: 50pt \"Yu Gothic UI Semilight\";}"));

        gridLayout->addWidget(Lev_11, 4, 2, 1, 1);

        Lev_12 = new QPushButton(Levels);
        Lev_12->setObjectName(QString::fromUtf8("Lev_12"));
        Lev_12->setMinimumSize(QSize(200, 200));
        Lev_12->setStyleSheet(QString::fromUtf8("#Lev_12{\n"
"background-color:rgb(250, 191, 35);\n"
"color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";\n"
"border: 15px solid;\n"
"border-color: white;}\n"
"\n"
"#Lev_12:hover{\n"
"background-color: rgb(45, 44, 44);\n"
"color: white;\n"
"font: 50pt \"Yu Gothic UI Semilight\";}"));

        gridLayout->addWidget(Lev_12, 4, 3, 1, 1);

        Lev_3 = new QPushButton(Levels);
        Lev_3->setObjectName(QString::fromUtf8("Lev_3"));
        Lev_3->setMinimumSize(QSize(200, 200));
        Lev_3->setStyleSheet(QString::fromUtf8("#Lev_3{\n"
"background-color:rgb(250, 191, 35);\n"
"color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";\n"
"border: 15px solid;\n"
"border-color: white;}\n"
"\n"
"#Lev_3:hover{\n"
"background-color: rgb(45, 44, 44);\n"
"color: white;\n"
"font: 50pt \"Yu Gothic UI Semilight\";}"));

        gridLayout->addWidget(Lev_3, 2, 2, 1, 1);

        Lev_6 = new QPushButton(Levels);
        Lev_6->setObjectName(QString::fromUtf8("Lev_6"));
        Lev_6->setMinimumSize(QSize(200, 200));
        Lev_6->setStyleSheet(QString::fromUtf8("#Lev_6{\n"
"background-color:rgb(250, 191, 35);\n"
"color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";\n"
"border: 15px solid;\n"
"border-color: white;}\n"
"\n"
"#Lev_6:hover{\n"
"background-color: rgb(45, 44, 44);\n"
"color: white;\n"
"font: 50pt \"Yu Gothic UI Semilight\";}"));

        gridLayout->addWidget(Lev_6, 3, 1, 1, 1);

        Lev_1 = new QPushButton(Levels);
        Lev_1->setObjectName(QString::fromUtf8("Lev_1"));
        Lev_1->setMinimumSize(QSize(200, 200));
        Lev_1->setStyleSheet(QString::fromUtf8("#Lev_1{\n"
"background-color:rgb(250, 191, 35);\n"
"color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";\n"
"border: 15px solid;\n"
"border-color: white;}\n"
"\n"
"#Lev_1:hover{\n"
"background-color: rgb(45, 44, 44);\n"
"color: white;\n"
"font: 50pt \"Yu Gothic UI Semilight\";}"));

        gridLayout->addWidget(Lev_1, 2, 0, 1, 1);

        Lev_8 = new QPushButton(Levels);
        Lev_8->setObjectName(QString::fromUtf8("Lev_8"));
        Lev_8->setMinimumSize(QSize(200, 200));
        Lev_8->setStyleSheet(QString::fromUtf8("#Lev_8{\n"
"background-color:rgb(250, 191, 35);\n"
"color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";\n"
"border: 15px solid;\n"
"border-color: white;}\n"
"\n"
"#Lev_8:hover{\n"
"background-color: rgb(45, 44, 44);\n"
"color: white;\n"
"font: 50pt \"Yu Gothic UI Semilight\";}"));

        gridLayout->addWidget(Lev_8, 3, 3, 1, 1);

        Lev_10 = new QPushButton(Levels);
        Lev_10->setObjectName(QString::fromUtf8("Lev_10"));
        Lev_10->setMinimumSize(QSize(200, 200));
        Lev_10->setStyleSheet(QString::fromUtf8("#Lev_10{\n"
"background-color:rgb(250, 191, 35);\n"
"color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";\n"
"border: 15px solid;\n"
"border-color: white;}\n"
"\n"
"#Lev_10:hover{\n"
"background-color: rgb(45, 44, 44);\n"
"color: white;\n"
"font: 50pt \"Yu Gothic UI Semilight\";}"));

        gridLayout->addWidget(Lev_10, 4, 1, 1, 1);

        Lev_7 = new QPushButton(Levels);
        Lev_7->setObjectName(QString::fromUtf8("Lev_7"));
        Lev_7->setMinimumSize(QSize(200, 200));
        Lev_7->setStyleSheet(QString::fromUtf8("#Lev_7{\n"
"background-color:rgb(250, 191, 35);\n"
"color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";\n"
"border: 15px solid;\n"
"border-color: white;}\n"
"\n"
"#Lev_7:hover{\n"
"background-color: rgb(45, 44, 44);\n"
"color: white;\n"
"font: 50pt \"Yu Gothic UI Semilight\";}"));

        gridLayout->addWidget(Lev_7, 3, 2, 1, 1);

        Lev_9 = new QPushButton(Levels);
        Lev_9->setObjectName(QString::fromUtf8("Lev_9"));
        Lev_9->setMinimumSize(QSize(200, 200));
        Lev_9->setStyleSheet(QString::fromUtf8("#Lev_9{\n"
"background-color:rgb(250, 191, 35);\n"
"color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";\n"
"border: 15px solid;\n"
"border-color: white;}\n"
"\n"
"#Lev_9:hover{\n"
"background-color: rgb(45, 44, 44);\n"
"color: white;\n"
"font: 50pt \"Yu Gothic UI Semilight\";}"));

        gridLayout->addWidget(Lev_9, 4, 0, 1, 1);

        Lev_4 = new QPushButton(Levels);
        Lev_4->setObjectName(QString::fromUtf8("Lev_4"));
        Lev_4->setMinimumSize(QSize(200, 200));
        Lev_4->setStyleSheet(QString::fromUtf8("#Lev_4{\n"
"background-color:rgb(250, 191, 35);\n"
"color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";\n"
"border: 15px solid;\n"
"border-color: white;}\n"
"\n"
"#Lev_4:hover{\n"
"background-color: rgb(45, 44, 44);\n"
"color: white;\n"
"font: 50pt \"Yu Gothic UI Semilight\";}"));

        gridLayout->addWidget(Lev_4, 2, 3, 1, 1);

        Lev_5 = new QPushButton(Levels);
        Lev_5->setObjectName(QString::fromUtf8("Lev_5"));
        Lev_5->setMinimumSize(QSize(200, 200));
        Lev_5->setStyleSheet(QString::fromUtf8("#Lev_5{\n"
"background-color: rgb(250, 191, 35);\n"
"color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";\n"
"border: 15px solid;\n"
"border-color: white;}\n"
"\n"
"#Lev_5:hover{\n"
"background-color: rgb(45, 44, 44);\n"
"color: white;\n"
"font: 50pt \"Yu Gothic UI Semilight\";}"));

        gridLayout->addWidget(Lev_5, 3, 0, 1, 1);

        Lev_2 = new QPushButton(Levels);
        Lev_2->setObjectName(QString::fromUtf8("Lev_2"));
        Lev_2->setMinimumSize(QSize(200, 200));
        Lev_2->setStyleSheet(QString::fromUtf8("#Lev_2{\n"
"background-color:rgb(250, 191, 35);\n"
"color: white;\n"
"font: 40pt \"Yu Gothic UI Semilight\";\n"
"border: 15px solid;\n"
"border-color: white;}\n"
"\n"
"#Lev_2:hover{\n"
"background-color: rgb(45, 44, 44);\n"
"color: white;\n"
"font: 50pt \"Yu Gothic UI Semilight\";}"));

        gridLayout->addWidget(Lev_2, 2, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout_2, 1, 1, 1, 1);

        DPA = new QPushButton(Levels);
        DPA->setObjectName(QString::fromUtf8("DPA"));
        DPA->setStyleSheet(QString::fromUtf8("#DPA{\n"
"background-color:rgb(255, 255, 255);\n"
"color: rgb(45, 44, 44);\n"
"font: 30pt \"Yu Gothic UI Semilight\";\n"
"border: 2px solid;\n"
"border-color: rgb(255, 255, 255);\n"
"border-radius: 20px;}\n"
"\n"
"#DPA:hover{\n"
"background-color: rgb(250, 191, 35);\n"
"	color: rgb(255, 255, 255);\n"
"font: 30pt \"Yu Gothic UI Semilight\";\n"
"border-color:  rgb(250, 191, 35);}"));

        gridLayout_2->addWidget(DPA, 2, 1, 1, 1);


        retranslateUi(Levels);

        QMetaObject::connectSlotsByName(Levels);
    } // setupUi

    void retranslateUi(QDialog *Levels)
    {
        Levels->setWindowTitle(QApplication::translate("Levels", "Dialog", nullptr));
        homeButton->setText(QApplication::translate("Levels", " \320\235\320\260 \320\263\320\276\320\273\320\276\320\262\320\275\320\265 \320\274\320\265\320\275\321\216 ", nullptr));
        title->setText(QApplication::translate("Levels", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt;\">1 \320\232\320\233\320\220\320\241</span></p></body></html>", nullptr));
        title_s->setText(QApplication::translate("Levels", "<html><head/><body><p align=\"center\">\320\276\320\261\320\265\321\200\320\270 \321\201\320\262\321\226\320\271 \321\200\321\226\320\262\320\265\320\275\321\214</p></body></html>", nullptr));
        Lev_11->setText(QApplication::translate("Levels", "11", nullptr));
        Lev_12->setText(QApplication::translate("Levels", "12", nullptr));
        Lev_3->setText(QApplication::translate("Levels", "3", nullptr));
        Lev_6->setText(QApplication::translate("Levels", "6", nullptr));
        Lev_1->setText(QApplication::translate("Levels", "1", nullptr));
        Lev_8->setText(QApplication::translate("Levels", "8", nullptr));
        Lev_10->setText(QApplication::translate("Levels", "10", nullptr));
        Lev_7->setText(QApplication::translate("Levels", "7", nullptr));
        Lev_9->setText(QApplication::translate("Levels", "9", nullptr));
        Lev_4->setText(QApplication::translate("Levels", "4", nullptr));
        Lev_5->setText(QApplication::translate("Levels", "5", nullptr));
        Lev_2->setText(QApplication::translate("Levels", "2", nullptr));
        DPA->setText(QApplication::translate("Levels", "\320\224\320\225\320\240\320\226\320\220\320\222\320\235\320\220 \320\237\320\206\320\224\320\241\320\243\320\234\320\232\320\236\320\222\320\220 \320\220\320\242\320\225\320\241\320\242\320\220\320\246\320\206\320\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Levels: public Ui_Levels {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVELS_H
