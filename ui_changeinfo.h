/********************************************************************************
** Form generated from reading UI file 'changeinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEINFO_H
#define UI_CHANGEINFO_H

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

class Ui_changeInfo
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLabel *name2Label;
    QLineEdit *nameEdit;
    QLineEdit *name2Edit;
    QHBoxLayout *horizontalLayout;
    QLabel *AgeLabel;
    QSpinBox *AgeEdit;
    QLabel *gradeLabel;
    QSpinBox *gradeEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *teacherLabel;
    QComboBox *teacherBox;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *passEdit;
    QLineEdit *newPassEdit;
    QLabel *infoLabel;
    QLabel *passLabel;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *numberLabel;
    QLineEdit *numberEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *readyButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *logo;

    void setupUi(QDialog *changeInfo)
    {
        if (changeInfo->objectName().isEmpty())
            changeInfo->setObjectName(QString::fromUtf8("changeInfo"));
        changeInfo->setEnabled(true);
        changeInfo->resize(953, 681);
        changeInfo->setStyleSheet(QString::fromUtf8("#changeInfo{background-color: #cbd6da;}"));
        gridLayout_2 = new QGridLayout(changeInfo);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetFixedSize);
        nameLabel = new QLabel(changeInfo);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        name2Label = new QLabel(changeInfo);
        name2Label->setObjectName(QString::fromUtf8("name2Label"));
        name2Label->setMaximumSize(QSize(16777215, 16777215));
        name2Label->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        formLayout->setWidget(0, QFormLayout::FieldRole, name2Label);

        nameEdit = new QLineEdit(changeInfo);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setMinimumSize(QSize(0, 0));
        nameEdit->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        formLayout->setWidget(2, QFormLayout::LabelRole, nameEdit);

        name2Edit = new QLineEdit(changeInfo);
        name2Edit->setObjectName(QString::fromUtf8("name2Edit"));
        name2Edit->setMinimumSize(QSize(0, 0));
        name2Edit->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        formLayout->setWidget(2, QFormLayout::FieldRole, name2Edit);


        gridLayout->addLayout(formLayout, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        AgeLabel = new QLabel(changeInfo);
        AgeLabel->setObjectName(QString::fromUtf8("AgeLabel"));
        AgeLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        horizontalLayout->addWidget(AgeLabel);

        AgeEdit = new QSpinBox(changeInfo);
        AgeEdit->setObjectName(QString::fromUtf8("AgeEdit"));
        AgeEdit->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));
        AgeEdit->setMinimum(5);
        AgeEdit->setMaximum(12);

        horizontalLayout->addWidget(AgeEdit);

        gradeLabel = new QLabel(changeInfo);
        gradeLabel->setObjectName(QString::fromUtf8("gradeLabel"));
        gradeLabel->setLayoutDirection(Qt::LeftToRight);
        gradeLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));
        gradeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(gradeLabel);

        gradeEdit = new QSpinBox(changeInfo);
        gradeEdit->setObjectName(QString::fromUtf8("gradeEdit"));
        gradeEdit->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));
        gradeEdit->setMinimum(1);
        gradeEdit->setMaximum(4);

        horizontalLayout->addWidget(gradeEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        teacherLabel = new QLabel(changeInfo);
        teacherLabel->setObjectName(QString::fromUtf8("teacherLabel"));
        teacherLabel->setMinimumSize(QSize(150, 0));
        teacherLabel->setMaximumSize(QSize(16777215, 16777215));
        teacherLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));
        teacherLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(teacherLabel);

        teacherBox = new QComboBox(changeInfo);
        teacherBox->setObjectName(QString::fromUtf8("teacherBox"));
        teacherBox->setMinimumSize(QSize(250, 0));
        teacherBox->setStyleSheet(QString::fromUtf8("#teacherBox{\n"
"	font: 15pt \"Yu Gothic UI Light\";\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"#teacherBox:hover{\n"
"	background-color: rgb(250, 191, 35);\n"
"}"));

        horizontalLayout_2->addWidget(teacherBox);


        horizontalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        passEdit = new QLineEdit(changeInfo);
        passEdit->setObjectName(QString::fromUtf8("passEdit"));
        passEdit->setEnabled(true);
        passEdit->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        verticalLayout_2->addWidget(passEdit);

        newPassEdit = new QLineEdit(changeInfo);
        newPassEdit->setObjectName(QString::fromUtf8("newPassEdit"));
        newPassEdit->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));
        newPassEdit->setInputMask(QString::fromUtf8(""));

        verticalLayout_2->addWidget(newPassEdit);


        gridLayout->addLayout(verticalLayout_2, 7, 1, 1, 1);

        infoLabel = new QLabel(changeInfo);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setStyleSheet(QString::fromUtf8("font:40pt \"Yu Gothic UI Light\";\n"
"color: rgb(255, 255, 255);"));
        infoLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(infoLabel, 0, 1, 1, 1);

        passLabel = new QLabel(changeInfo);
        passLabel->setObjectName(QString::fromUtf8("passLabel"));
        passLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";\n"
""));
        passLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(passLabel, 6, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 2, 1, 1);

        numberLabel = new QLabel(changeInfo);
        numberLabel->setObjectName(QString::fromUtf8("numberLabel"));
        numberLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        gridLayout->addWidget(numberLabel, 3, 1, 1, 1);

        numberEdit = new QLineEdit(changeInfo);
        numberEdit->setObjectName(QString::fromUtf8("numberEdit"));
        numberEdit->setStyleSheet(QString::fromUtf8("font: 15pt \"Yu Gothic UI Light\";"));

        gridLayout->addWidget(numberEdit, 4, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        readyButton = new QPushButton(changeInfo);
        readyButton->setObjectName(QString::fromUtf8("readyButton"));
        readyButton->setMinimumSize(QSize(300, 50));
        readyButton->setStyleSheet(QString::fromUtf8("#readyButton {\n"
"background-color:rgb(250, 191, 35);\n"
"color: rgb(45, 44, 44);\n"
"font: 20pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;}\n"
"\n"
"#readyButton:hover{\n"
"background-color: rgb(45, 44, 44);\n"
"color: white;\n"
"font:20pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout_3->addWidget(readyButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        logo = new QLabel(changeInfo);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setMinimumSize(QSize(150, 80));
        logo->setStyleSheet(QString::fromUtf8("image: url(:/res/img/title.png);\n"
""));

        horizontalLayout_4->addWidget(logo);


        gridLayout_2->addLayout(horizontalLayout_4, 4, 0, 1, 1);


        retranslateUi(changeInfo);

        QMetaObject::connectSlotsByName(changeInfo);
    } // setupUi

    void retranslateUi(QDialog *changeInfo)
    {
        changeInfo->setWindowTitle(QApplication::translate("changeInfo", "Dialog", nullptr));
        nameLabel->setText(QApplication::translate("changeInfo", "\320\206\320\274'\321\217", nullptr));
        name2Label->setText(QApplication::translate("changeInfo", "\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265", nullptr));
        AgeLabel->setText(QApplication::translate("changeInfo", "\320\222\321\226\320\272", nullptr));
        gradeLabel->setText(QApplication::translate("changeInfo", "\320\232\320\273\320\260\321\201", nullptr));
        teacherLabel->setText(QApplication::translate("changeInfo", "\320\222\321\207\320\270\321\202\320\265\320\273\321\214", nullptr));
        passEdit->setInputMask(QString());
        passEdit->setText(QString());
        passEdit->setPlaceholderText(QApplication::translate("changeInfo", "\320\241\321\202\320\260\321\200\320\270\320\271 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        newPassEdit->setText(QString());
        newPassEdit->setPlaceholderText(QApplication::translate("changeInfo", "\320\235\320\276\320\262\320\270\320\271 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        infoLabel->setText(QApplication::translate("changeInfo", "\320\227\320\234\320\206\320\235\320\220 \n"
"\320\236\320\241\320\236\320\221\320\230\320\241\320\242\320\230\320\245 \320\224\320\220\320\235\320\230\320\245", nullptr));
        passLabel->setText(QApplication::translate("changeInfo", "\320\227\320\234\320\206\320\235\320\220 \320\237\320\220\320\240\320\236\320\233\320\256", nullptr));
        numberLabel->setText(QApplication::translate("changeInfo", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\321\203:", nullptr));
        numberEdit->setText(QApplication::translate("changeInfo", "+380", nullptr));
        readyButton->setText(QApplication::translate("changeInfo", "\320\223\320\236\320\242\320\236\320\222\320\236", nullptr));
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class changeInfo: public Ui_changeInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEINFO_H
