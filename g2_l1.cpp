#include "g2_l1.h"
#include "ui_g2_l1.h"

#include "home.h"
#include "result.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include "QMessageBox"
#include "QDesktopServices"
#include "QUrl"


g2_l1::g2_l1(QWidget *parent, QString uid) :
    QDialog(parent),
    ui(new Ui::g2_l1)
{
    ui->setupUi(this);
    ID = uid;
    Solution = "";

    this->setWindowTitle("LEVEL 1 GRADE 2");
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
                        grade = 2;
                        level = findStudent.value(2).toString();
                        }

                    QSqlQuery findResult;
                    findResult.exec("SELECT Grade, Level FROM Results where IDnum = '"+ID+"'");
                    while (findResult.next()) {
                        gradeR = findResult.value(0).toString();
                        levelR = findResult.value(1).toString();
                        if (gradeR == '2' && levelR == '1'){
                            ready = 1;
                        }
                        }
        }

        if (ready == 0){
        QSqlQuery insertInfo;
        insertInfo.prepare("INSERT INTO Results(IDnum, Level, Grade) VALUES('"+ID+"', 1, 2)");
        insertInfo.exec();
        ready = 1;
        }
        // ------------------------------------------------------------ DATABASE -------------------------------//

}

g2_l1::~g2_l1()
{
    delete ui;
}

void g2_l1::on_backButton_clicked()
{
    index--;
    ui->stackedWidget->setCurrentIndex(index);
    if (index <= 0){
        ui->backButton->hide();
    }
    else ui->backButton->show();
    point -= solution[index];
    if (index>1)
    {
    solution[index] = 0;
    }
}

void g2_l1::on_nextButton_clicked()
{
    index++;
    ui->stackedWidget->setCurrentIndex(index);

    if (index != 0) {
        ui->backButton->show();


        if (index == 2){
            for (int i = 0; i<4; i++)
            {
                solution[index-1] += answ_2[i];
            }
            if (solution[index-1] == 20)
            {
                solution[index-1] = 25;
            }
            else solution[index-1] = 0;
        }
        else if (index == 3){
            int answ3 = 0;
            for (int i = 0; i<5; i++)
            {
                answ3 += answ_3[i];
                if (answ3 == 25)
                    solution[index-1] = 25;
                else solution[index-1] = 0;
            }
        }
        else if (index == 4){
            for (int i = 0; i<3; i++)
            {
                solution[index-1] += answ_4[i];
            }
            if (solution[index-1] == 30)
            {
                solution[index-1] = 25;
            }
            else solution[index-1] = 0;
        }

        point += solution[index-1];
        if (point < 0)
        {
            Solution.setNum(0);
        }
        else
        {
            Solution.setNum(point);
        }
        //ui->title->setText(Solution);

        // ------------------------------------------------------------ DATABASE -------------------------------//
        QSqlQuery updInfo;
        updInfo.prepare("UPDATE Results SET Point = '"+Solution+"' where IDnum = '"+ID+"' and Grade = 2 and Level = 1");
        updInfo.exec();
        // ------------------------------------------------------------ DATABASE -------------------------------//


        // ------------------------------------------------------------ SHOW RESULT ----------------------------//
        if (index == 4){
            Result resultWin(nullptr, Solution, ID, "1", "2");
            this->close();
            resultWin.exec();

            YMDatabase.close();
            QSqlDatabase::removeDatabase("DATA.db");
        }
    }

    // ------------------------------------------------------------ SHOW RESULT ----------------------------//


    //solution = 0;
}

void g2_l1::on_homeButton_clicked()
{
    Home homeWin(nullptr, ID);
    this->close();
    homeWin.exec();
}

void g2_l1::on_answ_textChanged(const QString &arg1)
{
    if (arg1 == "50")
        solution[0] = 25;
    else solution[0] = 0;
}

void g2_l1::on_answ_2_1_textChanged(const QString &arg1)
{
    if (arg1 == "24")
        answ_2[0] = 5;
    else answ_2[0] = 0;
}

