#include "teacherspage.h"
#include "ui_teacherspage.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QDesktopServices>
#include <QUrl>

#include <statistic.h>
#include "levels.h"

TeachersPage::TeachersPage(QWidget *parent, QString uid) :
    QDialog(parent),
    ui(new Ui::TeachersPage)
{
    ui->setupUi(this);
    ID = uid;
    // -------------------------------------------------------- LOGO & ICON --------------------//
            this->setWindowTitle(" Teacher ");
            QIcon winIcon(":/res/img/mainYellowLogo.ico");
            this->setWindowIcon(winIcon);
    // -------------------------------------------------------- LOGO & ICON --------------------//

    YMDatabase = QSqlDatabase::addDatabase("QSQLITE");
    YMDatabase.setDatabaseName("DATA.db");
    YMDatabase.open();
    {
            QSqlQuery findTeacher;
            findTeacher.exec("SELECT Name, Name3, School FROM Teacher where id = '"+ID+"'");
            while (findTeacher.next()) {
                name = findTeacher.value(0).toString();
                name3 = findTeacher.value(1).toString();
                school = findTeacher.value(2).toString();
                }
    this->ui->namesLabel->setText(name+" "+name3);
    this->ui->schoolLabel->setText(school);
    }
}

TeachersPage::~TeachersPage()
{
    delete ui;
}

void TeachersPage::on_exitButton_clicked()
{
     this->close();
}

void TeachersPage::on_MINButton_clicked()
{
    QString link="https://mon.gov.ua/ua";
    QDesktopServices::openUrl(QUrl(link));
}

void TeachersPage::on_statisticButton_clicked()
{
    Statistic statistic(nullptr, ID, true);
    this->close();
    statistic.exec();
}

void TeachersPage::on_Grade1Button_clicked()
{
    Levels levelsWin(nullptr, ID, "1", true);
    this->close();
    levelsWin.exec();
}

void TeachersPage::on_Grade2Button_clicked()
{
    Levels levelsWin(nullptr, "teacher", "2");
    this->close();
    levelsWin.exec();
}

void TeachersPage::on_Grade3Button_clicked()
{
    Levels levelsWin(nullptr, "teacher", "3");
    this->close();
    levelsWin.exec();
}

void TeachersPage::on_Grade4Button_clicked()
{
    Levels levelsWin(nullptr, "teacher", "4");
    this->close();
    levelsWin.exec();
}
