#include "home.h"
#include "ui_home.h"

#include <QGraphicsDropShadowEffect>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include "QMessageBox"

#include "levels.h"
#include "registration.h"
#include "changeinfo.h"
#include "statistic.h"
#include "gradeerror.h"

Home::Home(QWidget *parent, QString uid) :
    QDialog(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
    ID = uid;
    Level = '1';
    this->setWindowTitle(" ");
    QIcon winIcon(":/res/img/mainYellowLogo.ico");
    this->setWindowIcon(winIcon);
    //QMessageBox::information(this, "", ID);

//    ui->infoLabel->setText(authorization.returnID());
if (ID != ""){

// ------------------------------------------------------------ DATABASE -------------------------------//

    YMDatabase = QSqlDatabase::addDatabase("QSQLITE");
    YMDatabase.setDatabaseName("DATA.db");
    YMDatabase.open();
{
        QSqlQuery deleteStudent;
        deleteStudent.exec("DELETE * FROM Results");

            QSqlQuery findStudent;
            findStudent.exec("SELECT Name, Grade FROM Students where id = '"+ID+"'");
            while (findStudent.next()) {
                name = findStudent.value(0).toString();
                grade = findStudent.value(1).toString();
                }
            QSqlQuery findPoint;
            findPoint.exec("SELECT Point, Level, Grade FROM Results where IDnum = '"+ID+"' and Grade = '"+grade+"'");
            while (findPoint.next()) {
               Point = findPoint.value(0).toString();
               point += Point.toInt();
               grade = findPoint.value(2).toString();
               DPA = findPoint.value(1).toString();
               if (DPA != "ДПА")
               {
                   if (Level < findPoint.value(1).toString())
                   {
                   Level = findPoint.value(1).toString();
                   level = Level.toInt();
                   }
                } else
               {
                   DPApoint = findPoint.value(0).toString();
                   point -= Point.toInt();
               }
            }
            point /= level;

    Point.setNum(point);
    ui->infoLabel->setText(name + ", ти зараз на " + Level + " рівні " + grade + "-го класу.");
    ui->infoLabel_2->setText("Твій середній бал \n за " + grade +"-й клас \n становить: " + Point + " балів");

    QSqlQuery average;
    average.exec("update Results set Average = '"+ Point +"'");

    if (DPApoint != ""){
        ui->infoLabel_2->setText("Твій середній бал \n за " + grade +"-й клас \n становить: " + Point + " балів\n\n БАЛ ЗА ДПА: " + DPApoint);
    }

}
    YMDatabase.close();
    QSqlDatabase::removeDatabase("DATA.db");
}


// ------------------------------------------------------------ DATABASE -------------------------------//

}
Home::~Home()
{
    delete ui;
}

void Home::on_exitButton_clicked()
{
    this->close();
}


void Home::on_changeInfo_clicked()
{
    //QMessageBox::information(this, "", ID);
    changeInfo changeinfo(nullptr, ID);
    this->close();
    changeinfo.exec();
}

void Home::on_grade_1_clicked()
{
    if (grade == '1')
    {
        Levels levelsWin(nullptr, ID, grade);
        this->close();
        levelsWin.exec();
    }
    else
    {
        GradeError gradeerror;
        gradeerror.exec();
    }
}


void Home::on_grade_2_clicked()
{
    if (grade == '2')
    {
        Levels levelsWin(nullptr, ID, grade);
        this->close();
        levelsWin.exec();
    }
    else
    {
        GradeError gradeerror;
        gradeerror.exec();
    }
}

void Home::on_grade_3_clicked()
{
    if (grade == '3')
    {
        Levels levelsWin(nullptr, ID, grade);
        this->close();
        levelsWin.exec();
    }
    else
    {
        GradeError gradeerror;
        gradeerror.exec();
    }
}


void Home::on_grade_4_clicked()
{
    if (grade == '4')
    {
        Levels levelsWin(nullptr, ID, grade);
        this->close();
        levelsWin.exec();
    }
    else
    {
        GradeError gradeerror;
        gradeerror.exec();
    }
}
void Home::on_showResults_clicked()
{
    Statistic statistic(nullptr, ID, false);
    this->close();
    statistic.exec();
}