void g2_l1::on_answ_2_2_textChanged(const QString &arg1)
{
    if (arg1 == "27")
        answ_2[1] = 5;
    else answ_2[1] = 0;
}

void g2_l1::on_answ_2_3_textChanged(const QString &arg1)
{
    if (arg1 == "28")
        answ_2[2] = 5;
    else answ_2[2] = 0;
}

void g2_l1::on_answ_2_4_textChanged(const QString &arg1)
{
    if (arg1 == "29")
        answ_2[3] = 5;
    else answ_2[3] = 0;
}



void g2_l1::on_answ_3_1_clicked()
{

    checked[0] = !checked[0];
    if (checked[0] == false){
        answ_3[0] = 5;
        ui->answ_3_1->setStyleSheet("#answ_3_1{"
                                    "background-image: url(:/res/img/BG.png);"
                                    "image: url(:/res/img/сarrot.png);"
                                    "border: 0px;}"
                                    "#answ_3_1:hover{"
                                    "image: url(:/res/img/сarrot_2.png);}");
    }
    else
    {
        answ_3[0] = 0;
        ui->answ_3_1->setStyleSheet("background-color: rgb(250, 191, 35);"
                                    "image: url(:/res/img/сarrot_2.png);"
                                    "border: 2px;"
                                    "border-radius: 15px;"
                                    "border-color: rgb(255, 255, 255);");
    }
}

void g2_l1::on_answ_3_2_clicked()
{
    checked[1] = !checked[1];
    if (checked[1] == false){
        answ_3[1] = 0;
        ui->answ_3_2->setStyleSheet("#answ_3_2{"
                                    "background-image: url(:/res/img/BG.png);"
                                    "image: url(:/res/img/сarrot.png);"
                                    "border: 0px;}"
                                    "#answ_3_2:hover{"
                                    "image: url(:/res/img/сarrot_2.png);}");
    }
    else
    {
        answ_3[1] = 5;
        ui->answ_3_2->setStyleSheet("background-color: rgb(250, 191, 35);"
                                    "image: url(:/res/img/сarrot_2.png);"
                                    "border: 2px;"
                                    "border-radius: 15px;"
                                    "border-color: rgb(255, 255, 255);");
    }
}

void g2_l1::on_answ_3_3_clicked()
{
    checked[2] = !checked[2];
    if (checked[2] == false){
        answ_3[2] = 0;
        ui->answ_3_3->setStyleSheet("#answ_3_3{"
                                    "background-image: url(:/res/img/BG.png);"
                                    "image: url(:/res/img/сarrot.png);"
                                    "border: 0px;}"
                                    "#answ_3_3:hover{"
                                    "image: url(:/res/img/сarrot_2.png);}");
    }
    else
    {
        answ_3[2] = 5;
        ui->answ_3_3->setStyleSheet("background-color: rgb(250, 191, 35);"
                                    "image: url(:/res/img/сarrot_2.png);"
                                    "border: 2px;"
                                    "border-radius: 15px;"
                                    "border-color: rgb(255, 255, 255);");
    }
}

void g2_l1::on_answ_3_4_clicked()
{
    checked[3] = !checked[3];
    if (checked[3] == false){
        answ_3[3] = 5;
        ui->answ_3_4->setStyleSheet("#answ_3_4{"
                                    "background-image: url(:/res/img/BG.png);"
                                    "image: url(:/res/img/сarrot.png);"
                                    "border: 0px;}"
                                    "#answ_3_4:hover{"
                                    "image: url(:/res/img/сarrot_2.png);}");
    }
    else
    {
        answ_3[3] = 0;
        ui->answ_3_4->setStyleSheet("background-color: rgb(250, 191, 35);"
                                    "image: url(:/res/img/сarrot_2.png);"
                                    "border: 2px;"
                                    "border-radius: 15px;"
                                    "border-color: rgb(255, 255, 255);");
    }
}

