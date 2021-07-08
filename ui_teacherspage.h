/********************************************************************************
** Form generated from reading UI file 'teacherspage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERSPAGE_H
#define UI_TEACHERSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TeachersPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_14;
    QLabel *namesLabel;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_16;
    QLabel *schoolLabel;
    QSpacerItem *horizontalSpacer_12;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *levelsLabel;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *SpacerFive;
    QPushButton *Grade1Button;
    QLabel *spacerOne;
    QPushButton *Grade2Button;
    QLabel *SpacerTwo;
    QPushButton *Grade3Button;
    QLabel *SpacerThree;
    QPushButton *Grade4Button;
    QLabel *SpacerSix;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_8;
    QLabel *SpacerFour;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_3;
    QPushButton *statisticButton;
    QPushButton *MINButton;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *exitButton;
    QSpacerItem *horizontalSpacer_15;
    QLabel *logo;

    void setupUi(QDialog *TeachersPage)
    {
        if (TeachersPage->objectName().isEmpty())
            TeachersPage->setObjectName(QString::fromUtf8("TeachersPage"));
        TeachersPage->resize(900, 735);
        TeachersPage->setStyleSheet(QString::fromUtf8("#TeachersPage{\n"
"	background-color: rgb(203, 214, 218);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(TeachersPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_10 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        label = new QLabel(TeachersPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(650, 0));
        label->setStyleSheet(QString::fromUtf8("background-color:rgb(250, 191, 35);\n"
"	color: rgb(116, 113, 115);\n"
"	font: 25 12pt \"Yu Gothic UI Light\";"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label);

        horizontalSpacer_11 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_14 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_14);

        namesLabel = new QLabel(TeachersPage);
        namesLabel->setObjectName(QString::fromUtf8("namesLabel"));
        namesLabel->setMinimumSize(QSize(650, 50));
        namesLabel->setStyleSheet(QString::fromUtf8("#namesLabel{\n"
"	background-color:rgb(250, 191, 35);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 25 30pt \"Yu Gothic UI Light\";\n"
"}"));
        namesLabel->setLineWidth(0);
        namesLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(namesLabel);

        horizontalSpacer_13 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_16);

        schoolLabel = new QLabel(TeachersPage);
        schoolLabel->setObjectName(QString::fromUtf8("schoolLabel"));
        schoolLabel->setMinimumSize(QSize(650, 0));
        schoolLabel->setStyleSheet(QString::fromUtf8("/*background-color:rgb(250, 191, 35);*/\n"
