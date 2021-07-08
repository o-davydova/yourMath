#include "dpa.h"
#include "ui_dpa.h"

#include "home.h"
#include "result.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include "QDesktopServices"
#include "QUrl"

#include "QMessageBox"

DPA::DPA(QWidget *parent, QString uid) :
    QDialog(parent),
    ui(new Ui::DPA)
{
    ui->setupUi(this);
    // -------------------------------------------------------- LOGO & ICON -----------------------------------//
            this->setWindowTitle(" ДПА ");
            QIcon winIcon(":/res/img/mainYellowLogo.ico");
            this->setWindowIcon(winIcon);
    // -------------------------------------------------------- LOGO & ICON -----------------------------------//
    ID = uid;
    defaultStyle2 = defaultStyle3 = defaultStyle1 = defaultStyle;

    ui->backButton->hide();
    ui->stackedWidget->setCurrentIndex(index);
}

DPA::~DPA()
{
    delete ui;
}

void DPA::on_homeButton_clicked()
{
    Home homeWin(nullptr, ID);
    this->close();
    homeWin.exec();
}

void DPA::on_answ_1_1_clicked()
{
    solution[0] = 0;
}

void DPA::on_answ_1_2_clicked()
{
    solution[0] = 0;
}

void DPA::on_answ_1_3_clicked()
{
    solution[0] = 1;
}

void DPA::on_answ_2_1_clicked()
{
    solution[1] = 0;
}

void DPA::on_answ_2_2_clicked()
{
    solution[1] = 1;
}

void DPA::on_answ_2_3_clicked()
{
    solution[1] = 0;
}

void DPA::on_answ_3_1_clicked()
{
    solution[2] = 0;
}

void DPA::on_answ_3_2_clicked()
{
    solution[2] = 0;
}

void DPA::on_answ_3_3_clicked()
{
    solution[2] = 1;
}

void DPA::on_backButton_clicked()
{
    index--;
    ui->stackedWidget->setCurrentIndex(index);
    if (index <= 0){
        ui->backButton->hide();
    }
    else ui->backButton->show();
    point -= solution[index];
    if (index>0)
    {
        solution[index] = 0;
    }
}

void DPA::on_nextButton_clicked()
{
    index++;
    if (index == 1) {
        solution[0] = solution[0] + solution[1] + solution[2];
    }
    ui->stackedWidget->setCurrentIndex(index);

    if (index != 0) {
        ui->backButton->show();

        // ------------------------------------------------------------ DATABASE -------------------------------//

                YMDatabase = QSqlDatabase::addDatabase("QSQLITE");
                YMDatabase.setDatabaseName("DATA.db");
                YMDatabase.open();

                if (ID != ""){
                            QSqlQuery findStudent;
                            findStudent.exec("SELECT Name, Grade, Level FROM Students where id = '"+ID+"'");
                            while (findStudent.next()) {
                                name = findStudent.value(0).toString();
//                                grade = findStudent.value(1).toString();
//                                level = findStudent.value(2).toString();
                                }

                            QSqlQuery findResult;
                            findResult.exec("SELECT Level FROM Results where IDnum = '"+ID+"'");
                            while (findResult.next()) {
                                dpa = findResult.value(0).toString();
                                if (dpa == "ДПА"){
                                    ready = 1;
                                }
                                }
                }
                if (ready == 0){
                QSqlQuery insertInfo;
                insertInfo.prepare("INSERT INTO Results(IDnum, Level, Grade) VALUES('"+ID+"', 'ДПА', 4)");
                insertInfo.exec();
                ready = 1;
                }

            // ------------------------------------------------------------ DATABASE -------------------------------//


        if (index == 2)
        {
            solution[index-1] = second[0] + second[1] + second[2];
            if (solution[index-1] == 3) solution[index-1] = 2;
            else if (solution[index-1] > 0) solution[index-1] = 1;
            else solution[index-1] = 0;
        } else if (index == 3)
        {
            solution[index-1] = third[0] + third[1] + third[2];
            if (solution[index-1] == 3) solution[index-1] = 2;
            else if (solution[index-1] > 0) solution[index-1] = 1;
            else solution[index-1] = 0;
        }else if (index == 4)
        {
            solution[index-1] = forth[0] + forth[1] + forth[2];
            if (solution[index-1] == 3) solution[index-1] = 2;
            else if (solution[index-1] > 0) solution[index-1] = 1;
            else solution[index-1] = 0;
        }else if (index == 5)
        {
            solution[index-1] = last[0] + last[1] + last[2] + last[3] + last[4] + last[5] + last[6] + last[7] + last[8] + last[9] + last[10] + last[11];
            if (solution[index-1] > 8) solution[index-1] = 3;
            else if (solution[index-1] > 6) solution[index-1] = 2;
            else if (solution[index-1] > 3) solution[index-1] = 1;
            else solution[index-1] = 0;
        }
    }
    else solution[index-1] = 0;

    point += solution[index-1];

    //QString Ind;
    //Ind.setNum(index);
    if (point < 0)
    {
        Solution.setNum(0);
    }
    else
    {
        Solution.setNum(point);
        //QMessageBox::information(this, Ind, Solution);
    }
    // ------------------------------------------------------------ DATABASE -------------------------------//
    QSqlQuery updInfo;
    updInfo.prepare("UPDATE Results SET Point = '"+Solution+"', Level = 'ДПА' where IDnum = '"+ID+"' and Level = 'ДПА'");
    updInfo.exec();

    // ------------------------------------------------------------ DATABASE -------------------------------//
    if (index == 5){
    // ------------------------------------------------------------ SHOW RESULT -------------------------//
    Result resultWin(nullptr, Solution, ID, "DPA", "4", true);

    YMDatabase.close();
    QSqlDatabase::removeDatabase("DATA.db");
    this->close();
    resultWin.exec();
    }
    // ------------------------------------------------------------ SHOW RESULT -------------------------//
}


