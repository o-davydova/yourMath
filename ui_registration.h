/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Registration
{
public:
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout;
    QPushButton *autorizButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *h_spacer_11;
    QLabel *infoLabel;
    QLabel *h_spacer_8;
    QLabel *h_spacer_9;
    QLabel *h_spacer_6;
    QLabel *h_spacer5;
    QLabel *infoLabel2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *h_spacer_7;
    QLabel *h_spacer_10;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_5;
    QLabel *label;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLabel *name2Label;
    QLineEdit *nameEdit;
    QLineEdit *name2Edit;
    QVBoxLayout *verticalLayout;
    QLabel *numberLabel;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *numberEdit;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *ageLabel;
    QSpinBox *ageBox;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *gradeLabel;
    QSpinBox *gradeBox;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *teacherLabel;
    QComboBox *comboTeach;
    QVBoxLayout *verticalLayout_3;
    QLabel *passwordLabel;
    QLineEdit *passwordEdit;
    QPushButton *readyButton;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *Registration)
    {
        if (Registration->objectName().isEmpty())
            Registration->setObjectName(QString::fromUtf8("Registration"));
        Registration->resize(1080, 720);
        Registration->setStyleSheet(QString::fromUtf8("#Registration{background-color: #cbd6da;}"));
        horizontalLayout_6 = new QHBoxLayout(Registration);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        autorizButton = new QPushButton(Registration);
        autorizButton->setObjectName(QString::fromUtf8("autorizButton"));
        autorizButton->setMinimumSize(QSize(0, 40));
        autorizButton->setStyleSheet(QString::fromUtf8("#autorizButton {\n"
"\n"
"background-color:rgb(250, 191, 35);\n"
"color: rgb(45, 44, 44);\n"
"font: 10pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;}\n"
"\n"
"#autorizButton:hover{\n"
"background-color: rgb(45, 44, 44);\n"
"color: white;\n"
"font: 10pt \"Yu Gothic UI Semilight\";}"));

        gridLayout->addWidget(autorizButton, 11, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 18, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 2, 1, 1);

        h_spacer_11 = new QLabel(Registration);
        h_spacer_11->setObjectName(QString::fromUtf8("h_spacer_11"));
        h_spacer_11->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(h_spacer_11, 11, 2, 1, 1);

        infoLabel = new QLabel(Registration);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setMinimumSize(QSize(500, 0));
        infoLabel->setContextMenuPolicy(Qt::PreventContextMenu);
        infoLabel->setLayoutDirection(Qt::LeftToRight);
        infoLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(infoLabel, 10, 0, 1, 3);

        h_spacer_8 = new QLabel(Registration);
        h_spacer_8->setObjectName(QString::fromUtf8("h_spacer_8"));
        h_spacer_8->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(h_spacer_8, 13, 0, 1, 1);

        h_spacer_9 = new QLabel(Registration);
        h_spacer_9->setObjectName(QString::fromUtf8("h_spacer_9"));
        h_spacer_9->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(h_spacer_9, 13, 2, 1, 1);

        h_spacer_6 = new QLabel(Registration);
        h_spacer_6->setObjectName(QString::fromUtf8("h_spacer_6"));
        h_spacer_6->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(h_spacer_6, 6, 0, 1, 1);

        h_spacer5 = new QLabel(Registration);
        h_spacer5->setObjectName(QString::fromUtf8("h_spacer5"));
        h_spacer5->setMinimumSize(QSize(0, 100));
        h_spacer5->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(h_spacer5, 6, 1, 1, 1);

        infoLabel2 = new QLabel(Registration);
        infoLabel2->setObjectName(QString::fromUtf8("infoLabel2"));
        infoLabel2->setMinimumSize(QSize(0, 20));
        infoLabel2->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";\n"
"\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(infoLabel2, 13, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 3, 1, 1);

        h_spacer_7 = new QLabel(Registration);
        h_spacer_7->setObjectName(QString::fromUtf8("h_spacer_7"));
        h_spacer_7->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(h_spacer_7, 6, 2, 1, 1);

        h_spacer_10 = new QLabel(Registration);
        h_spacer_10->setObjectName(QString::fromUtf8("h_spacer_10"));
        h_spacer_10->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(h_spacer_10, 11, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 14, 1, 1, 1);

        label = new QLabel(Registration);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 50));
        label->setStyleSheet(QString::fromUtf8("image: url(:/res/img/title.png);\n"
""));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 18, 0, 1, 1);


        horizontalLayout_6->addLayout(gridLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 20, -1, 20);
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));

        verticalLayout_4->addLayout(horizontalLayout_7);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(5, -1, -1, -1);
        nameLabel = new QLabel(Registration);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        name2Label = new QLabel(Registration);
        name2Label->setObjectName(QString::fromUtf8("name2Label"));
        name2Label->setMinimumSize(QSize(300, 0));
        name2Label->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        formLayout->setWidget(0, QFormLayout::FieldRole, name2Label);

        nameEdit = new QLineEdit(Registration);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setMinimumSize(QSize(0, 0));
        nameEdit->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        formLayout->setWidget(1, QFormLayout::LabelRole, nameEdit);

        name2Edit = new QLineEdit(Registration);
        name2Edit->setObjectName(QString::fromUtf8("name2Edit"));
        name2Edit->setMinimumSize(QSize(0, 0));
        name2Edit->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        formLayout->setWidget(1, QFormLayout::FieldRole, name2Edit);


        verticalLayout_4->addLayout(formLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, -1, -1, -1);
        numberLabel = new QLabel(Registration);
        numberLabel->setObjectName(QString::fromUtf8("numberLabel"));
        numberLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        verticalLayout->addWidget(numberLabel);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(5, -1, -1, -1);
        numberEdit = new QLineEdit(Registration);
        numberEdit->setObjectName(QString::fromUtf8("numberEdit"));
        numberEdit->setMinimumSize(QSize(300, 0));
        numberEdit->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        horizontalLayout_8->addWidget(numberEdit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);


        verticalLayout_4->addLayout(horizontalLayout_8);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(5, -1, -1, -1);
        ageLabel = new QLabel(Registration);
        ageLabel->setObjectName(QString::fromUtf8("ageLabel"));
        ageLabel->setMinimumSize(QSize(325, 0));
        ageLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        horizontalLayout_5->addWidget(ageLabel);

        ageBox = new QSpinBox(Registration);
        ageBox->setObjectName(QString::fromUtf8("ageBox"));
        ageBox->setMinimumSize(QSize(70, 0));
        ageBox->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));
        ageBox->setMinimum(5);
        ageBox->setMaximum(12);
        ageBox->setSingleStep(1);

        horizontalLayout_5->addWidget(ageBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(5, -1, -1, -1);
        gradeLabel = new QLabel(Registration);
        gradeLabel->setObjectName(QString::fromUtf8("gradeLabel"));
        gradeLabel->setMinimumSize(QSize(325, 0));
        gradeLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        horizontalLayout_4->addWidget(gradeLabel);

        gradeBox = new QSpinBox(Registration);
        gradeBox->setObjectName(QString::fromUtf8("gradeBox"));
        gradeBox->setMinimumSize(QSize(70, 0));
        gradeBox->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));
        gradeBox->setMinimum(1);
        gradeBox->setMaximum(4);
        gradeBox->setSingleStep(1);

        horizontalLayout_4->addWidget(gradeBox);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, -1, -1, -1);
        teacherLabel = new QLabel(Registration);
        teacherLabel->setObjectName(QString::fromUtf8("teacherLabel"));
        teacherLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        horizontalLayout_3->addWidget(teacherLabel);


        verticalLayout_4->addLayout(horizontalLayout_3);

        comboTeach = new QComboBox(Registration);
        comboTeach->setObjectName(QString::fromUtf8("comboTeach"));
        comboTeach->setStyleSheet(QString::fromUtf8("#comboTeach{\n"
"	font: 15pt \"Yu Gothic UI Light\";\n"
"	background-color: rgb(255, 255, 255);\n"
"	selection-background-color: rgb(250, 191, 35);\n"
"}\n"
"#comboTeach:hover{\n"
"	background-color: rgb(250, 191, 35);\n"
"	selection-background-color: rgb(250, 191, 35);\n"
"}"));

        verticalLayout_4->addWidget(comboTeach);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, -1, -1, -1);
        passwordLabel = new QLabel(Registration);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));
        passwordLabel->setMargin(5);

        verticalLayout_3->addWidget(passwordLabel);

        passwordEdit = new QLineEdit(Registration);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";\n"
