#include "levels.h"
#include "ui_levels.h"
#include <QGraphicsDropShadowEffect>
#include "QMessageBox"
#include "QDesktopServices"
#include "QUrl"
#include "QFile"

#include "home.h"
#include "g1_l1.h"
#include "g2_l1.h"
#include "g3_l1.h"
#include "dpa.h"

#include "teacherspage.h"

Levels::Levels(QWidget *parent, QString uid, QString ugrade, bool uteacher) :
    QDialog(parent),
    ui(new Ui::Levels)
{
    ui->setupUi(this);
    ID = uid;
    grade = ugrade;
    teacher = uteacher;

    ui->title->setText(grade+" КЛАС");
    if (grade == '4')
    {
        ui->DPA->show();
    }
    else {
        ui->DPA->hide();
    }
    // -------------------------------------------------------- LOGO & ICON -------------------------//
            this->setWindowTitle("GRADE " + grade);
            QIcon winIcon(":/res/img/mainYellowLogo.ico");
            this->setWindowIcon(winIcon);
    // -------------------------------------------------------- LOGO & ICON -------------------------//

    // -------------------------------------------------------- SHADOW ------------------------------//
            QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect(this);
            effect->setBlurRadius(0);
            effect->setColor(QColor("rgb(45, 44, 44)"));
            effect->setOffset(4,2);
            ui->title->setGraphicsEffect(effect);
    // -------------------------------------------------------- SHADOW ------------------------------//
}

Levels::~Levels()
{
    delete ui;
}

void Levels::on_homeButton_clicked()
{
    if (teacher == true){
        TeachersPage teachersWin(nullptr, ID);
        this->close();
        teachersWin.exec();
    } else {
    Home homeWin(nullptr, ID);
    this->close();
    homeWin.exec();
    }
}

void Levels::on_Lev_1_clicked()
{
    if (grade == '1')
    {
        if (teacher == true){
            QString file = ":/res/1.pdf";
            QDesktopServices::openUrl(QUrl::fromLocalFile(file));
        } else {
        G1_L1 g1_l1(nullptr, ID);
        this->close();
        g1_l1.exec();
        }
    }
    else if (grade == '2')
    {
        if (teacher == true){
            QString file = ":/res/2.pdf";
            QDesktopServices::openUrl(QUrl::fromLocalFile(file));
        } else {
        g2_l1 g2_l1(nullptr, ID);
        this->close();
        g2_l1.exec();
        }
    }
    else if (grade == '3')
    {
        if (teacher == true){
            QString file = ":/res/3.pdf";
            QDesktopServices::openUrl(QUrl::fromLocalFile(file));
        } else {
        g3_l1 g3_l1(nullptr, ID);
        this->close();
        g3_l1.exec();
        }
    }
}

void Levels::on_DPA_clicked()
{
    if (teacher == true){
        QString file = ":/res/DPA.pdf";
        QDesktopServices::openUrl(QUrl::fromLocalFile(file));
    } else {
    DPA dpa(nullptr, ID);
    this->close();
    dpa.exec();
    }
}