void DPA::on_answ_4_1_clicked()
{
    ui->answ_4_1->setStyleSheet(style1);
    ui->answ_4_4->setStyleSheet("#answ_4_4{" + defaultStyle1 + "} #answ_4_4:hover{" + style1 + "}");
    ui->answ_4_5->setStyleSheet("#answ_4_5{" + defaultStyle2 + "} #answ_4_5:hover{" + style1 + "}");
    ui->answ_4_6->setStyleSheet("#answ_4_6{" + defaultStyle3 + "} #answ_4_6:hover{" + style1 + "}");
//    ui->answ_4_2->setStyleSheet("#answ_4_2{" + defaultStyle + "} #answ_4_2:hover{" + style2 + "}");
//    ui->answ_4_3->setStyleSheet("#answ_4_3{" + defaultStyle + "} #answ_4_3:hover{" + style3 + "}");

    if (checked == 5){
        second[0] = 1;
    } else second[0] = 0;

    checked = 1;
}

void DPA::on_answ_4_2_clicked()
{
    ui->answ_4_2->setStyleSheet(style2);
    ui->answ_4_4->setStyleSheet("#answ_4_4{" + defaultStyle1 + "} #answ_4_4:hover{" + style2 + "}");
    ui->answ_4_5->setStyleSheet("#answ_4_5{" + defaultStyle2 + "} #answ_4_5:hover{" + style2 + "}");
    ui->answ_4_6->setStyleSheet("#answ_4_6{" + defaultStyle3 + "} #answ_4_6:hover{" + style2 + "}");
//    ui->answ_4_1->setStyleSheet("#answ_4_1{" + defaultStyle + "} #answ_4_1:hover{" + style1 + "}");
//    ui->answ_4_3->setStyleSheet("#answ_4_3{" + defaultStyle + "} #answ_4_3:hover{" + style3 + "}");

    if (checked == 6){
        second[1] = 1;
    } else second[1] = 0;

    checked = 2;
}

void DPA::on_answ_4_3_clicked()
{
    ui->answ_4_3->setStyleSheet(style3);
    ui->answ_4_4->setStyleSheet("#answ_4_4{" + defaultStyle1 + "} #answ_4_4:hover{" + style3 + "}");
    ui->answ_4_5->setStyleSheet("#answ_4_5{" + defaultStyle2 + "} #answ_4_5:hover{" + style3 + "}");
    ui->answ_4_6->setStyleSheet("#answ_4_6{" + defaultStyle3 + "} #answ_4_6:hover{" + style3 + "}");
//    ui->answ_4_2->setStyleSheet("#answ_4_2{" + defaultStyle + "} #answ_4_2:hover{" + style2 + "}");
//    ui->answ_4_1->setStyleSheet("#answ_4_1{" + defaultStyle + "} #answ_4_1:hover{" + style1 + "}");

    if (checked == 4){
        second[2] = 1;
    } else second[2] = 0;

    checked = 3;
}

