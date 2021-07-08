/********************************************************************************
** Form generated from reading UI file 'regteacher.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGTEACHER_H
#define UI_REGTEACHER_H

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

class Ui_RegTeacher
{
public:
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_5;
    QLabel *h_spacer_10;
    QPushButton *autorizButton;
    QLabel *infoLabel2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *h_spacer_11;
    QLabel *infoLabel;
    QLabel *h_spacer_9;
    QLabel *h_spacer_6;
    QLabel *h_spacer5;
    QLabel *h_spacer_7;
    QSpacerItem *verticalSpacer_2;
    QLabel *h_spacer_8;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *verticalSpacer_6;
    QGridLayout *gridLayout_2;
    QLineEdit *name3Edit;
    QLabel *name3Label;
    QLabel *nameLabel;
    QLabel *name2Label;
    QLineEdit *name2Edit;
    QLineEdit *nameEdit;
    QVBoxLayout *verticalLayout;
    QLabel *numberLabel;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *numberEdit;
    QSpacerItem *horizontalSpacer_5;
    QLabel *school;
    QLineEdit *schoolEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *teacherLabel_2;
    QLineEdit *passwordEdit;
    QPushButton *readyButton;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *RegTeacher)
    {
        if (RegTeacher->objectName().isEmpty())
            RegTeacher->setObjectName(QString::fromUtf8("RegTeacher"));
        RegTeacher->resize(1397, 627);
        horizontalLayout = new QHBoxLayout(RegTeacher);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(46, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 17, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 13, 1, 1, 1);

        h_spacer_10 = new QLabel(RegTeacher);
        h_spacer_10->setObjectName(QString::fromUtf8("h_spacer_10"));
        h_spacer_10->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(h_spacer_10, 10, 0, 1, 1);

        autorizButton = new QPushButton(RegTeacher);
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

        gridLayout->addWidget(autorizButton, 10, 1, 1, 1);

        infoLabel2 = new QLabel(RegTeacher);
        infoLabel2->setObjectName(QString::fromUtf8("infoLabel2"));
        infoLabel2->setMinimumSize(QSize(0, 20));
        infoLabel2->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";\n"
"\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(infoLabel2, 12, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        h_spacer_11 = new QLabel(RegTeacher);
        h_spacer_11->setObjectName(QString::fromUtf8("h_spacer_11"));
        h_spacer_11->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(h_spacer_11, 10, 2, 1, 1);

        infoLabel = new QLabel(RegTeacher);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setMinimumSize(QSize(500, 0));
        infoLabel->setContextMenuPolicy(Qt::PreventContextMenu);
        infoLabel->setLayoutDirection(Qt::LeftToRight);
        infoLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(infoLabel, 9, 0, 1, 3);

        h_spacer_9 = new QLabel(RegTeacher);
        h_spacer_9->setObjectName(QString::fromUtf8("h_spacer_9"));
        h_spacer_9->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(h_spacer_9, 12, 2, 1, 1);

        h_spacer_6 = new QLabel(RegTeacher);
        h_spacer_6->setObjectName(QString::fromUtf8("h_spacer_6"));
        h_spacer_6->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(h_spacer_6, 5, 0, 1, 1);

        h_spacer5 = new QLabel(RegTeacher);
        h_spacer5->setObjectName(QString::fromUtf8("h_spacer5"));
        h_spacer5->setMinimumSize(QSize(0, 100));
        h_spacer5->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(h_spacer5, 5, 1, 1, 1);

        h_spacer_7 = new QLabel(RegTeacher);
        h_spacer_7->setObjectName(QString::fromUtf8("h_spacer_7"));
        h_spacer_7->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(h_spacer_7, 5, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 2, 1, 1);

        h_spacer_8 = new QLabel(RegTeacher);
        h_spacer_8->setObjectName(QString::fromUtf8("h_spacer_8"));
        h_spacer_8->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(h_spacer_8, 12, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 20, -1, 20);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout_7);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(5, -1, -1, -1);
        name3Edit = new QLineEdit(RegTeacher);
        name3Edit->setObjectName(QString::fromUtf8("name3Edit"));
        name3Edit->setMinimumSize(QSize(0, 50));
        name3Edit->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";\n"
""));

        gridLayout_2->addWidget(name3Edit, 1, 2, 1, 1);

        name3Label = new QLabel(RegTeacher);
        name3Label->setObjectName(QString::fromUtf8("name3Label"));
        name3Label->setMinimumSize(QSize(250, 0));
        name3Label->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";\n"
""));

        gridLayout_2->addWidget(name3Label, 0, 2, 1, 1);

        nameLabel = new QLabel(RegTeacher);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        gridLayout_2->addWidget(nameLabel, 0, 1, 1, 1);

        name2Label = new QLabel(RegTeacher);
        name2Label->setObjectName(QString::fromUtf8("name2Label"));
        name2Label->setMinimumSize(QSize(200, 0));
        name2Label->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        gridLayout_2->addWidget(name2Label, 0, 0, 1, 1);

        name2Edit = new QLineEdit(RegTeacher);
        name2Edit->setObjectName(QString::fromUtf8("name2Edit"));
        name2Edit->setMinimumSize(QSize(250, 50));
        name2Edit->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        gridLayout_2->addWidget(name2Edit, 1, 0, 1, 1);

        nameEdit = new QLineEdit(RegTeacher);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setMinimumSize(QSize(0, 50));
        nameEdit->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        gridLayout_2->addWidget(nameEdit, 1, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, -1, -1, -1);
        numberLabel = new QLabel(RegTeacher);
        numberLabel->setObjectName(QString::fromUtf8("numberLabel"));
        numberLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        verticalLayout->addWidget(numberLabel);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(5, -1, -1, -1);
        numberEdit = new QLineEdit(RegTeacher);
        numberEdit->setObjectName(QString::fromUtf8("numberEdit"));
        numberEdit->setMinimumSize(QSize(300, 0));
        numberEdit->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        horizontalLayout_8->addWidget(numberEdit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);


        verticalLayout_4->addLayout(horizontalLayout_8);

        school = new QLabel(RegTeacher);
        school->setObjectName(QString::fromUtf8("school"));
        school->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        verticalLayout_4->addWidget(school);

        schoolEdit = new QLineEdit(RegTeacher);
        schoolEdit->setObjectName(QString::fromUtf8("schoolEdit"));
        schoolEdit->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        verticalLayout_4->addWidget(schoolEdit);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, -1, -1, -1);
        teacherLabel_2 = new QLabel(RegTeacher);
        teacherLabel_2->setObjectName(QString::fromUtf8("teacherLabel_2"));
        teacherLabel_2->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));
        teacherLabel_2->setMargin(5);

        verticalLayout_3->addWidget(teacherLabel_2);

        passwordEdit = new QLineEdit(RegTeacher);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";\n"
""));

        verticalLayout_3->addWidget(passwordEdit);


        verticalLayout_4->addLayout(verticalLayout_3);

        readyButton = new QPushButton(RegTeacher);
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

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 1, 1);

        label = new QLabel(RegTeacher);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(150, 50));
        label->setStyleSheet(QString::fromUtf8("image: url(:/res/img/title.png);\n"
""));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label, 1, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_7, 0, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_3);


        horizontalLayout->addLayout(verticalLayout_4);

        horizontalSpacer_3 = new QSpacerItem(45, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        retranslateUi(RegTeacher);

        QMetaObject::connectSlotsByName(RegTeacher);
    } // setupUi

    void retranslateUi(QDialog *RegTeacher)
    {
        RegTeacher->setWindowTitle(QApplication::translate("RegTeacher", "Dialog", nullptr));
        h_spacer_10->setText(QString());
        autorizButton->setText(QApplication::translate("RegTeacher", "  \320\222\320\266\320\265 \321\200\320\265\321\224\321\201\321\202\321\200\321\203\320\262\320\260\320\262\321\201\321\217(-\320\273\320\260\321\201\321\214)  ", nullptr));
        infoLabel2->setText(QApplication::translate("RegTeacher", "<html><head/><body><p><br/></p></body></html>", nullptr));
        h_spacer_11->setText(QString());
        infoLabel->setText(QApplication::translate("RegTeacher", "<html><head/><body><p align=\"center\">\320\224\320\273\321\217 \320\277\320\276\321\207\320\260\321\202\320\272\321\203 <br/>\321\202\321\200\320\265\320\261\320\260 \320\267\320\260\321\200\320\265\321\224\321\201\321\202\321\200\321\203\320\262\320\260\321\202\320\270\321\201\321\217.<br/>\320\224\320\273\321\217 \321\206\321\214\320\276\320\263\320\276 \320\275\320\265\320\276\320\261\321\205\321\226\320\264\320\275\320\276 \320\264\320\260\321\202\320\270 <br/>\320\262\321\226\320\264\320\277\320\276\320\262\321\226\320\264\321\226 \320\275\320\260 \321\203\321\201\321\226 \320\267\320\260\320\277\320\270\321\202\320\260\320\275\320\275\321\217.</p><p><br/></p></body></html>", nullptr));
        h_spacer_9->setText(QString());
        h_spacer_6->setText(QString());
        h_spacer5->setText(QString());
        h_spacer_7->setText(QString());
        h_spacer_8->setText(QString());
        name3Label->setText(QApplication::translate("RegTeacher", "\320\237\320\276-\320\261\320\260\321\202\321\214\320\272\320\276\320\262\321\226", nullptr));
        nameLabel->setText(QApplication::translate("RegTeacher", "\320\206\320\274'\321\217", nullptr));
        name2Label->setText(QApplication::translate("RegTeacher", "\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265", nullptr));
        numberLabel->setText(QApplication::translate("RegTeacher", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\321\203:", nullptr));
        numberEdit->setText(QApplication::translate("RegTeacher", "+380", nullptr));
        school->setText(QApplication::translate("RegTeacher", "\320\250\320\272\320\276\320\273\320\260:", nullptr));
        teacherLabel_2->setText(QApplication::translate("RegTeacher", "<html><head/><body><p>\320\237\320\260\321\200\320\276\320\273\321\214<span style=\" font-size:9pt;\"><br/></span><span style=\" font-size:10pt;\">(\320\262\321\226\320\275 \320\274\320\260\321\224 \320\274\321\226\321\201\321\202\320\270\321\202\320\270 8 \321\201\320\270\320\274\320\276\320\262\320\273\321\226\320\262)</span></p></body></html>", nullptr));
        readyButton->setText(QApplication::translate("RegTeacher", "\320\223\320\236\320\242\320\236\320\222\320\236", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RegTeacher: public Ui_RegTeacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGTEACHER_H
