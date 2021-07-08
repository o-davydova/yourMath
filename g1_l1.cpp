#include "g1_l1.h"
#include "ui_g1_l1.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include "QMessageBox"
#include <QDesktopServices>
#include <QUrl>

#include "home.h"
#include "result.h"

G1_L1::G1_L1(QWidget *parent, QString uid) :
    QDialog(parent),
    ui(new Ui::G1_L1)
{
    ui->setupUi(this);
    ID = uid;
//QMessageBox::information(this, "", ID);

    this->setWindowTitle("LEVEL 1 GRADE 1");
    QIcon winIcon(":/res/img/mainYellowLogo.ico");
    this->setWindowIcon(winIcon);

    // ------------------------------------------------------------ DATABASE -------------------------------//

        YMDatabase = QSqlDatabase::addDatabase("QSQLITE");
        YMDatabase.setDatabaseName("DATA.db");
        YMDatabase.open();

        if (ID != ""){
                    QSqlQuery findStudent;
                    findStudent.exec("SELECT Name, Grade, Level FROM Students where id = '"+ID+"'");
                    while (findStudent.next()) {
                        name = findStudent.value(0).toString();
                        grade = 1;
                        level = findStudent.value(2).toString();
                        }

                    QSqlQuery findResult;
                    findResult.exec("SELECT Grade, Level FROM Results where IDnum = '"+ID+"'");
                    while (findResult.next()) {
                        gradeR = findResult.value(0).toString();
                        levelR = findResult.value(1).toString();
                        if (gradeR == '1' && levelR == '1'){
                            ready = 1;

                        }
                        }
        }

        if (ready == 0){
        QSqlQuery insertInfo;
        insertInfo.prepare("INSERT INTO Results(IDnum, Level, Grade) VALUES('"+ID+"', 1, 1)");
        insertInfo.exec();
        ready = 1;
        }

    // ------------------------------------------------------------ DATABASE -------------------------------//

}

G1_L1::~G1_L1()
{
    delete ui;
}

void G1_L1::on_homeButton_clicked()
{
    //QMessageBox::information(this, " ", ID);
    Home homeWin(nullptr, ID);
    this->close();
    homeWin.exec();
}