""));
        passwordEdit->setMaxLength(31919);

        verticalLayout_3->addWidget(passwordEdit);


        verticalLayout_4->addLayout(verticalLayout_3);

        readyButton = new QPushButton(Registration);
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

        verticalLayout_4->addWidget(readyButton);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_7);


        horizontalLayout_6->addLayout(verticalLayout_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        retranslateUi(Registration);

        QMetaObject::connectSlotsByName(Registration);
    } // setupUi

    void retranslateUi(QDialog *Registration)
    {
        Registration->setWindowTitle(QApplication::translate("Registration", "Dialog", nullptr));
        autorizButton->setText(QApplication::translate("Registration", " \320\257 \320\262\320\266\320\265 \321\200\320\265\321\224\321\201\321\202\321\200\321\203\320\262\320\260\320\262\321\201\321\217(-\320\273\320\260\321\201\321\214) ", nullptr));
        h_spacer_11->setText(QString());
        infoLabel->setText(QApplication::translate("Registration", "<html><head/><body><p align=\"center\">\320\224\320\273\321\217 \320\277\320\276\321\207\320\260\321\202\320\272\321\203 <br/>\321\202\320\276\320\261\321\226 \321\202\321\200\320\265\320\261\320\260 \320\267\320\260\321\200\320\265\321\224\321\201\321\202\321\200\321\203\320\262\320\260\321\202\320\270\321\201\321\217.<br/>\320\224\320\273\321\217 \321\206\321\214\320\276\320\263\320\276 \320\275\320\265\320\276\320\261\321\205\321\226\320\264\320\275\320\276 \320\264\320\260\321\202\320\270 <br/>\320\262\321\226\320\264\320\277\320\276\320\262\321\226\320\264\321\226 \320\275\320\260 \321\203\321\201\321\226 \320\267\320\260\320\277\320\270\321\202\320\260\320\275\320\275\321\217.</p><p align=\"center\"><span style=\" font-size:8pt;\"/></p></body></html>", nullptr));
        h_spacer_8->setText(QString());
        h_spacer_9->setText(QString());
        h_spacer_6->setText(QString());
        h_spacer5->setText(QString());
        infoLabel2->setText(QApplication::translate("Registration", "<html><head/><body><p><br/></p></body></html>", nullptr));
        h_spacer_7->setText(QString());
        h_spacer_10->setText(QString());
        label->setText(QString());
        nameLabel->setText(QApplication::translate("Registration", "\320\257\320\272 \321\202\320\265\320\261\320\265 \320\267\320\262\320\260\321\202\320\270?", nullptr));
        name2Label->setText(QApplication::translate("Registration", "\320\242\320\262\320\276\321\224 \320\277\321\200\321\226\320\267\320\262\320\270\321\211\320\265:", nullptr));
        numberLabel->setText(QApplication::translate("Registration", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\321\203 (\320\274\320\276\320\266\320\275\320\260 \320\274\320\260\320\274\320\270 \321\207\320\270 \321\202\320\260\321\202\320\260):", nullptr));
        numberEdit->setText(QApplication::translate("Registration", "+380", nullptr));
        ageLabel->setText(QApplication::translate("Registration", "\320\241\320\272\321\226\320\273\321\214\320\272\320\270 \321\202\320\276\320\261\321\226 \321\200\320\276\320\272\321\226\320\262?", nullptr));
        gradeLabel->setText(QApplication::translate("Registration", "\320\222 \321\217\320\272\320\276\320\274\321\203 \320\272\320\273\320\260\321\201\321\226 \321\202\320\270 \320\275\320\260\320\262\321\207\320\260\321\224\321\210\321\201\321\217?", nullptr));
        teacherLabel->setText(QApplication::translate("Registration", "\320\257\320\272 \320\267\320\262\320\260\321\202\320\270 \321\202\320\262\320\276\320\263\320\276 \320\262\321\207\320\270\321\202\320\265\320\273\321\217?", nullptr));
        passwordLabel->setText(QApplication::translate("Registration", "<html><head/><body><p>\320\222\320\270\320\263\320\260\320\264\320\260\320\271 \321\201\320\276\320\261\321\226 \320\277\320\260\321\200\320\276\320\273\321\214<span style=\" font-size:9pt;\"><br/></span><span style=\" font-size:10pt;\">(\320\262\321\226\320\275 \320\274\320\260\321\224 \320\274\321\226\321\201\321\202\320\270\321\202\320\270 8 \321\201\320\270\320\274\320\276\320\262\320\273\321\226\320\262)</span></p></body></html>", nullptr));
        readyButton->setText(QApplication::translate("Registration", "\320\223\320\236\320\242\320\236\320\222\320\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registration: public Ui_Registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
