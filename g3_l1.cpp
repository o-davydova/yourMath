#include "g3_l1.h"
#include "ui_g3_l1.h"

#include "home.h"
#include "result.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include "QMessageBox"
#include "QDesktopServices"
#include "QUrl"

g3_l1::g3_l1(QWidget *parent, QString uid) :
    QDialog(parent),
    ui(new Ui::g3_l1)
{
    ui->setupUi(this);
    ID = uid;
    Solution = "";

    this->setWindowTitle("LEVEL 1 GRADE 3");
    QIcon winIcon(":/res/img/mainYellowLogo.ico");
    this->setWindowIcon(winIcon);

    ui->backButton->hide();
    ui->stackedWidget->setCurrentIndex(index);


    // ------------------------------------------------------------ DATABASE -------------------------------//

        YMDatabase = QSqlDatabase::addDatabase("QSQLITE");
        YMDatabase.setDatabaseName("DATA.db");
        YMDatabase.open();

        if (ID != ""){
                    QSqlQuery findStudent;
                    findStudent.exec("SELECT Name, Grade, Level FROM Students where id = '"+ID+"'");
                    while (findStudent.next()) {
                        name = findStudent.value(0).toString();
                        grade = 3;
                        level = findStudent.value(2).toString();
                        }

                    QSqlQuery findResult;
                    findResult.exec("SELECT Grade, Level FROM Results where IDnum = '"+ID+"'");
                    while (findResult.next()) {
                        gradeR = findResult.value(0).toString();
                        levelR = findResult.value(1).toString();
                        if (gradeR == '3' || levelR == '1'){
                            ready = 1;
                        }
                        }
        }

        if (ready == 0){
        QSqlQuery insertInfo;
        insertInfo.prepare("INSERT INTO Results(IDnum, Level, Grade) VALUES('"+ID+"', 1, 3)");
        insertInfo.exec();
        ready = 1;
        }
        // ------------------------------------------------------------ DATABASE -------------------------------//


}

g3_l1::~g3_l1()
{
    delete ui;
}

void g3_l1::on_backButton_clicked()
{
    index--;
    ui->stackedWidget->setCurrentIndex(index);
    if (index <= 0){
        ui->backButton->hide();
    }
    else ui->backButton->show();
    point -= solution[index];
    if (index>0)
    {/*
        if (index == 1) {
            answ_2[0] = 0;
            answ_2[1] = 0;
        }*/
    solution[index] = 0;
    }
}

void g3_l1::on_nextButton_clicked()
{
    index++;
    ui->stackedWidget->setCurrentIndex(index);

    if (index != 0) {
        ui->backButton->show();
       if (index == 2){
            int answ2 = 0;
            for (int i = 0; i<2; i++)
            {
                answ2 += answ_2[i];
                if (answ2 == 20)
                    solution[index-1] = 20;
                else solution[index-1] = 0;
            }
       }
    } else solution[index-1] = 0;

    point += solution[index-1];

    if (point < 0)
    {
        Solution.setNum(0);
    }
    else
    {
        Solution.setNum(point);
    }
   // ui->label->setText(Solution);


    // ------------------------------------------------------------ DATABASE -------------------------------//
    QSqlQuery updInfo;
    updInfo.prepare("UPDATE Results SET Point = '"+Solution+"' where IDnum = '"+ID+"' and Grade = 3 and Level = 1");
    updInfo.exec();
    // ------------------------------------------------------------ DATABASE -------------------------------//


    // ------------------------------------------------------------ SHOW RESULT ----------------------------//
    if (index == 5){

        YMDatabase.close();
        QSqlDatabase::removeDatabase("DATA.db");

        Result resultWin(nullptr, Solution, ID, "1", "3");
        this->close();
        resultWin.exec();
    }
    // ------------------------------------------------------------ SHOW RESULT ----------------------------//

}

void g3_l1::on_homeButton_clicked()
{
    Home homeWin(nullptr, ID);
    this->close();
    homeWin.exec();
}

void g3_l1::on_answ_1_1_clicked()
{
    solution[0] = 0;
    ui->answ_1_1->setStyleSheet("background-color: rgb(250, 191, 35);"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: white;"
                                "font: 40pt 'Yu Gothic UI Semilight';}");
    ui->answ_1_2->setStyleSheet("#answ_1_2{"
                                "color: rgb(0, 0, 0);"
                                "font: 35pt 'Yu Gothic UI Semilight';"
                                "border: 0px;}"
                                "#answ_1_2:hover{"
                                "background-color: rgb(250, 191, 35);"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: white;"
                                "font: 40pt 'Yu Gothic UI Semilight';}");
    ui->answ_1_3->setStyleSheet("#answ_1_3{"
                                "color: rgb(0, 0, 0);"
                                "font: 35pt 'Yu Gothic UI Semilight';"
                                "border: 0px;}"
                                "#answ_1_3:hover{"
                                "background-color: rgb(250, 191, 35);"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: white;"
                                "font: 40pt 'Yu Gothic UI Semilight';}");
}