void G1_L1::on_nextButton_clicked()
{
    if (lev == 0){
        point = 0;
    }
    solution *= 20;
    point += solution;
    lev++;
    Solution.setNum(point);
    //ui->homeButton->setText(Solution);

    // ------------------------------------------------------------ DATABASE -------------------------------//
    QSqlQuery updInfo;
    updInfo.prepare("UPDATE Results SET Point = '"+Solution+"' where IDnum = '"+ID+"' and Grade = 1 and Level = 1");
    updInfo.exec();

    // ------------------------------------------------------------ DATABASE -------------------------------//
    if (lev == 0){
        ui->backButton->hide();
    }
    else ui->backButton->show();

    if(lev == 1){
    ui->answ_1->setStyleSheet("#answ_1{"
                              "background-image: url(:/res/img/BG.png);"
                              "image: url(:/res/img/yellow_plane_1.png);"
                              "border: 0px;}"
                              "#answ_1:hover{"
                              "image: url(:/res/img/yellow_plane_2.png);}");
    ui->answ_4->setStyleSheet("#answ_4{"
                              "background-image: url(:/res/img/BG.png);"
                              "image: url(:/res/img/yellow_plane_1.png);"
                              "border: 0px;}"
                              "#answ_4:hover{"
                              "image: url(:/res/img/yellow_plane_2.png);}");
    ui->answ_7->setStyleSheet("#answ_7{"
                              "background-image: url(:/res/img/BG.png);"
                              "image: url(:/res/img/yellow_plane_1.png);"
                              "border: 0px;}"
                              "#answ_7:hover{"
                              "image: url(:/res/img/yellow_plane_2.png);}");
    ui->answ_2->setStyleSheet("#answ_2{"
                              "background-image: url(:/res/img/BG.png);"
                              "image: url(:/res/img/purple_plane_1.png);"
                              "border: 0px;}"
                              "#answ_2:hover{"
                              "image: url(:/res/img/purple_plane_2.png);}");
    ui->answ_5->setStyleSheet("#answ_5{"
                              "background-image: url(:/res/img/BG.png);"
                              "image: url(:/res/img/purple_plane_1.png);"
                              "border: 0px;}"
                              "#answ_5:hover{"
                              "image: url(:/res/img/purple_plane_2.png);}");
    ui->answ_3->setStyleSheet("#answ_3{"
                              "background-image: url(:/res/img/BG.png);"
                              "image: url(:/res/img/green_plane_1.png);"
                              "border: 0px;}"
                              "#answ_3:hover{"
                              "image: url(:/res/img/green_plane_2.png);}");
    ui->answ_6->setStyleSheet("#answ_6{"
                              "background-image: url(:/res/img/BG.png);"
                              "image: url(:/res/img/green_plane_1.png);"
                              "border: 0px;}"
                              "#answ_6:hover{"
                              "image: url(:/res/img/green_plane_2.png);}");
    ui->task->setText("Знайди літачок, що летить перед третім.");
    ui->answ_1->setText("");
    ui->answ_2->setText("");
    ui->answ_3->setText("");
    ui->answ_4->setText("");
    ui->answ_5->setText("");
    ui->answ_6->setText("");
    ui->answ_7->setText("");
    }

    else if (lev == 2){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
        ui->task->setText("Обери, яку квітку треба прибрати, щоб зрівняти обидві групи.");
        ui->answ_1->setText("");
        ui->answ_2->setText("");
        ui->answ_3->setText("");
        ui->answ_4->setText("");
        ui->answ_5->setText("");
        ui->answ_6->setText("");
        ui->answ_7->setText("");
    }else if (lev == 3){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "color: white;"
                                  "border: 0px;"
                                  "font: 40pt 'Yu Gothic UI Semilight';}"
                                  "#answ_1:hover{"
                                  "color: black;}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "color: white;"
                                  "border: 0px;"
                                  "font: 40pt 'Yu Gothic UI Semilight';}"
                                  "#answ_2:hover{"
                                  "color: black;}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "color: white;"
                                  "border: 0px;"
                                  "font: 40pt 'Yu Gothic UI Semilight';}"
                                  "#answ_3:hover{"
                                  "color: black;}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "color: white;"
                                  "border: 0px;"
                                  "font: 40pt 'Yu Gothic UI Semilight';}"
                                  "#answ_4:hover{"
                                  "color: black;}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "color: white;"
                                  "border: 0px;"
                                  "font: 40pt 'Yu Gothic UI Semilight';}"
                                  "#answ_5:hover{"
                                  "color: black;}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "color: white;"
                                  "border: 0px;"
                                  "font: 40pt 'Yu Gothic UI Semilight';}"
                                  "#answ_6:hover{"
                                  "color: black;}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "color: white;"
                                  "border: 0px;"
                                  "font: 40pt 'Yu Gothic UI Semilight';}"
                                  "#answ_7:hover{"
                                  "color: black;}");
        ui->task->setText("Порахуй усі двійки: 2 5 8 2 2 2 9 4 2 6 2.");
        ui->answ_1->setText("1");
        ui->answ_2->setText("2");
        ui->answ_3->setText("3");
        ui->answ_4->setText("4");
        ui->answ_5->setText("5");
        ui->answ_6->setText("6");
        ui->answ_7->setText("7");
    } else if(lev == 4){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pear_1.png);"
                                  "border: 0px;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pear_1.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/orange_1.png);"
                                  "border: 0px;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/orange_1.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/orange_1.png);"
                                  "border: 0px;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pear_1.png);"
                                  "border: 0px;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/orange_1.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->task->setText("Натисни на той фрукт, якого більше.");
        ui->answ_1->setText("");
        ui->answ_2->setText("");
        ui->answ_3->setText("");
        ui->answ_4->setText("");
        ui->answ_5->setText("");
        ui->answ_6->setText("");
        ui->answ_7->setText("");
        }

    solution = 0;
    if (lev == 5){
        // ------------------------------------------------------------ SHOW RESULT -------------------------//
        Result resultWin(nullptr, Solution, ID);

        YMDatabase.close();
        QSqlDatabase::removeDatabase("DATA.db");
        this->close();
        resultWin.exec();
        }
        // ------------------------------------------------------------ SHOW RESULT -------------------------//
}
void G1_L1::on_answ_1_clicked()
{
    if (lev == 0){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple2.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple2.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple2.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");

    }
    else if (lev == 1){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/yellow_plane_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/yellow_plane_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/yellow_plane_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/purple_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/purple_plane_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/purple_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/purple_plane_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/green_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/green_plane_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/green_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/green_plane_2.png);}");
    } else if (lev == 2){
        solution = 1;
        ui->answ_1->setStyleSheet("border: 0px;");
        ui->answ_1->setText(" ");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
    } else if (lev == 3) {
    ui->answ_1->setStyleSheet("background-image: url(:/res/img/BGwhite.png);border: 2px solid; border-radius: 5px; font: 40pt 'Yu Gothic UI Semilight';");
    ui->answ_2->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_3->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_4->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_5->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_6->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_7->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    } else if (lev == 4){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/orange_1.png);"
                                  "border: 0px;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/orange_1.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/orange_1.png);"
                                  "border: 0px;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/orange_1.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/orange_2.png);}");
    }
}