void DPA::on_answ_4_4_clicked()
{
    if (checked == 1)
    {
        ui->answ_4_4->setStyleSheet("#answ_4_4{" + style1 + "}");

        second[2] = 0;
        defaultStyle1 = style1;

        if (defaultStyle2 == defaultStyle1){
            defaultStyle2 = defaultStyle;
        } else if (defaultStyle3 == defaultStyle1){
            defaultStyle3 = defaultStyle;
        }
    }
    else if (checked == 2)
    {
        ui->answ_4_4->setStyleSheet("#answ_4_4{" + style2 + "}");

        second[2] = 0;
        defaultStyle1 = style2;

        if (defaultStyle2 == defaultStyle1){
            defaultStyle2 = defaultStyle;
        } else if (defaultStyle3 == defaultStyle1){
            defaultStyle3 = defaultStyle;
        }
    }
    else if (checked == 3)
    {
        ui->answ_4_4->setStyleSheet("#answ_4_4{" + style3 + "}");

        second[2] = 1;
        defaultStyle1 = style3;

        if (defaultStyle2 == defaultStyle1){
            defaultStyle2 = defaultStyle;
        } else if (defaultStyle3 == defaultStyle1){
            defaultStyle3 = defaultStyle;
        }
    }

    ui->answ_4_5->setStyleSheet("#answ_4_5{" + defaultStyle2 + "} #answ_4_5:hover{" + defaultStyle1 + "}");
    ui->answ_4_6->setStyleSheet("#answ_4_6{" + defaultStyle3 + "} #answ_4_6:hover{" + defaultStyle1 + "}");

}

void DPA::on_answ_4_5_clicked()
{

    if (checked == 1)
    {
        ui->answ_4_5->setStyleSheet("#answ_4_5{" + style1 + "}");

        second[0] = 1;
        defaultStyle2 = style1;

        if (defaultStyle1 == defaultStyle2){
            defaultStyle1 = defaultStyle;
        } else if (defaultStyle3 == defaultStyle2){
            defaultStyle3 = defaultStyle;
        }
    }else if (checked == 2)
    {
        ui->answ_4_5->setStyleSheet("#answ_4_5{" + style2 + "}");

        second[0] = 0;
        defaultStyle2 = style2;

        if (defaultStyle1 == defaultStyle2){
            defaultStyle1 = defaultStyle;
        } else if (defaultStyle3 == defaultStyle2){
            defaultStyle3 = defaultStyle;
        }
    }
    else if (checked == 3)
    {
        ui->answ_4_5->setStyleSheet("#answ_4_5{" + style3 + "}");

        second[0] = 0;
        defaultStyle2 = style3;

        if (defaultStyle1 == defaultStyle2){
            defaultStyle1 = defaultStyle;
        } else if (defaultStyle3 == defaultStyle2){
            defaultStyle3 = defaultStyle;
        }
    }

    ui->answ_4_4->setStyleSheet("#answ_4_4{" + defaultStyle1 + "} #answ_4_4:hover{" + defaultStyle2 + "}");
    ui->answ_4_6->setStyleSheet("#answ_4_6{" + defaultStyle3 + "} #answ_4_6:hover{" + defaultStyle2 + "}");

}