"	color: rgb(255, 255, 255);\n"
"	font: 25 18pt \"Yu Gothic UI Light\";"));
        schoolLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(schoolLabel);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_12);


        verticalLayout_4->addLayout(horizontalLayout_8);


        verticalLayout_2->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        levelsLabel = new QLabel(TeachersPage);
        levelsLabel->setObjectName(QString::fromUtf8("levelsLabel"));
        levelsLabel->setMinimumSize(QSize(650, 80));
        levelsLabel->setStyleSheet(QString::fromUtf8("	background-color: rgb(255, 255, 255);\n"
"	color:rgb(45, 44, 44);\n"
"	font: 25 15pt \"Yu Gothic UI Light\";"));
        levelsLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(levelsLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        SpacerFive = new QLabel(TeachersPage);
        SpacerFive->setObjectName(QString::fromUtf8("SpacerFive"));
        SpacerFive->setMinimumSize(QSize(10, 0));
        SpacerFive->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(SpacerFive);

        Grade1Button = new QPushButton(TeachersPage);
        Grade1Button->setObjectName(QString::fromUtf8("Grade1Button"));
        Grade1Button->setMinimumSize(QSize(150, 150));
        Grade1Button->setStyleSheet(QString::fromUtf8("#Grade1Button {\n"
"background-color: rgb(45, 44, 44);\n"
"color:rgb(255, 255, 255);\n"
"font: 23pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;}\n"
"#Grade1Button:hover{\n"
"background-color: rgb(250, 191, 35);\n"
"color: rgb(45, 44, 44);\n"
"font: 20pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout->addWidget(Grade1Button);

        spacerOne = new QLabel(TeachersPage);
        spacerOne->setObjectName(QString::fromUtf8("spacerOne"));
        spacerOne->setMinimumSize(QSize(10, 0));
        spacerOne->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(spacerOne);

        Grade2Button = new QPushButton(TeachersPage);
        Grade2Button->setObjectName(QString::fromUtf8("Grade2Button"));
        Grade2Button->setMinimumSize(QSize(150, 150));
        Grade2Button->setStyleSheet(QString::fromUtf8("#Grade2Button {\n"
"background-color: rgb(45, 44, 44);\n"
"color:rgb(255, 255, 255);\n"
"font: 23pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;}\n"
"#Grade2Button:hover{\n"
"background-color: rgb(250, 191, 35);\n"
"color: rgb(45, 44, 44);\n"
"font: 20pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout->addWidget(Grade2Button);

        SpacerTwo = new QLabel(TeachersPage);
        SpacerTwo->setObjectName(QString::fromUtf8("SpacerTwo"));
        SpacerTwo->setMinimumSize(QSize(10, 0));
        SpacerTwo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(SpacerTwo);

        Grade3Button = new QPushButton(TeachersPage);
        Grade3Button->setObjectName(QString::fromUtf8("Grade3Button"));
        Grade3Button->setMinimumSize(QSize(150, 150));
        Grade3Button->setStyleSheet(QString::fromUtf8("#Grade3Button {\n"
"background-color: rgb(45, 44, 44);\n"
"color:rgb(255, 255, 255);\n"
"font: 23pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;}\n"
"#Grade3Button:hover{\n"
"background-color: rgb(250, 191, 35);\n"
"color: rgb(45, 44, 44);\n"
"font: 20pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout->addWidget(Grade3Button);

        SpacerThree = new QLabel(TeachersPage);
        SpacerThree->setObjectName(QString::fromUtf8("SpacerThree"));
        SpacerThree->setMinimumSize(QSize(10, 0));
        SpacerThree->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(SpacerThree);

        Grade4Button = new QPushButton(TeachersPage);
        Grade4Button->setObjectName(QString::fromUtf8("Grade4Button"));
        Grade4Button->setMinimumSize(QSize(150, 150));
        Grade4Button->setStyleSheet(QString::fromUtf8("#Grade4Button {\n"
"background-color: rgb(45, 44, 44);\n"
"color:rgb(255, 255, 255);\n"
"font: 23pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;}\n"
"#Grade4Button:hover{\n"
"background-color: rgb(250, 191, 35);\n"
"color: rgb(45, 44, 44);\n"
"font: 20pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout->addWidget(Grade4Button);

        SpacerSix = new QLabel(TeachersPage);
        SpacerSix->setObjectName(QString::fromUtf8("SpacerSix"));
        SpacerSix->setMinimumSize(QSize(10, 0));
        SpacerSix->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(SpacerSix);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        SpacerFour = new QLabel(TeachersPage);
        SpacerFour->setObjectName(QString::fromUtf8("SpacerFour"));
        SpacerFour->setMinimumSize(QSize(650, 0));
        SpacerFour->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(SpacerFour);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        statisticButton = new QPushButton(TeachersPage);
        statisticButton->setObjectName(QString::fromUtf8("statisticButton"));
        statisticButton->setMinimumSize(QSize(650, 0));
        statisticButton->setStyleSheet(QString::fromUtf8("#statisticButton {\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(74, 72, 73);\n"
"font: 15pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;\n"
"border-radius: 15px;}\n"
"#statisticButton:hover{\n"
"background-color: rgb(45, 44, 44);\n"
"color:rgb(255, 255, 255);\n"
"font: 14pt \"Yu Gothic UI Semilight\";}"));

        verticalLayout_3->addWidget(statisticButton);

        MINButton = new QPushButton(TeachersPage);
        MINButton->setObjectName(QString::fromUtf8("MINButton"));
        MINButton->setStyleSheet(QString::fromUtf8("#MINButton {\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(74, 72, 73);\n"
"font: 15pt \"Yu Gothic UI Semilight\";\n"
"border: 5px;\n"
"border-radius: 15px;\n"
"text-shadow: 2px 2px 2px #000000;}\n"
"#MINButton:hover{\n"
"background-color: rgb(45, 44, 44);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"Yu Gothic UI Semilight\";}"));

        verticalLayout_3->addWidget(MINButton);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(250, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        exitButton = new QPushButton(TeachersPage);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setMinimumSize(QSize(400, 0));
        exitButton->setStyleSheet(QString::fromUtf8("#exitButton {\n"
"background-color: rgb(250, 191, 35);\n"
"color: rgb(45, 44, 44);\n"
"font: 20pt \"Yu Gothic UI Semilight\";\n"
"image: url(:/res/img/closed.png);\n"
"border: 10px solid;\n"
"border-color: rgb(250, 191, 35);\n"
"padding-top:5px;}\n"
"#exitButton:hover{\n"
"background-color: white;\n"
"image:url(:/res/img/open.png);\n"
"color:rgb(43, 42, 42);\n"
"font: 20pt \"Yu Gothic UI Semilight\";\n"
"border: 10px solid;\n"
"border-color: white;}"));

        horizontalLayout_3->addWidget(exitButton);

        horizontalSpacer_15 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_15);

        logo = new QLabel(TeachersPage);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setMinimumSize(QSize(150, 50));
        logo->setStyleSheet(QString::fromUtf8("image: url(:/res/img/title.png);"));

        horizontalLayout_3->addWidget(logo);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout_5);


        retranslateUi(TeachersPage);

        QMetaObject::connectSlotsByName(TeachersPage);
    } // setupUi

    void retranslateUi(QDialog *TeachersPage)
    {
        TeachersPage->setWindowTitle(QApplication::translate("TeachersPage", "Dialog", nullptr));
        label->setText(QApplication::translate("TeachersPage", "\320\222\320\247\320\230\320\242\320\225\320\233\320\254", nullptr));
        namesLabel->setText(QApplication::translate("TeachersPage", "\320\222\320\220\320\241\320\257 \320\237\320\225\320\242\320\240\320\236\320\222\320\230\320\247", nullptr));
        schoolLabel->setText(QApplication::translate("TeachersPage", "\320\241\320\227\320\236\320\250 \342\204\2265, \320\243\320\247\320\235\320\206\320\222: 5, \320\241\320\225\320\240\320\225\320\224\320\235\320\206\320\231 \320\221\320\220\320\233: 2/100", nullptr));
        levelsLabel->setText(QApplication::translate("TeachersPage", "\320\227\320\260\320\262\320\264\320\260\320\275\320\275\321\217 \320\264\320\273\321\217 \321\202\320\265\321\201\321\202\321\203\320\262\320\260\320\275\320\275\321\217 \321\203\321\207\320\275\321\226\320\262 \320\277\320\276\321\207\320\260\321\202\320\272\320\276\320\262\320\276\321\227 \321\210\320\272\320\276\320\273\320\270:", nullptr));
        SpacerFive->setText(QString());
        Grade1Button->setText(QApplication::translate("TeachersPage", "1 \320\232\320\233\320\220\320\241", nullptr));
        spacerOne->setText(QString());
        Grade2Button->setText(QApplication::translate("TeachersPage", "2 \320\232\320\233\320\220\320\241", nullptr));
        SpacerTwo->setText(QString());
        Grade3Button->setText(QApplication::translate("TeachersPage", "3 \320\232\320\233\320\220\320\241", nullptr));
        SpacerThree->setText(QString());
        Grade4Button->setText(QApplication::translate("TeachersPage", "4 \320\232\320\233\320\220\320\241", nullptr));
        SpacerSix->setText(QString());
        SpacerFour->setText(QString());
        statisticButton->setText(QApplication::translate("TeachersPage", "\320\237\320\265\321\200\320\265\320\263\320\273\321\217\320\275\321\203\321\202\320\270 \321\201\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\321\203 \321\203\321\207\320\275\321\226\320\262", nullptr));
        MINButton->setText(QApplication::translate("TeachersPage", "\320\234\321\226\320\275\321\226\321\201\321\202\320\265\321\200\321\201\321\202\320\262\320\276 \320\276\321\201\320\262\321\226\321\202\320\270 \321\226 \320\275\320\260\321\203\320\272\320\270 \320\243\320\272\321\200\320\260\321\227\320\275\320\270", nullptr));
        exitButton->setText(QString());
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TeachersPage: public Ui_TeachersPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERSPAGE_H