void G1_L1::on_answ_2_clicked()
{
    if (lev == 0){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple2.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple2.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");

    }
    else if (lev == 1){
        solution = 1;
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/yellow_plane_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/yellow_plane_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/yellow_plane_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/purple_plane_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/purple_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/purple_plane_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/green_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/green_plane_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/green_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/green_plane_2.png);}");
    } else if (lev == 2){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_2->setStyleSheet("border: 0px;");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
    } else if (lev == 3) {
    ui->answ_2->setStyleSheet("background-image: url(:/res/img/BGwhite.png);border: 2px solid; border-radius: 5px; font: 40pt 'Yu Gothic UI Semilight';");
    ui->answ_1->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_3->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_4->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_5->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_6->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_7->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    } else if (lev == 4){
        solution = 1;
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pear_1.png);"
                                  "border: 0px;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pear_1.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pear_1.png);"
                                  "border: 0px;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/orange_2.png);}");
    }
}

void G1_L1::on_answ_3_clicked()
{
    if (lev == 0){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple2.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple2.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple2.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");

    }
    else if (lev == 1){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/yellow_plane_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/yellow_plane_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/yellow_plane_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/purple_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/purple_plane_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/purple_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/purple_plane_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/green_plane_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/green_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/green_plane_2.png);}");
    } else if (lev == 2){
        solution = 1;
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_3->setStyleSheet("border: 0px;");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
    } else if (lev == 3) {
    ui->answ_3->setStyleSheet("background-image: url(:/res/img/BGwhite.png);border: 2px solid; border-radius: 5px; font: 40pt 'Yu Gothic UI Semilight';");
    ui->answ_2->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_1->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_4->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_5->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_6->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_7->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    } else if (lev == 4){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/orange_1.png);"
                                  "border: 0px;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/orange_1.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/orange_1.png);"
                                  "border: 0px;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/orange_1.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/orange_2.png);}");
    }
}

void G1_L1::on_answ_4_clicked()
{
    if (lev == 0){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple2.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple2.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");

    }
    else if (lev == 1){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/yellow_plane_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/yellow_plane_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/yellow_plane_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/purple_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/purple_plane_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/purple_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/purple_plane_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/green_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/green_plane_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/green_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/green_plane_2.png);}");
    } else if (lev == 2){
        solution = 1;
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_4->setStyleSheet("border: 0px;");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
    } else if (lev == 3) {
    ui->answ_4->setStyleSheet("background-image: url(:/res/img/BGwhite.png);border: 2px solid; border-radius: 5px; font: 40pt 'Yu Gothic UI Semilight';");
    ui->answ_2->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_1->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_3->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_5->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_6->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_7->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    } else if (lev == 4){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/orange_1.png);"
                                  "border: 0px;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/orange_1.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/orange_1.png);"
                                  "border: 0px;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/orange_1.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/orange_2.png);}");
    }
}

void G1_L1::on_answ_5_clicked()
{
    if (lev == 0){
        solution = 1;
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple2.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple2.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple2.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");

    }
    else if (lev == 1){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/yellow_plane_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/yellow_plane_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/yellow_plane_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/purple_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/purple_plane_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/purple_plane_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/green_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/green_plane_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/green_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/green_plane_2.png);}");
    } else if (lev == 2){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_5->setStyleSheet("border: 0px;");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
    } else if (lev == 3) {
    ui->answ_5->setStyleSheet("background-image: url(:/res/img/BGwhite.png);border: 2px solid; border-radius: 5px; font: 40pt 'Yu Gothic UI Semilight';");
    ui->answ_1->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_3->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_4->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_2->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_6->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_7->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    } else if (lev == 4){
        solution = 1;
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pear_1.png);"
                                  "border: 0px;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pear_1.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pear_1.png);"
                                  "border: 0px;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/orange_2.png);}");
    }
}