void DPA::on_answ_4_6_clicked()
{

    if (checked == 1)
    {
        ui->answ_4_6->setStyleSheet("#answ_4_6{" + style1 + "}");

        second[1] = 0;
        defaultStyle3 = style1;

        if (defaultStyle2 == defaultStyle3){
            defaultStyle2 = defaultStyle;
        } else if (defaultStyle1 == defaultStyle3){
            defaultStyle1 = defaultStyle;
        }
    }else if (checked == 2)
    {
        ui->answ_4_6->setStyleSheet("#answ_4_6{" + style2 + "}");

        second[1] = 1;
        defaultStyle3 = style2;

        if (defaultStyle2 == defaultStyle3){
            defaultStyle2 = defaultStyle;
        } else if (defaultStyle1 == defaultStyle3){
            defaultStyle1 = defaultStyle;
        }
    }
    else if (checked == 3)
    {
        ui->answ_4_6->setStyleSheet("#answ_4_6{" + style3 + "}");

        second[1] = 0;
        defaultStyle3 = style3;

        if (defaultStyle2 == defaultStyle3){
            defaultStyle2 = defaultStyle;
        } else if (defaultStyle1 == defaultStyle3){
            defaultStyle1 = defaultStyle;
        }
    }

    ui->answ_4_4->setStyleSheet("#answ_4_4{" + defaultStyle1 + "} #answ_4_4:hover{" + defaultStyle3 + "}");
    ui->answ_4_5->setStyleSheet("#answ_4_5{" + defaultStyle2 + "} #answ_4_5:hover{" + defaultStyle3 + "}");

}


void DPA::on_answ_5_1_textChanged(const QString &arg1)
{
    if (arg1 == "2"){
        third[0] = 1;
    } else third[0] = 0;
}

void DPA::on_answ_5_2_textChanged(const QString &arg1)
{
    if (arg1 == "3"){
        third[1] = 1;
    } else third[1] = 0;
}

void DPA::on_answ_5_3_textChanged(const QString &arg1)
{
    if (arg1 == "1"){
        third[2] = 1;
    } else third[2] = 0;
}


void DPA::on_answ_6_1_textChanged(const QString &arg1)
{
    if (arg1 == "704"){
        forth[0] = 1;
    } else forth[0] = 0;
}

void DPA::on_answ_6_2_textChanged(const QString &arg1)
{
    if (arg1 == "18304"){
        forth[1] = 1;
    } else forth[1] = 0;
}

void DPA::on_answ_6_3_textChanged(const QString &arg1)
{
    if (arg1 == "13697"){
        forth[2] = 1;
    } else forth[2] = 0;
}


void DPA::on_answ_7_1_1_textChanged(const QString &arg1)
{
    if (arg1 == "36/2*3=54"){
        last[0] = 1;
    } else last[0] = 0;
}

void DPA::on_answ_7_1_2_textChanged(const QString &arg1)
{
    if (arg1 == "д."){
        last[1] = 1;
    } else last[1] = 0;
}

void DPA::on_answ_7_1_3_textChanged(const QString &arg1)
{
    if (arg1 == "росте в саду"){
        last[2] = 1;
    } else last[2] = 0;
}

void DPA::on_answ_7_2_1_textChanged(const QString &arg1)
{
    if (arg1 == "36-24=12"){
        last[3] = 1;
    }else  last[3] = 0;
}

void DPA::on_answ_7_2_2_textChanged(const QString &arg1)
{
    if (arg1 == "гр."){
        last[4] = 1;
    } else last[4] = 0;
}

void DPA::on_answ_7_2_3_textChanged(const QString &arg1)
{
    if (arg1 == "росте в саду"){
        last[5] = 1;
    } else last[5] = 0;
}

void DPA::on_answ_7_3_1_textChanged(const QString &arg1)
{
    if (arg1 == "36+12=48"){
        last[6] = 1;
    } else last[6] = 0;
}

void DPA::on_answ_7_3_2_textChanged(const QString &arg1)
{
    if (arg1 == "ябл. і гр."){
        last[7] = 1;
    } else last[7] = 0;
}

void DPA::on_answ_7_3_3_textChanged(const QString &arg1)
{
    if (arg1 == "разом в саду"){
        last[8] = 1;
    } else last[8] = 0;
}

void DPA::on_answ_7_3_6_textChanged(const QString &arg1)
{
    if (arg1 == "54-48=6"){
        last[9] = 1;
    } else last[9] = 0;
}

void DPA::on_answ_7_3_5_textChanged(const QString &arg1)
{
    if (arg1 == "сл."){
        last[10] = 1;
    } else last[10] = 0;
}
void DPA::on_answ_7_3_4_textChanged(const QString &arg1)
{
    if (arg1 == "у саду росте 6 слив"){
        last[11] = 1;
    } else last[11] = 0;
}

void DPA::on_printButton_clicked()
{
        QString file = ":/res/DPA.pdf";
        QDesktopServices::openUrl(QUrl::fromLocalFile(file));
}