void g3_l1::on_answ_1_2_clicked()
{
    solution[0] = 20;
    ui->answ_1_2->setStyleSheet("background-color: rgb(250, 191, 35);"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: white;"
                                "font: 40pt 'Yu Gothic UI Semilight';}");
    ui->answ_1_1->setStyleSheet("#answ_1_1{"
                                "color: rgb(0, 0, 0);"
                                "font: 35pt 'Yu Gothic UI Semilight';"
                                "border: 0px;}"
                                "#answ_1_1:hover{"
                                "background-color: rgb(250, 191, 35);"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: white;"
                                "font: 40pt 'Yu Gothic UI Semilight';}");
    ui->answ_1_3->setStyleSheet("#answ_1_3{"
                                "color: rgb(0, 0, 0);"
                                "font: 35pt 'Yu Gothic UI Semilight';"
                                "border: 0px;}"
                                "#answ_1_3:hover{"
                                "background-color: rgb(250, 191, 35);"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: white;"
                                "font: 40pt 'Yu Gothic UI Semilight';}");
}

void g3_l1::on_answ_1_3_clicked()
{
    solution[0] = 0;
    ui->answ_1_3->setStyleSheet("background-color: rgb(250, 191, 35);"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: white;"
                                "font: 40pt 'Yu Gothic UI Semilight';}");
    ui->answ_1_2->setStyleSheet("#answ_1_2{"
                                "color: rgb(0, 0, 0);"
                                "font: 35pt 'Yu Gothic UI Semilight';"
                                "border: 0px;}"
                                "#answ_1_2:hover{"
                                "background-color: rgb(250, 191, 35);"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: white;"
                                "font: 40pt 'Yu Gothic UI Semilight';}");
    ui->answ_1_1->setStyleSheet("#answ_1_1{"
                                "color: rgb(0, 0, 0);"
                                "font: 35pt 'Yu Gothic UI Semilight';"
                                "border: 0px;}"
                                "#answ_1_1:hover{"
                                "background-color: rgb(250, 191, 35);"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: white;"
                                "font: 40pt 'Yu Gothic UI Semilight';}");
}

void g3_l1::on_answ2_1_textChanged(const QString &arg1)
{
    if (arg1 == "765")
        answ_2[0] = 10;
    else answ_2[0] = 0;
}

void g3_l1::on_answ2_2_textChanged(const QString &arg1)
{
    if (arg1 == "63")
        answ_2[1] = 10;
    else answ_2[1] = 0;
}


void g3_l1::on_answ3_1_textChanged(const QString &arg1)
{
    if (arg1 == "60")
        solution[2] = 20;
    else solution[2] = 0;
}


void g3_l1::on_answ_4_3_clicked()
{
    solution[3] = 20;
    ui->answ_4_3->setStyleSheet("background-color: rgb(250, 191, 35);"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: white;"
                                "font: 40pt 'Yu Gothic UI Semilight';}");
    ui->answ_4_1->setStyleSheet("#answ_4_1{"
                                "color: rgb(0, 0, 0);"
                                "font: 35pt 'Yu Gothic UI Semilight';"
                                "border: 0px;}"
                                "#answ_4_1:hover{"
                                "background-color: rgb(250, 191, 35);"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: white;"
                                "font: 40pt 'Yu Gothic UI Semilight';}");
    ui->answ_4_2->setStyleSheet("#answ_4_2{"
                                "color: rgb(0, 0, 0);"
                                "font: 35pt 'Yu Gothic UI Semilight';"
                                "border: 0px;}"
                                "#answ_4_2:hover{"
                                "background-color: rgb(250, 191, 35);"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: white;"
                                "font: 40pt 'Yu Gothic UI Semilight';}");
}

void g3_l1::on_answ_4_2_clicked()
{
    solution[3] = 0;
    ui->answ_4_2->setStyleSheet("background-color: rgb(250, 191, 35);"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: white;"
                                "font: 40pt 'Yu Gothic UI Semilight';}");
    ui->answ_4_1->setStyleSheet("#answ_4_1{"
                                "color: rgb(0, 0, 0);"
                                "font: 35pt 'Yu Gothic UI Semilight';"
                                "border: 0px;}"
                                "#answ_4_1:hover{"
                                "background-color: rgb(250, 191, 35);"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: white;"
                                "font: 40pt 'Yu Gothic UI Semilight';}");
    ui->answ_4_3->setStyleSheet("#answ_4_3{"
                                "color: rgb(0, 0, 0);"
                                "font: 35pt 'Yu Gothic UI Semilight';"
                                "border: 0px;}"
                                "#answ_4_3:hover{"
                                "background-color: rgb(250, 191, 35);"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: white;"
                                "font: 40pt 'Yu Gothic UI Semilight';}");
}

