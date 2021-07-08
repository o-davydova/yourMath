#include "result.h"
#include "ui_result.h"


#include "home.h"
#include "g1_l2.h"

Result::Result(QWidget *parent, QString point, QString uid, QString ulevel, QString ugrade, bool dpa) :
    QDialog(parent),
    ui(new Ui::Result)
{
    level = ulevel;
    grade = ugrade;

    this->setWindowTitle("LEVEL "+level+" result");
    //this->setWindowTitle("LEVEL "+ ulevel +" result");
    QIcon winIcon(":/res/img/mainYellowLogo.ico");
    this->setWindowIcon(winIcon);

    ID = uid;
    ui->setupUi(this);
    ui->infoLabel->setText("Твоя оцінка за пройдений "+level+" рівень: \n" + point + "\n Максимальний бал - 100");

    if (dpa == true){
        ui->infoLabel->setText("Бал за ДПА: " + point);
        ui->nextLevButton->hide();
        ui->label_2->setText("Підготовчий тест пройдено!");
    }
}

Result::~Result()
{
    delete ui;
}

void Result::on_homeButton_clicked()
{
    Home homeWin(nullptr, ID);
    this->close();
    homeWin.exec();
}

void Result::on_nextLevButton_clicked()
{
    if (grade == "1"){
        if (level == "1")
        {
            g1_l2 G1_L2(nullptr, ID);
            this->close();
            G1_L2.exec();
        }
    } else if (grade == "2"){
        if (level == "1")
        {

        }
    } else if (grade == "3"){
        if (level == "1")
        {

        }
    } else if (grade == "3"){
        if (level == "1")
        {

        }
    }
}