void G1_L1::on_answ_6_clicked()
{
    if (lev == 0){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple2.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple2.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");

    }
    else if (lev == 1){
        solution = 1;
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/yellow_plane_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/yellow_plane_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/yellow_plane_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/purple_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/purple_plane_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/purple_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/purple_plane_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/green_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/green_plane_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/green_plane_2.png);}");
    } else if (lev == 2){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
        ui->answ_6->setStyleSheet("border: 0px;");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
    } else if (lev == 3) {
        solution = 1;
    ui->answ_6->setStyleSheet("background-image: url(:/res/img/BGwhite.png);border: 2px solid; border-radius: 5px; font: 40pt 'Yu Gothic UI Semilight';");
    ui->answ_1->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_3->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_4->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_5->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_2->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_7->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    } else if (lev == 4){
        solution = 1;
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pear_1.png);"
                                  "border: 0px;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pear_1.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pear_1.png);"
                                  "border: 0px;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/orange_2.png);}");
    }
}

void G1_L1::on_answ_7_clicked()
{
    if (lev == 0){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple2.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple2.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple2.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/red_apple2.png);}");

    }
    else if (lev == 1){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/yellow_plane_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/yellow_plane_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/yellow_plane_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/purple_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/purple_plane_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/purple_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/purple_plane_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/green_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/green_plane_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/green_plane_1.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/green_plane_2.png);}");
    } else if (lev == 2){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
        ui->answ_7->setStyleSheet("border: 0px;");
    } else if (lev == 3) {
    ui->answ_7->setStyleSheet("background-image: url(:/res/img/BGwhite.png);border: 2px solid; border-radius: 5px; font: 40pt 'Yu Gothic UI Semilight';");
    ui->answ_1->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_3->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_4->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_5->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_6->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    ui->answ_2->setStyleSheet("border: 0px; font: 40pt 'Yu Gothic UI Semilight'; color: white;");
    } else if (lev == 4){
        solution = 1;
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pear_1.png);"
                                  "border: 0px;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pear_1.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pear_1.png);"
                                  "border: 0px;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BGwhite.png);"
                                  "border: 2px solid; border-radius: 5px;"
                                  "image: url(:/res/img/orange_2.png);}");
    }
}
void G1_L1::on_backButton_clicked()
{
    lev--;
    // ------------------------------------------------------------ DATABASE -------------------------------//
    QSqlQuery updInfo;
    updInfo.prepare("UPDATE Results SET Point = '"+Solution+"' where IDnum = '"+ID+"'");
    updInfo.exec();

    // ------------------------------------------------------------ DATABASE -------------------------------//
    if (lev == 0){
        ui->backButton->hide();
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple1.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/yellow_apple2.png);");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple2.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple2.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/yellow_apple2.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/yellow_apple1.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/red_apple1.png);"
                                  "border: 0px solid;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/red_apple2.png);}");}