void g3_l1::on_answ_4_1_clicked()
{
    solution[3] = 0;
    ui->answ_4_1->setStyleSheet("background-color: rgb(250, 191, 35);"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: white;"
                                "font: 40pt 'Yu Gothic UI Semilight';}");
    ui->answ_4_3->setStyleSheet("#answ_4_3{"
                                "color: rgb(0, 0, 0);"
                                "font: 35pt 'Yu Gothic UI Semilight';"
                                "border: 0px;}"
                                "#answ_4_3:hover{"
                                "background-color: rgb(250, 191, 35);"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: white;"
                                "font: 40pt 'Yu Gothic UI Semilight';}");
    ui->answ_4_2->setStyleSheet("#answ_4_2{"
                                "color: rgb(0, 0, 0);"
                                "font: 35pt 'Yu Gothic UI Semilight';"
                                "border: 0px;}"
                                "#answ_4_2:hover{"
                                "background-color: rgb(250, 191, 35);"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: white;"
                                "font: 40pt 'Yu Gothic UI Semilight';}");
}

void g3_l1::on_answ_5_1_clicked()
{
    solution[4] = 20;
    ui->answ_5_1->setStyleSheet("background-color: white;"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: rgb(250, 191, 35);"
                                "font: 195pt 'Arial Rounded MT Bold';}");
    ui->answ_5_2->setStyleSheet("#answ_5_2{"
                                "color: white;"
                                "font: 195pt 'Arial Rounded MT Bold';"
                                "border: 0px;}"
                                "#answ_5_2:hover{"
                                "background-color: white;"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: rgb(250, 191, 35);"
                                "font: 195pt Arial Rounded MT Bold;}");
    ui->answ_5_3->setStyleSheet("#answ_5_3{"
                                "color: white;"
                                "font: 195pt 'Arial Rounded MT Bold';"
                                "border: 0px;}"
                                "#answ_5_3:hover{"
                                "background-color: white;"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: rgb(250, 191, 35);"
                                "font: 195pt 'Arial Rounded MT Bold';}");
}

void g3_l1::on_answ_5_2_clicked()
{
    solution[4] = 0;
    ui->answ_5_2->setStyleSheet("background-color: white;"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: rgb(250, 191, 35);"
                                "font: 195pt 'Arial Rounded MT Bold';}");
    ui->answ_5_1->setStyleSheet("#answ_5_1{"
                                "color: white;"
                                "font: 195pt 'Arial Rounded MT Bold';"
                                "border: 0px;}"
                                "#answ_5_1:hover{"
                                "background-color: white;"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: rgb(250, 191, 35);"
                                "font: 195pt 'Arial Rounded MT Bold';}");
    ui->answ_5_3->setStyleSheet("#answ_5_3{"
                                "color: white;"
                                "font: 195pt 'Arial Rounded MT Bold';"
                                "border: 0px;}"
                                "#answ_5_3:hover{"
                                "background-color: white;"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: rgb(250, 191, 35);"
                                "font: 195pt 'Arial Rounded MT Bold';}");
}

void g3_l1::on_answ_5_3_clicked()
{
    solution[4] = 0;
    ui->answ_5_3->setStyleSheet("background-color: white;"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: rgb(250, 191, 35);"
                                "font: 195pt 'Arial Rounded MT Bold';}");
    ui->answ_5_1->setStyleSheet("#answ_5_1{"
                                "color: white;"
                                "font: 195pt 'Arial Rounded MT Bold';"
                                "border: 0px;}"
                                "#answ_5_1:hover{"
                                "background-color: white;"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: rgb(250, 191, 35);"
                                "font: 195pt 'Arial Rounded MT Bold';}");
    ui->answ_5_2->setStyleSheet("#answ_5_2{"
                                "color: white;"
                                "font: 195pt 'Arial Rounded MT Bold';"
                                "border: 0px;}"
                                "#answ_5_2:hover{"
                                "background-color: white;"
                                "border: 2px;"
                                "border-radius: 15px;"
                                "border-color: rgb(250, 191, 35);"
                                "color: rgb(250, 191, 35);"
                                "font: 195pt 'Arial Rounded MT Bold';}");
}

void g3_l1::on_printButton_clicked()
{
        QString file = "D:/for losers/diploma/diploma/DB/3.pdf";
        QDesktopServices::openUrl(QUrl::fromLocalFile(file));
}
