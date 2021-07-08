/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
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
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *HelloLabel;
    QHBoxLayout *horizontalLayout_6;
    QLabel *h_spacer3;
    QPushButton *yesButton;
    QLabel *h_spacer4;
    QPushButton *noButton;
    QLabel *h_spacer5;
    QLabel *v_spacer1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *h_spacer1;
    QCheckBox *stopAsk;
    QLabel *h_spacer;
    QLabel *title;
    QLabel *h_spacer2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *teacherButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1080, 720);
        MainWindow->setMinimumSize(QSize(30, 30));
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow{\n"
"background-color:#cbd6da;}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        HelloLabel = new QLabel(centralwidget);
        HelloLabel->setObjectName(QString::fromUtf8("HelloLabel"));
        HelloLabel->setMinimumSize(QSize(350, 0));
        HelloLabel->setMaximumSize(QSize(16777193, 16777215));
        HelloLabel->setContextMenuPolicy(Qt::PreventContextMenu);
        HelloLabel->setLayoutDirection(Qt::LeftToRight);
        HelloLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 253, 253);\n"
"font: 25 8pt \"Yu Gothic UI Light\";"));

        horizontalLayout_5->addWidget(HelloLabel);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        h_spacer3 = new QLabel(centralwidget);
        h_spacer3->setObjectName(QString::fromUtf8("h_spacer3"));
        h_spacer3->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 253, 253);\n"
""));

        horizontalLayout_6->addWidget(h_spacer3);

        yesButton = new QPushButton(centralwidget);
        yesButton->setObjectName(QString::fromUtf8("yesButton"));
        yesButton->setMinimumSize(QSize(250, 0));
        yesButton->setStyleSheet(QString::fromUtf8("#yesButton {\n"
"background-color: #cbd6da;\n"
"color:rgb(43, 42, 42);\n"
"font: 38pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;}\n"
"#yesButton:hover{\n"
"background-color: #20364d;\n"
"color: white;\n"
"font: 28pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout_6->addWidget(yesButton);

        h_spacer4 = new QLabel(centralwidget);
        h_spacer4->setObjectName(QString::fromUtf8("h_spacer4"));
        h_spacer4->setMinimumSize(QSize(7, 0));
        h_spacer4->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 253, 253);"));

        horizontalLayout_6->addWidget(h_spacer4);

        noButton = new QPushButton(centralwidget);
        noButton->setObjectName(QString::fromUtf8("noButton"));
        noButton->setMinimumSize(QSize(250, 0));
        noButton->setStyleSheet(QString::fromUtf8("#noButton {\n"
"background-color: #cbd6da;\n"
"color:rgb(43, 42, 42);\n"
"font: 38pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;}\n"
"#noButton:hover{\n"
"background-color: #20364d;\n"
"color: white;\n"
"font: 28pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout_6->addWidget(noButton);

        h_spacer5 = new QLabel(centralwidget);
        h_spacer5->setObjectName(QString::fromUtf8("h_spacer5"));
        h_spacer5->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 253, 253);"));

        horizontalLayout_6->addWidget(h_spacer5);


        verticalLayout->addLayout(horizontalLayout_6);

        v_spacer1 = new QLabel(centralwidget);
        v_spacer1->setObjectName(QString::fromUtf8("v_spacer1"));
        v_spacer1->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 253, 253);"));

        verticalLayout->addWidget(v_spacer1);


        verticalLayout_8->addLayout(verticalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        h_spacer1 = new QLabel(centralwidget);
        h_spacer1->setObjectName(QString::fromUtf8("h_spacer1"));
        h_spacer1->setMinimumSize(QSize(20, 0));
        h_spacer1->setMaximumSize(QSize(20, 16777215));
        h_spacer1->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 253, 253);"));

        horizontalLayout_7->addWidget(h_spacer1);

        stopAsk = new QCheckBox(centralwidget);
        stopAsk->setObjectName(QString::fromUtf8("stopAsk"));
        stopAsk->setMinimumSize(QSize(0, 50));
        stopAsk->setLayoutDirection(Qt::LeftToRight);
        stopAsk->setAutoFillBackground(false);
        stopAsk->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 253, 253);\n"
"font: 25 10pt \"Yu Gothic UI Light\";\n"
"color: black;"));
        stopAsk->setIconSize(QSize(20, 20));
        stopAsk->setChecked(false);
        stopAsk->setTristate(false);

        horizontalLayout_7->addWidget(stopAsk);

        h_spacer = new QLabel(centralwidget);
        h_spacer->setObjectName(QString::fromUtf8("h_spacer"));
        h_spacer->setMinimumSize(QSize(280, 0));
        h_spacer->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 253, 253);"));

        horizontalLayout_7->addWidget(h_spacer);

        title = new QLabel(centralwidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setMinimumSize(QSize(150, 0));
        title->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 253, 253);\n"
"image: url(:/res/img/titleS.png)"));

        horizontalLayout_7->addWidget(title);

        h_spacer2 = new QLabel(centralwidget);
        h_spacer2->setObjectName(QString::fromUtf8("h_spacer2"));
        h_spacer2->setMinimumSize(QSize(20, 0));
        h_spacer2->setMaximumSize(QSize(20, 16777215));
        h_spacer2->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 253, 253);"));

        horizontalLayout_7->addWidget(h_spacer2);


        verticalLayout_8->addLayout(horizontalLayout_7);


        gridLayout_2->addLayout(verticalLayout_8, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        teacherButton = new QPushButton(centralwidget);
        teacherButton->setObjectName(QString::fromUtf8("teacherButton"));
        teacherButton->setStyleSheet(QString::fromUtf8("#teacherButton {\n"
"background-color: rgb(250, 191, 35);\n"
"color: rgb(45, 44, 44);\n"
"font: 10pt \"Yu Gothic UI Semilight\";\n"
"border: 10px solid;\n"
"border-color: rgb(250, 191, 35);\n"
"padding-top:5px;}\n"
"#teacherButton:hover{\n"
"background-color: white;\n"
"color:rgb(43, 42, 42);\n"
"font: 10pt \"Yu Gothic UI Semilight\";\n"
"border: 10px solid;\n"
"border-color: white;}"));

        gridLayout_2->addWidget(teacherButton, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        teacherButton->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        HelloLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p><p align=\"center\"><span style=\" font-size:28pt;\">\320\237\321\200\320\270\320\262\321\226\321\202, \321\202\320\270 \321\202\321\203\321\202 \320\262\320\277\320\265\321\200\321\210\320\265?</span></p><p align=\"center\"><br/></p></body></html>", nullptr));
        h_spacer3->setText(QString());
        yesButton->setText(QApplication::translate("MainWindow", "\320\242\320\220\320\232", nullptr));
        h_spacer4->setText(QString());
        noButton->setText(QApplication::translate("MainWindow", "\320\235\320\206", nullptr));
        h_spacer5->setText(QString());
        v_spacer1->setText(QString());
        h_spacer1->setText(QString());
        stopAsk->setText(QApplication::translate("MainWindow", "\320\221\321\226\320\273\321\214\321\210\320\265 \320\275\320\265 \320\267\320\260\320\277\320\270\321\202\321\203\320\262\320\260\321\202\320\270", nullptr));
        h_spacer->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        title->setText(QString());
        h_spacer2->setText(QString());
        teacherButton->setText(QApplication::translate("MainWindow", "\320\224\320\233\320\257 \320\222\320\247\320\230\320\242\320\225\320\233\320\206\320\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
