/********************************************************************************
** Form generated from reading UI file 'gradeerror.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADEERROR_H
#define UI_GRADEERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GradeError
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *logo;
    QSpacerItem *verticalSpacer;
    QLabel *infoLabel;
    QLabel *infoLabel_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *GradeError)
    {
        if (GradeError->objectName().isEmpty())
            GradeError->setObjectName(QString::fromUtf8("GradeError"));
        GradeError->resize(552, 309);
        GradeError->setStyleSheet(QString::fromUtf8("#GradeError\n"
"{\n"
"background-color: rgb(253, 253, 253);\n"
"font: 25 8pt \"Yu Gothic UI Light\";\n"
"}"));
        verticalLayout = new QVBoxLayout(GradeError);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        logo = new QLabel(GradeError);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setMinimumSize(QSize(150, 30));
        logo->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 253, 253);\n"
"image: url(:/res/img/titleS.png)"));

        horizontalLayout_2->addWidget(logo);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        infoLabel = new QLabel(GradeError);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 253, 253);\n"
"font: 25 25pt \"Yu Gothic UI Light\";"));
        infoLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(infoLabel);

        infoLabel_2 = new QLabel(GradeError);
        infoLabel_2->setObjectName(QString::fromUtf8("infoLabel_2"));
        infoLabel_2->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 253, 253);\n"
"font: 35 15pt \"Yu Gothic UI Light\";"));
        infoLabel_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(infoLabel_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(GradeError);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setMinimumSize(QSize(150, 0));
        closeButton->setStyleSheet(QString::fromUtf8("#closeButton {\n"
"background-color: #cbd6da;\n"
"color:rgb(43, 42, 42);\n"
"font: 28pt \"Yu Gothic UI Semilight\";\n"
"border: 0px;}\n"
"#closeButton:hover{\n"
"background-color: #20364d;\n"
"color: white;\n"
"font: 20pt \"Yu Gothic UI Semilight\";}"));

        horizontalLayout->addWidget(closeButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(GradeError);

        QMetaObject::connectSlotsByName(GradeError);
    } // setupUi

    void retranslateUi(QDialog *GradeError)
    {
        GradeError->setWindowTitle(QApplication::translate("GradeError", "Dialog", nullptr));
        logo->setText(QString());
        infoLabel->setText(QApplication::translate("GradeError", "\320\237\320\276\320\274\320\270\320\273\320\272\320\260 \320\262\320\270\320\261\320\276\321\200\321\203 \320\277\320\276\321\202\320\276\321\207\320\275\320\276\320\263\320\276 \321\200\321\226\320\262\320\275\321\217", nullptr));
        infoLabel_2->setText(QApplication::translate("GradeError", "\320\242\320\270 \320\274\320\276\320\266\320\265\321\210 \320\267\320\274\321\226\320\275\320\270\321\202\320\270 \321\201\320\262\321\226\320\271 \321\200\321\226\320\262\320\265\320\275\321\214 \320\275\320\260\321\202\320\270\321\201\320\275\321\203\320\262\321\210\320\270 \320\275\320\260 \n"
"\"\320\227\320\274\321\226\320\275\320\270\321\202\320\270 \321\226\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\216 \320\277\321\200\320\276 \321\201\320\265\320\261\320\265\"", nullptr));
        closeButton->setText(QApplication::translate("GradeError", "\320\236\320\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GradeError: public Ui_GradeError {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADEERROR_H