else if(lev == 1){
    ui->answ_1->setStyleSheet("#answ_1{"
                              "background-image: url(:/res/img/BG.png);"
                              "image: url(:/res/img/yellow_plane_1.png);"
                              "border: 0px;}"
                              "#answ_1:hover{"
                              "image: url(:/res/img/yellow_plane_2.png);}");
    ui->answ_4->setStyleSheet("#answ_4{"
                              "background-image: url(:/res/img/BG.png);"
                              "image: url(:/res/img/yellow_plane_1.png);"
                              "border: 0px;}"
                              "#answ_4:hover{"
                              "image: url(:/res/img/yellow_plane_2.png);}");
    ui->answ_7->setStyleSheet("#answ_7{"
                              "background-image: url(:/res/img/BG.png);"
                              "image: url(:/res/img/yellow_plane_1.png);"
                              "border: 0px;}"
                              "#answ_7:hover{"
                              "image: url(:/res/img/yellow_plane_2.png);}");
    ui->answ_2->setStyleSheet("#answ_2{"
                              "background-image: url(:/res/img/BG.png);"
                              "image: url(:/res/img/purple_plane_1.png);"
                              "border: 0px;}"
                              "#answ_2:hover{"
                              "image: url(:/res/img/purple_plane_2.png);}");
    ui->answ_5->setStyleSheet("#answ_5{"
                              "background-image: url(:/res/img/BG.png);"
                              "image: url(:/res/img/purple_plane_1.png);"
                              "border: 0px;}"
                              "#answ_5:hover{"
                              "image: url(:/res/img/purple_plane_2.png);}");
    ui->answ_3->setStyleSheet("#answ_3{"
                              "background-image: url(:/res/img/BG.png);"
                              "image: url(:/res/img/green_plane_1.png);"
                              "border: 0px;}"
                              "#answ_3:hover{"
                              "image: url(:/res/img/green_plane_2.png);}");
    ui->answ_6->setStyleSheet("#answ_6{"
                              "background-image: url(:/res/img/BG.png);"
                              "image: url(:/res/img/green_plane_1.png);"
                              "border: 0px;}"
                              "#answ_6:hover{"
                              "image: url(:/res/img/green_plane_2.png);}");
    ui->task->setText("Знайди літачок, що летить перед третім.");
    ui->answ_1->setText("");
    ui->answ_2->setText("");
    ui->answ_3->setText("");
    ui->answ_4->setText("");
    ui->answ_5->setText("");
    ui->answ_6->setText("");
    ui->answ_7->setText("");
    }

    else if (lev == 2){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/blue_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/blue_flower_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pink_flower_1.png);"
                                  "border: 0px;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/pink_flower_2.png);}");
        ui->task->setText("Обери, яку квітку треба прибрати, щоб зрівняти обидві групи.");
        ui->answ_1->setText("");
        ui->answ_2->setText("");
        ui->answ_3->setText("");
        ui->answ_4->setText("");
        ui->answ_5->setText("");
        ui->answ_6->setText("");
        ui->answ_7->setText("");
    }else if (lev == 3){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "color: white;"
                                  "border: 0px;"
                                  "font: 40pt 'Yu Gothic UI Semilight';}"
                                  "#answ_1:hover{"
                                  "color: black;}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "color: white;"
                                  "border: 0px;"
                                  "font: 40pt 'Yu Gothic UI Semilight';}"
                                  "#answ_2:hover{"
                                  "color: black;}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "color: white;"
                                  "border: 0px;"
                                  "font: 40pt 'Yu Gothic UI Semilight';}"
                                  "#answ_3:hover{"
                                  "color: black;}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "color: white;"
                                  "border: 0px;"
                                  "font: 40pt 'Yu Gothic UI Semilight';}"
                                  "#answ_4:hover{"
                                  "color: black;}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "color: white;"
                                  "border: 0px;"
                                  "font: 40pt 'Yu Gothic UI Semilight';}"
                                  "#answ_5:hover{"
                                  "color: black;}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "color: white;"
                                  "border: 0px;"
                                  "font: 40pt 'Yu Gothic UI Semilight';}"
                                  "#answ_6:hover{"
                                  "color: black;}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "color: white;"
                                  "border: 0px;"
                                  "font: 40pt 'Yu Gothic UI Semilight';}"
                                  "#answ_7:hover{"
                                  "color: black;}");
        ui->task->setText("Порахуй усі двійки: 2 5 8 2 2 2 9 4 2 6 2.");
        ui->answ_1->setText("1");
        ui->answ_2->setText("2");
        ui->answ_3->setText("3");
        ui->answ_4->setText("4");
        ui->answ_5->setText("5");
        ui->answ_6->setText("6");
        ui->answ_7->setText("7");
    } else if(lev == 4){
        ui->answ_1->setStyleSheet("#answ_1{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pear_1.png);"
                                  "border: 0px;}"
                                  "#answ_1:hover{"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_4->setStyleSheet("#answ_4{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pear_1.png);"
                                  "border: 0px;}"
                                  "#answ_4:hover{"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_7->setStyleSheet("#answ_7{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/orange_1.png);"
                                  "border: 0px;}"
                                  "#answ_7:hover{"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_2->setStyleSheet("#answ_2{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/orange_1.png);"
                                  "border: 0px;}"
                                  "#answ_2:hover{"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_5->setStyleSheet("#answ_5{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/orange_1.png);"
                                  "border: 0px;}"
                                  "#answ_5:hover{"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->answ_3->setStyleSheet("#answ_3{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/pear_1.png);"
                                  "border: 0px;}"
                                  "#answ_3:hover{"
                                  "image: url(:/res/img/pear_2.png);}");
        ui->answ_6->setStyleSheet("#answ_6{"
                                  "background-image: url(:/res/img/BG.png);"
                                  "image: url(:/res/img/orange_1.png);"
                                  "border: 0px;}"
                                  "#answ_6:hover{"
                                  "image: url(:/res/img/orange_2.png);}");
        ui->task->setText("Натисни на той фрукт, якого більше.");
        ui->answ_1->setText("");
        ui->answ_2->setText("");
        ui->answ_3->setText("");
        ui->answ_4->setText("");
        ui->answ_5->setText("");
        ui->answ_6->setText("");
        ui->answ_7->setText("");
        }

    solution = 0;
    if (lev == 5){
        // ------------------------------------------------------------ SHOW RESULT -------------------------//
        Result resultWin(nullptr, Solution);
        this->close();
        resultWin.exec();
        }
        // ------------------------------------------------------------ SHOW RESULT -------------------------//
}

void G1_L1::on_printButton_clicked()
{
    QString file = ":/res/1.pdf";
    QDesktopServices::openUrl(QUrl::fromLocalFile(file));
}