void g2_l1::on_answ_3_5_clicked()
{
    checked[4] = !checked[4];
    if (checked[4] == false){
        answ_3[4] = 0;
        ui->answ_3_5->setStyleSheet("#answ_3_5{"
                                    "background-image: url(:/res/img/BG.png);"
                                    "image: url(:/res/img/сarrot.png);"
                                    "border: 0px;}"
                                    "#answ_3_5:hover{"
                                    "image: url(:/res/img/сarrot_2.png);}");
    }
    else
    {
        answ_3[4] = 5;
        ui->answ_3_5->setStyleSheet("background-color: rgb(250, 191, 35);"
                                    "image: url(:/res/img/сarrot_2.png);"
                                    "border: 2px;"
                                    "border-radius: 15px;"
                                    "border-color: rgb(255, 255, 255);");
    }
}

void g2_l1::on_answ_4_3_clicked()
{
    checked[5] = !checked[5];
    if (checked[5] == false){
        answ_4[0] = 0;
        ui->answ_4_3->setStyleSheet("#answ_4_3{"
                                    "background-image: url(:/res/img/BG.png);"
                                    "image: url(:/res/img/potato.png);"
                                    "border: 0px;"
                                    "font: 45pt Yu Gothic UI Semilight;}"
                                    "#answ_4_3:hover{"
                                    "image: url(:/res/img/potato_2.png);}");
    }
    else
    {
        answ_4[0] = 10;
        ui->answ_4_3->setStyleSheet("background-color: rgb(250, 191, 35);"
                                    "image: url(:/res/img/potato_2.png);"
                                    "border: 2px;"
                                    "border-radius: 15px;"
                                    "border-color: rgb(250, 191, 35);"
                                    "font: 45pt Yu Gothic UI Semilight;");
    }
}

void g2_l1::on_answ_4_2_clicked()
{
    checked[6] = !checked[6];
    if (checked[6] == false){
        answ_4[1] = 10;
        ui->answ_4_2->setStyleSheet("#answ_4_2{"
                                    "background-image: url(:/res/img/BG.png);"
                                    "image: url(:/res/img/eggplant.png);"
                                    "border: 0px;"
                                    "font: 45pt Yu Gothic UI Semilight;}"
                                    "#answ_4_2:hover{"
                                    "image: url(:/res/img/eggplant_2.png);}");
    }
    else
    {
        answ_4[1] = 0;
        ui->answ_4_2->setStyleSheet("background-color: rgb(250, 191, 35);"
                                    "image: url(:/res/img/eggplant_2.png);"
                                    "border: 2px;"
                                    "border-radius: 15px;"
                                    "border-color: rgb(250, 191, 35);"
                                    "font: 45pt Yu Gothic UI Semilight;");
    }
}

void g2_l1::on_answ_4_1_clicked()
{
    checked[7] = !checked[7];
    if (checked[7] == false){
        answ_4[2] = 0;
        ui->answ_4_1->setStyleSheet("#answ_4_1{"
                                    "background-image: url(:/res/img/BG.png);"
                                    "image: url(:/res/img/сarrot.png);"
                                    "border: 0px;"
                                    "font: 45pt Yu Gothic UI Semilight;}"
                                    "#answ_4_1:hover{"
                                    "image: url(:/res/img/сarrot_2.png);}");
    }
    else
    {
        answ_4[2] = 10;
        ui->answ_4_1->setStyleSheet("background-color: rgb(250, 191, 35);"
                                    "image: url(:/res/img/сarrot_2.png);"
                                    "border: 2px;"
                                    "border-radius: 15px;"
                                    "border-color: rgb(250, 191, 35);"
                                    "font: 45pt Yu Gothic UI Semilight;");
    }
}

void g2_l1::on_printButton_clicked()
{
        QString file = "D:/for losers/diploma/diploma/DB/1.pdf";
        QDesktopServices::openUrl(QUrl::fromLocalFile(file));
}
