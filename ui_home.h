/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QLabel *title;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QLabel *infoLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_2;
    QPushButton *changeInfo;
    QPushButton *showResults;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *grade_1;
    QPushButton *grade_2;
    QPushButton *grade_3;
    QPushButton *grade_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *infoLabel_2;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *exitButton;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label;

    void setupUi(QDialog *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QString::fromUtf8("Home"));
        Home->resize(1143, 849);
        Home->setStyleSheet(QString::fromUtf8("#Home{background-color: #cbd6da;}"));
        verticalLayout_3 = new QVBoxLayout(Home);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        title = new QLabel(Home);
        title->setObjectName(QString::fromUtf8("title"));
        title->setStyleSheet(QString::fromUtf8("font: 40pt \"Yu Gothic UI Light\";\n"
"color: white;"));

        horizontalLayout_6->addWidget(title);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        infoLabel = new QLabel(Home);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setMinimumSize(QSize(1105, 200));
        infoLabel->setStyleSheet(QString::fromUtf8("font:30pt \"Yu Gothic UI Light\";\n"
"color: white;\n"
"background-color: rgb(250, 191, 35);"));
        infoLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(infoLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        changeInfo = new QPushButton(Home);
        changeInfo->setObjectName(QString::fromUtf8("changeInfo"));
        changeInfo->setMinimumSize(QSize(480, 120));
        changeInfo->setStyleSheet(QString::fromUtf8("#changeInfo {\n"
"background-color: white;\n"
"color:rgb(43, 42, 42);\n"
"font: 15pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;}\n"
"#changeInfo:hover{\n"
"background-color: #20364d;\n"
"color: white;\n"
"font: 14pt \"Yu Gothic UI Semilight\";}"));

        verticalLayout_2->addWidget(changeInfo);

        showResults = new QPushButton(Home);
        showResults->setObjectName(QString::fromUtf8("showResults"));
        showResults->setMinimumSize(QSize(480, 120));
        showResults->setStyleSheet(QString::fromUtf8("#showResults {\n"
"background-color: white;\n"
"color:rgb(43, 42, 42);\n"
"font: 15pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;}\n"
"#showResults:hover{\n"
"background-color: #20364d;\n"
"color: white;\n"
"font: 14pt \"Yu Gothic UI Semilight\";}"));

        verticalLayout_2->addWidget(showResults);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(3);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        grade_1 = new QPushButton(Home);
        grade_1->setObjectName(QString::fromUtf8("grade_1"));
        grade_1->setMinimumSize(QSize(120, 120));
        grade_1->setStyleSheet(QString::fromUtf8("#grade_1 {\n"
"background-color: white;\n"
"color:rgb(43, 42, 42);\n"
"font: 15pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;}\n"
"#grade_1:hover{\n"
"background-color: #20364d;\n"
"color: white;\n"
"font: 14pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout_8->addWidget(grade_1);

        grade_2 = new QPushButton(Home);
        grade_2->setObjectName(QString::fromUtf8("grade_2"));
        grade_2->setMinimumSize(QSize(120, 120));
        grade_2->setStyleSheet(QString::fromUtf8("#grade_2 {\n"
"background-color: white;\n"
"color:rgb(43, 42, 42);\n"
"font: 15pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;}\n"
"#grade_2:hover{\n"
"background-color: #20364d;\n"
"color: white;\n"
"font: 14pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout_8->addWidget(grade_2);

        grade_3 = new QPushButton(Home);
        grade_3->setObjectName(QString::fromUtf8("grade_3"));
        grade_3->setMinimumSize(QSize(120, 120));
        grade_3->setStyleSheet(QString::fromUtf8("#grade_3 {\n"
"background-color: white;\n"
"color:rgb(43, 42, 42);\n"
"font: 15pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;}\n"
"#grade_3:hover{\n"
"background-color: #20364d;\n"
"color: white;\n"
"font: 14pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout_8->addWidget(grade_3);

        grade_4 = new QPushButton(Home);
        grade_4->setObjectName(QString::fromUtf8("grade_4"));
        grade_4->setMinimumSize(QSize(120, 120));
        grade_4->setStyleSheet(QString::fromUtf8("#grade_4 {\n"
"background-color: white;\n"
"color:rgb(43, 42, 42);\n"
"font: 15pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;}\n"
"#grade_4:hover{\n"
"background-color: #20364d;\n"
"color: white;\n"
"font: 14pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout_8->addWidget(grade_4);


        verticalLayout_2->addLayout(horizontalLayout_8);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(Home);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(60, 0));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label_3);

        label_2 = new QLabel(Home);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(250, 0));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/res/img/banana_1.png);\n"
"background-image: url(:/res/img/BGwhite.png);"));

        horizontalLayout_2->addWidget(label_2);

        infoLabel_2 = new QLabel(Home);
        infoLabel_2->setObjectName(QString::fromUtf8("infoLabel_2"));
        infoLabel_2->setMinimumSize(QSize(300, 360));
        infoLabel_2->setStyleSheet(QString::fromUtf8("font: 20pt \"Yu Gothic UI Light\";\n"
"color: rgb(45, 44, 44);\n"
"background-color: white;"));
        infoLabel_2->setAlignment(Qt::AlignCenter);
        infoLabel_2->setMargin(0);

        horizontalLayout_2->addWidget(infoLabel_2);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);

        exitButton = new QPushButton(Home);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setMinimumSize(QSize(270, 70));
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
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/img/closed.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/res/img/open.ico"), QSize(), QIcon::Active, QIcon::On);
        exitButton->setIcon(icon);
        exitButton->setIconSize(QSize(40, 40));
        exitButton->setCheckable(false);

        horizontalLayout_9->addWidget(exitButton);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label = new QLabel(Home);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(200, 60));
        label->setStyleSheet(QString::fromUtf8("image: url(:/res/img/title.png);"));
        label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_4->addWidget(label);


        verticalLayout_3->addLayout(horizontalLayout_4);


        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QDialog *Home)
    {
        Home->setWindowTitle(QApplication::translate("Home", "Dialog", nullptr));
        title->setText(QApplication::translate("Home", "<html><head/><body><p align=\"center\">\320\234\320\206\320\231 \320\232\320\233\320\220\320\241</p></body></html>", nullptr));
        infoLabel->setText(QString());
        changeInfo->setText(QApplication::translate("Home", "\320\227\320\274\321\226\320\275\320\270\321\202\320\270 \321\226\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\216 \320\277\321\200\320\276 \321\201\320\265\320\261\320\265", nullptr));
        showResults->setText(QApplication::translate("Home", "\320\237\320\265\321\200\320\265\320\263\320\273\321\217\320\275\321\203\321\202\320\270 \320\274\320\276\321\227 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\270", nullptr));
        grade_1->setText(QApplication::translate("Home", "1 \320\272\320\273\320\260\321\201", nullptr));
        grade_2->setText(QApplication::translate("Home", "2 \320\272\320\273\320\260\321\201", nullptr));
        grade_3->setText(QApplication::translate("Home", "3 \320\272\320\273\320\260\321\201", nullptr));
        grade_4->setText(QApplication::translate("Home", "4 \320\272\320\273\320\260\321\201", nullptr));
        label_3->setText(QString());
        label_2->setText(QString());
        infoLabel_2->setText(QApplication::translate("Home", "<html><head/><body><p align=\"center\">\320\242\320\262\321\226\320\271 \321\201\320\265\321\200\320\265\320\264\320\275\321\226\320\271 \320\261\320\260\320\273<br/> \321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214: <br/><span style=\" font-size:36pt;\">0 \320\261\320\260\320\273\321\226\320\262</span></p></body></html>", nullptr));
        exitButton->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
