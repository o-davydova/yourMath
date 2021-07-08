/********************************************************************************
** Form generated from reading UI file 'authorization.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATION_H
#define UI_AUTHORIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Authorization
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QLabel *infoLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *h_spacer_2;
    QPushButton *registrationButton;
    QLabel *h_spacer;
    QLabel *v_spacer;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *nameLabel;
    QLineEdit *passwordEdit;
    QLineEdit *numberEdit;
    QLabel *passwordLabel;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QPushButton *readyButton;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label;

    void setupUi(QDialog *Authorization)
    {
        if (Authorization->objectName().isEmpty())
            Authorization->setObjectName(QString::fromUtf8("Authorization"));
        Authorization->resize(1080, 720);
        Authorization->setStyleSheet(QString::fromUtf8("#Authorization{background-color: #cbd6da;}"));
        gridLayout = new QGridLayout(Authorization);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        infoLabel = new QLabel(Authorization);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setMinimumSize(QSize(500, 250));
        infoLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(infoLabel, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        h_spacer_2 = new QLabel(Authorization);
        h_spacer_2->setObjectName(QString::fromUtf8("h_spacer_2"));
        h_spacer_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(h_spacer_2);

        registrationButton = new QPushButton(Authorization);
        registrationButton->setObjectName(QString::fromUtf8("registrationButton"));
        registrationButton->setMinimumSize(QSize(0, 40));
        registrationButton->setStyleSheet(QString::fromUtf8("#registrationButton {\n"
"\n"
"background-color:rgb(250, 191, 35);\n"
"color: rgb(45, 44, 44);\n"
"font: 10pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;}\n"
"\n"
"#registrationButton:hover{\n"
"background-color: rgb(45, 44, 44);\n"
"color: white;\n"
"font: 10pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout->addWidget(registrationButton);

        h_spacer = new QLabel(Authorization);
        h_spacer->setObjectName(QString::fromUtf8("h_spacer"));
        h_spacer->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(h_spacer);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        v_spacer = new QLabel(Authorization);
        v_spacer->setObjectName(QString::fromUtf8("v_spacer"));
        v_spacer->setMinimumSize(QSize(0, 20));
        v_spacer->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(v_spacer, 3, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 4, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(15);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 2, 3, 1, 1);

        nameLabel = new QLabel(Authorization);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));
        nameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(nameLabel, 1, 1, 1, 1);

        passwordEdit = new QLineEdit(Authorization);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        gridLayout_2->addWidget(passwordEdit, 2, 2, 1, 1);

        numberEdit = new QLineEdit(Authorization);
        numberEdit->setObjectName(QString::fromUtf8("numberEdit"));
        numberEdit->setMinimumSize(QSize(300, 0));
        numberEdit->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        gridLayout_2->addWidget(numberEdit, 1, 2, 1, 1);

        passwordLabel = new QLabel(Authorization);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));
        passwordLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(passwordLabel, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 2, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 5, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 1, 1, 1);

        readyButton = new QPushButton(Authorization);
        readyButton->setObjectName(QString::fromUtf8("readyButton"));
        readyButton->setStyleSheet(QString::fromUtf8("#readyButton {\n"
"background-color: rgb(45, 44, 44);\n"
"color: white;\n"
"font: 18pt \"Yu Gothic UI Semilight\";}\n"
"\n"
"#readyButton:hover{\n"
"background-color:rgb(250, 191, 35);\n"
"color: rgb(45, 44, 44);\n"
"font: 18pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;}"));

        gridLayout->addWidget(readyButton, 7, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 9, 0, 1, 1);

        label = new QLabel(Authorization);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(200, 50));
        label->setStyleSheet(QString::fromUtf8("image: url(:/res/img/title.png);\n"
""));

        gridLayout->addWidget(label, 7, 2, 1, 1);


        retranslateUi(Authorization);

        QMetaObject::connectSlotsByName(Authorization);
    } // setupUi

    void retranslateUi(QDialog *Authorization)
    {
        Authorization->setWindowTitle(QApplication::translate("Authorization", "Dialog", nullptr));
        infoLabel->setText(QApplication::translate("Authorization", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600; color:#4a4849;\">\320\227 \320\277\320\276\320\262\320\265\321\200\320\275\320\265\320\275\320\275\321\217\320\274!</span><span style=\" font-size:16pt;\"><br/>\320\224\320\273\321\217 \321\202\320\276\320\263\320\276, \321\211\320\276\320\261 \320\277\321\200\320\276\320\264\320\276\320\262\320\266\320\270\321\202\320\270 <br/>\320\262\320\270\320\262\321\207\320\265\320\275\320\275\321\217 </span><span style=\" font-size:16pt; font-style:italic;\">\320\274\320\260\321\202\320\265\320\274\320\260\321\202\320\270\320\272\320\270</span><span style=\" font-size:16pt;\">, \321\202\320\276\320\261\321\226 \321\202\321\200\320\265\320\261\320\260 <br/>\321\203\320\262\321\226\320\271\321\202\320\270 \320\264\320\276 \321\201\320\262\320\276\320\263\320\276 \320\272\320\273\320\260\321\201\321\201\321\203.<br/>\320\224\320\273\321\217 \321\206\321\214\320\276\320\263\320\276 \320\262\320\272\320\260\320\266\320\270 \321\201\320\262"
                        "\320\276\321\227 \320\275\320\276\320\274\320\265\321\200 <br/>\321\202\320\265\320\273\320\265\321\204\320\276\320\275\321\203 \321\202\320\260 \320\277\320\260\321\200\320\276\320\273\321\214.</span></p></body></html>", nullptr));
        h_spacer_2->setText(QString());
        registrationButton->setText(QApplication::translate("Authorization", " \320\257 \321\211\320\265 \320\275\320\265 \320\267\320\260\321\200\320\265\321\224\321\201\321\202\321\200\320\276\320\262\320\260\320\275\320\270\320\271(-\320\260) ", nullptr));
        h_spacer->setText(QString());
        v_spacer->setText(QString());
        nameLabel->setText(QApplication::translate("Authorization", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\321\203: ", nullptr));
        numberEdit->setText(QApplication::translate("Authorization", "+380", nullptr));
        passwordLabel->setText(QApplication::translate("Authorization", "\320\237\320\260\321\200\320\276\320\273\321\214: ", nullptr));
        readyButton->setText(QApplication::translate("Authorization", "\320\223\320\236\320\242\320\236\320\222\320\236", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Authorization: public Ui_Authorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATION_H
