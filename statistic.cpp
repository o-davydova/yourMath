#include "statistic.h"
#include "ui_statistic.h"

#include "home.h"
#include "teacherspage.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include "QMessageBox"
#include "QSqlTableModel"
#include "QStandardItemModel"
#include "QStandardItem"

Statistic::Statistic(QWidget *parent, QString uid, bool check) :
    QDialog(parent),
    ui(new Ui::Statistic)
{
    ui->setupUi(this);
    ID = uid;
    int row = 0;
    average = 0;
    teacherCheck = check;
    QString* children;
    QString* names;
    // -------------------------------------------------------- LOGO & ICON --------------------//
            this->setWindowTitle(" Statistic ");
            QIcon winIcon(":/res/img/mainYellowLogo.ico");
            this->setWindowIcon(winIcon);
    // -------------------------------------------------------- LOGO & ICON --------------------//

    if (ID != ""){

    // ------------------------------------------------------------ DATABASE -------------------------------//

        YMDatabase = QSqlDatabase::addDatabase("QSQLITE");
        YMDatabase.setDatabaseName("DATA.db");
        YMDatabase.open();
    {
            if (teacherCheck == true){


                ui->tableView->setStyleSheet("border: 0px;"
                                             "color: rgb(45, 44, 44);"
                                             "font: 25 19pt 'Yu Gothic UI Light';");
                ui->tableView->horizontalHeader()->setStyleSheet("color: rgb(45, 44, 44);"
                                                                 "font: 25 19pt 'Yu Gothic UI Light';");

                int childNum = 0;
                QSqlQuery findStudentsNum("SELECT * FROM Students where teacher = '"+ID+"'");
                while (findStudentsNum.next()) {
                    childNum++;
                }
                children = new QString[childNum];
                names = new QString[childNum];
                names[0] = "0";

                QSqlQuery findStudents;
                findStudents.exec("SELECT Level, id, Name, Sec_Name FROM Students where teacher = '"+ID+"'");
                counter = childNum-1;
                while (findStudents.next())
                {
                    children[counter] = findStudents.value(1).toString();
                    names[counter] = findStudents.value(2).toString() + " " + findStudents.value(3).toString();
                    counter--;
                }
                ui->nameLabel->setText("для учнів");
                counter = childNum-1;

            } else {

                QSqlQuery findStudent;
                findStudent.exec("SELECT Name, Sec_Name, Level FROM Students where id = '"+ID+"'");

                while (findStudent.next()) {
                    name = findStudent.value(0).toString();
                    name_2 = findStudent.value(1).toString();
                    currentLevel = findStudent.value(1).toString();
                    }
                ui->nameLabel->show();
                ui->nameLabel->setText(name + " " + name_2);
            }
                QStandardItemModel *model = new QStandardItemModel;
                QStandardItem *item;
                  // Растягиваем последнюю колонку на всё доступное пространство
                  ui->tableView->horizontalHeader()->setStretchLastSection(true);

                      //Заголовки столбцов

                  if (teacherCheck == true){

                      QStringList horizontalHeader;

                      horizontalHeader.append("Учень");
                      horizontalHeader.append("Оцінка");
                      horizontalHeader.append("Клас");
                      horizontalHeader.append("Рівень");

                      model->setHorizontalHeaderLabels(horizontalHeader);
                  }
                  else {

                      QStringList horizontalHeader;
                      horizontalHeader.append(" Клас ");
                      horizontalHeader.append(" Рівень ");
                      horizontalHeader.append(" Оцінка ");
                      horizontalHeader.append("");

                      model->setHorizontalHeaderLabels(horizontalHeader);
                    }


                   if (teacherCheck == true){

                       QSqlQuery findPoint;
                       QString I;

                       while (counter != -1){
                           I = children[counter];
                           findPoint.exec("SELECT Point, Level, Grade, Average FROM Results where IDnum = '"+I+"'");

                          while (findPoint.next()) {
                              average += findPoint.value(0).toInt();

                              //ряд

                              //QMessageBox::information(this, children[counter], names[counter] + " " + I);

                              item = new QStandardItem(names[counter]);
                              model->setItem(row, 0, item);

                              item = new QStandardItem("    " + findPoint.value(2).toString()+"    ");
                              model->setItem(row, 2, item);



                              if (findPoint.value(1).toString() == "ДПА")
                              {
                                  item = new QStandardItem("   " +findPoint.value(0).toString()+"/12"+"  ");
                                  model->setItem(row, 1, item);

                                  item = new QStandardItem("  " + findPoint.value(1).toString());
                                  model->setItem(row, 3, item);
                              }
                              else
                              {
                              item = new QStandardItem("  " +findPoint.value(0).toString()+"/100"+"  ");
                              model->setItem(row, 1, item);

                              item = new QStandardItem("     " + findPoint.value(1).toString());
                              model->setItem(row, 3, item);
                              }
                              row++;

                              //delete item;
                          }
                          counter--;
                           }
                   }
                   else {
                            QSqlQuery findPoint;
                            findPoint.exec("SELECT Point, Level, Grade, Average FROM Results where IDnum = '"+ID+"'");
                            while (findPoint.next()) {
                               average += findPoint.value(0).toInt();

                               //ряд
                               item = new QStandardItem("    "+findPoint.value(2).toString());
                               model->setItem(row, 0, item);

                               item = new QStandardItem("    "+findPoint.value(1).toString());
                               model->setItem(row, 1, item);

                               if (findPoint.value(1).toString() == "ДПА")
                               {
                                 item = new QStandardItem("   " +findPoint.value(0).toString()+"/12"+"  ");
                                 model->setItem(row, 2, item);

                                 if (findPoint.value(0).toInt() < 5){
                                     item = new QStandardItem("  :(");
                                     model->setItem(row, 3, item);
                                 } else if (findPoint.value(0).toInt() > 9){
                                     item = new QStandardItem("  :)");
                                     model->setItem(row, 3, item);
                                 } else {
                                     item = new QStandardItem("  :|");
                                     model->setItem(row, 3, item);
                                 }
                               }
                               else
                               {
                               item = new QStandardItem(" "+findPoint.value(0).toString()+"/100");
                               model->setItem(row, 2, item);

                               if (findPoint.value(0).toInt() < 35){
                                   item = new QStandardItem("  :(");
                                   model->setItem(row, 3, item);
                               } else if (findPoint.value(0).toInt() > 75){
                                   item = new QStandardItem("  :)");
                                   model->setItem(row, 3, item);
                               } else {
                                   item = new QStandardItem("  :|");
                                   model->setItem(row, 3, item);
                               }
                               }


                               row++;
                               //delete item;
                            }
                   }


                ui->tableView->setModel(model);

                ui->tableView->resizeRowsToContents();
                ui->tableView->resizeColumnsToContents();
    }
        YMDatabase.close();
        QSqlDatabase::removeDatabase("DATA.db");

        average /= row;
        Average.setNum(average);
        ui->averageLabel->setText(" Середній бал: " + Average);

    // ------------------------------------------------------------ DATABASE -------------------------------//


    }
}

Statistic::~Statistic()
{
    delete ui;
}

void Statistic::on_homeButton_clicked()
{
    if (teacherCheck == true){
        TeachersPage teacherspage(nullptr, ID);
        this->close();
        teacherspage.exec();
    }
    else {
        Home homeWin(nullptr, ID);
        this->close();
        homeWin.exec();
    }
}
