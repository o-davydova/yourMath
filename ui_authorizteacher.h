/********************************************************************************
** Form generated from reading UI file 'authorizteacher.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZTEACHER_H
#define UI_AUTHORIZTEACHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AuthorizTeacher
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *infoLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *h_spacer_2;
    QPushButton *registrationButton;
    QLabel *h_spacer;
    QLabel *v_spacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *nameLabel;
    QLineEdit *passwordEdit;
    QLineEdit *numberEdit;
    QLabel *passwordLabel;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *readyButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;

    void setupUi(QDialog *AuthorizTeacher)
    {
        if (AuthorizTeacher->objectName().isEmpty())
            AuthorizTeacher->setObjectName(QString::fromUtf8("AuthorizTeacher"));
        AuthorizTeacher->resize(1166, 767);
        gridLayout = new QGridLayout(AuthorizTeacher);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        infoLabel = new QLabel(AuthorizTeacher);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setMinimumSize(QSize(500, 250));
        infoLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(infoLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        h_spacer_2 = new QLabel(AuthorizTeacher);
        h_spacer_2->setObjectName(QString::fromUtf8("h_spacer_2"));
        h_spacer_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(h_spacer_2);

        registrationButton = new QPushButton(AuthorizTeacher);
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

        h_spacer = new QLabel(AuthorizTeacher);
        h_spacer->setObjectName(QString::fromUtf8("h_spacer"));
        h_spacer->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(h_spacer);


        verticalLayout->addLayout(horizontalLayout);

        v_spacer = new QLabel(AuthorizTeacher);
        v_spacer->setObjectName(QString::fromUtf8("v_spacer"));
        v_spacer->setMinimumSize(QSize(0, 20));
        v_spacer->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(v_spacer);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(15);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 2, 3, 1, 1);

        nameLabel = new QLabel(AuthorizTeacher);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));
        nameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(nameLabel, 1, 1, 1, 1);

        passwordEdit = new QLineEdit(AuthorizTeacher);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        gridLayout_2->addWidget(passwordEdit, 2, 2, 1, 1);

        numberEdit = new QLineEdit(AuthorizTeacher);
        numberEdit->setObjectName(QString::fromUtf8("numberEdit"));
        numberEdit->setMinimumSize(QSize(300, 0));
        numberEdit->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        gridLayout_2->addWidget(numberEdit, 1, 2, 1, 1);

        passwordLabel = new QLabel(AuthorizTeacher);
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


        gridLayout->addLayout(gridLayout_2, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        gridLayout->addLayout(horizontalLayout_2, 4, 1, 1, 1);

        readyButton = new QPushButton(AuthorizTeacher);
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

        gridLayout->addWidget(readyButton, 3, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(AuthorizTeacher);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(200, 50));
        label->setStyleSheet(QString::fromUtf8("image: url(:/res/img/title.png);\n"
""));

        horizontalLayout_3->addWidget(label);


        gridLayout->addLayout(horizontalLayout_3, 6, 2, 1, 1);


        retranslateUi(AuthorizTeacher);

        QMetaObject::connectSlotsByName(AuthorizTeacher);
    } // setupUi

    void retranslateUi(QDialog *AuthorizTeacher)
    {
        AuthorizTeacher->setWindowTitle(QApplication::translate("AuthorizTeacher", "Dialog", nullptr));
        infoLabel->setText(QApplication::translate("AuthorizTeacher", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600; color:#4a4849;\">\320\227 \320\277\320\276\320\262\320\265\321\200\320\275\320\265\320\275\320\275\321\217\320\274!</span><span style=\" font-size:16pt;\"><br/>\320\224\320\273\321\217 \321\202\320\276\320\263\320\276, \321\211\320\276\320\261 \320\277\321\200\320\276\320\264\320\276\320\262\320\266\320\270\321\202\320\270, \320\222\320\260\320\274 \321\202\321\200\320\265\320\261\320\260 <br/>\321\203\320\262\321\226\320\271\321\202\320\270 \320\264\320\276 \321\201\320\262\320\276\320\263\320\276 \320\277\320\265\321\200\321\201\320\276\320\275\320\260\320\273\321\214\320\275\320\276\320\263\320\276 \320\272\320\260\320\261\321\226\320\275\320\265\321\202\321\203.<br/>\320\224\320\273\321\217 \321\206\321\214\320\276\320\263\320\276 \320\262\320\272\320\260\320\266\321\226\321\202\321\214 \321\201\320\262\320\276\321\227 \320\275\320\276\320\274\320\265\321\200 <br/>\321\202\320\265\320\273\320\265\321\204\320\276\320\275\321"
                        "\203 \321\202\320\260 \320\277\320\260\321\200\320\276\320\273\321\214.</span></p></body></html>", nullptr));
        h_spacer_2->setText(QString());
        registrationButton->setText(QApplication::translate("AuthorizTeacher", " \320\257 \321\211\320\265 \320\275\320\265 \320\267\320\260\321\200\320\265\321\224\321\201\321\202\321\200\320\276\320\262\320\260\320\275\320\270\320\271(-\320\260) ", nullptr));
        h_spacer->setText(QString());
        v_spacer->setText(QString());
        nameLabel->setText(QApplication::translate("AuthorizTeacher", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\321\203: ", nullptr));
        numberEdit->setText(QApplication::translate("AuthorizTeacher", "+380", nullptr));
        passwordLabel->setText(QApplication::translate("AuthorizTeacher", "\320\237\320\260\321\200\320\276\320\273\321\214: ", nullptr));
        readyButton->setText(QApplication::translate("AuthorizTeacher", "\320\223\320\236\320\242\320\236\320\222\320\236", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AuthorizTeacher: public Ui_AuthorizTeacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZTEACHER_H
