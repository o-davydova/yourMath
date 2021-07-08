/********************************************************************************
** Form generated from reading UI file 'result.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_H
#define UI_RESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Result
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *infoLabel;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *homeButton;
    QPushButton *nextLevButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label;

    void setupUi(QDialog *Result)
    {
        if (Result->objectName().isEmpty())
            Result->setObjectName(QString::fromUtf8("Result"));
        Result->resize(1080, 720);
        Result->setStyleSheet(QString::fromUtf8("#Result{\n"
"background-color: rgb(203, 214, 218)\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(Result);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 200, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_2 = new QLabel(Result);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setStyleSheet(QString::fromUtf8("font: 25 50pt \"Yu Gothic UI Light\";\n"
"color: white;"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        infoLabel = new QLabel(Result);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setMinimumSize(QSize(800, 300));
        infoLabel->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 25 28pt \"Yu Gothic UI Light\";\n"
"color: rgb(45, 44, 44);\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"border: 2px;"));
        infoLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(infoLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        homeButton = new QPushButton(Result);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setMinimumSize(QSize(396, 50));
        homeButton->setStyleSheet(QString::fromUtf8("#homeButton{\n"
"background-color: rgb(250, 191, 35);\n"
"color: white;\n"
"font: 15pt \"Yu Gothic UI Semilight\";\n"
"border:0px;}\n"
"\n"
"#homeButton:hover{\n"
"background-color:rgb(74, 72, 73);\n"
"color:white;\n"
"font: 14pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout_2->addWidget(homeButton);

        nextLevButton = new QPushButton(Result);
        nextLevButton->setObjectName(QString::fromUtf8("nextLevButton"));
        nextLevButton->setMinimumSize(QSize(396, 50));
        nextLevButton->setStyleSheet(QString::fromUtf8("#nextLevButton{\n"
"background-color: rgb(250, 191, 35);\n"
"color: white;\n"
"font: 15pt \"Yu Gothic UI Semilight\";\n"
"border:0px;}\n"
"\n"
"#nextLevButton:hover{\n"
"background-color:rgb(74, 72, 73);\n"
"color:white;\n"
"font: 14pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout_2->addWidget(nextLevButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 200, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label = new QLabel(Result);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(200, 60));
        label->setStyleSheet(QString::fromUtf8("image: url(:/res/img/title.png);\n"
""));

        horizontalLayout_3->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Result);

        QMetaObject::connectSlotsByName(Result);
    } // setupUi

    void retranslateUi(QDialog *Result)
    {
        Result->setWindowTitle(QApplication::translate("Result", "Dialog", nullptr));
        label_2->setText(QApplication::translate("Result", "<html><head/><body><p align=\"center\">\320\240\321\226\320\262\320\265\320\275\321\214 \320\277\321\200\320\276\320\271\320\264\320\265\320\275\320\276!</p></body></html>", nullptr));
        infoLabel->setText(QString());
        homeButton->setText(QApplication::translate("Result", "\320\235\320\260 \320\263\320\276\320\273\320\276\320\262\320\275\321\203", nullptr));
        nextLevButton->setText(QApplication::translate("Result", "\320\235\320\260\321\201\321\202\321\203\320\277\320\275\320\270\320\271 \321\200\321\226\320\262\320\265\320\275\321\214", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Result: public Ui_Result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_H
