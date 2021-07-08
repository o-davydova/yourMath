/********************************************************************************
** Form generated from reading UI file 'statistic.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTIC_H
#define UI_STATISTIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Statistic
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *title;
    QLabel *nameLabel;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *image;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView;
    QLabel *averageLabel;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *homeButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *logo;

    void setupUi(QDialog *Statistic)
    {
        if (Statistic->objectName().isEmpty())
            Statistic->setObjectName(QString::fromUtf8("Statistic"));
        Statistic->resize(1213, 785);
        Statistic->setStyleSheet(QString::fromUtf8("#Statistic{background-color: #cbd6da;}"));
        verticalLayout = new QVBoxLayout(Statistic);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        title = new QLabel(Statistic);
        title->setObjectName(QString::fromUtf8("title"));
        title->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 191, 35);\n"
"color: rgb(255, 255, 255);\n"
"font: 63 45pt \"Yu Gothic UI Light\";"));
        title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(title);

        nameLabel = new QLabel(Statistic);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setStyleSheet(QString::fromUtf8("font: 63 26pt  \"Yu Gothic UI Light\";\n"
"color: rgb(255, 255, 255);"));
        nameLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(nameLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        image = new QLabel(Statistic);
        image->setObjectName(QString::fromUtf8("image"));
        image->setMinimumSize(QSize(450, 0));
        image->setStyleSheet(QString::fromUtf8("#image{\n"
"image: url(:/res/img/potato.png);\n"
"}\n"
"#image:hover{\n"
"image: url(:/res/img/potato_2.png);\n"
"}"));

        horizontalLayout_2->addWidget(image);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tableView = new QTableView(Statistic);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setMinimumSize(QSize(450, 0));
        tableView->setLayoutDirection(Qt::LeftToRight);
        tableView->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"color: rgb(45, 44, 44);\n"
"font: 25 26pt \"Yu Gothic UI Light\";\n"
"selection-background-color: rgb(250, 191, 35);"));
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->setTextElideMode(Qt::ElideMiddle);
        tableView->setShowGrid(false);
        tableView->horizontalHeader()->setVisible(true);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setMinimumSectionSize(0);
        tableView->verticalHeader()->setDefaultSectionSize(0);

        verticalLayout_2->addWidget(tableView);

        averageLabel = new QLabel(Statistic);
        averageLabel->setObjectName(QString::fromUtf8("averageLabel"));
        averageLabel->setStyleSheet(QString::fromUtf8("font: 63 26pt  \"Yu Gothic UI Light\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(45, 44, 44);"));

        verticalLayout_2->addWidget(averageLabel);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        homeButton = new QPushButton(Statistic);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setMinimumSize(QSize(350, 0));
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

        logo = new QLabel(Statistic);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setMinimumSize(QSize(150, 47));
        logo->setStyleSheet(QString::fromUtf8("image: url(:/res/img/title.png);"));

        horizontalLayout->addWidget(logo);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Statistic);

        QMetaObject::connectSlotsByName(Statistic);
    } // setupUi

    void retranslateUi(QDialog *Statistic)
    {
        Statistic->setWindowTitle(QApplication::translate("Statistic", "Dialog", nullptr));
        title->setText(QApplication::translate("Statistic", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\270 \320\277\321\200\320\276\321\205\320\276\320\264\320\266\320\265\320\275\320\275\321\217 \321\200\321\226\320\262\320\275\321\226\320\262", nullptr));
        nameLabel->setText(QApplication::translate("Statistic", "\320\224\320\260\320\262\320\270\320\264\320\276\320\262\320\260 \320\232\320\236\320\232\320\236", nullptr));
        image->setText(QString());
        averageLabel->setText(QString());
        homeButton->setText(QApplication::translate("Statistic", "\320\237\320\236\320\222\320\225\320\240\320\235\320\243\320\242\320\230\320\241\320\257 \320\222 \320\234\320\206\320\231 \320\232\320\233\320\220\320\241", nullptr));
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Statistic: public Ui_Statistic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTIC_H
