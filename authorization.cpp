#include "authorization.h"
#include "ui_authorization.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include "QDebug"
#include "registration.h"
#include "home.h"

Authorization::Authorization(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Authorization)
{
    ui->setupUi(this);
    //this->showMaximized();
    // -------------------------------------------------------- LOGO & ICON --------------------//
            this->setWindowTitle(" Authorization ");
            QIcon winIcon(":/res/img/mainYellowLogo.ico");
            this->setWindowIcon(winIcon);
    // -------------------------------------------------------- LOGO & ICON --------------------//
//ID="0";
}

Authorization::~Authorization()
{
    delete ui;
}

void Authorization::on_registrationButton_clicked()
{
    Registration RegWin;
    RegWin.setModal(true);
    this->close();
    RegWin.exec();
}

void Authorization::on_numberEdit_textChanged(const QString &arg1)
{
    number = arg1;
}

void Authorization::on_passwordEdit_textChanged(const QString &arg1)
{
    pass = arg1;
}

void Authorization::on_readyButton_clicked()
{
    number.remove("+");

            // ------------------------------- CHECKING NUMBER AND PASSWORD WITH INFO IN DB -------------------------//
    check = "none";

    YMDatabase = QSqlDatabase::addDatabase("QSQLITE");
    YMDatabase.setDatabaseName("DATA.db");
    YMDatabase.open();
       {
            QSqlQuery checkNUM;
            checkNUM.exec("SELECT Ph_num, id FROM Students where Ph_num = '"+number+"'");
            while (checkNUM.next()) {
                check = "num";
                ID = checkNUM.value(1).toString();
                }
            QSqlQuery checkQuery;
            checkQuery.exec("SELECT * FROM Students where Ph_num = '"+number+"' and password = '"+pass+"' and id = '"+ID+"'");
            while (checkQuery.next()) {
                check = "both";
            }

            // ------------------------------- CHECKING NUMBER AND PASSWORD WITH INFO IN DB -------------------------//

            // -------------------------------------------------------------- ERRORS OUTPUT -------------------------//
            if (check == "none")
            {
                 ui->numberEdit->setStyleSheet("background-color: #C34129;"
                                               "font: 15pt 'Yu Gothic UI Light';"
                                               "color: white;");
                 ui->passwordEdit->setStyleSheet("background-color: #C34129;"
                                               "font: 15pt 'Yu Gothic UI Light';"
                                               "color: white;");
                 ui->passwordEdit->setPlaceholderText(" Пароль неправильний");
                 ui->passwordEdit->setText("");
                 ui->numberEdit->setPlaceholderText(" Такий номер відсутній");
                 ui->numberEdit->setText("");
            }
            else if (check == "pass")
            {
                ui->numberEdit->setStyleSheet("background-color: #C34129;"
                                                "font: 15pt 'Yu Gothic UI Light';"
                                                "color: white;");
                ui->passwordEdit->setStyleSheet("background-color: white;"
                                                "font: 15pt 'Yu Gothic UI Light';"
                                                "color: black;");
                ui->numberEdit->setPlaceholderText(" Такий номер відсутній");
                ui->numberEdit->setText("");
            }
            else if (check == "num")
            {
                ui->passwordEdit->setStyleSheet("background-color: #C34129;"
                                                "font: 15pt 'Yu Gothic UI Light';"
                                                "color: white;");
                ui->numberEdit->setStyleSheet("background-color: white;"
                                                "font: 15pt 'Yu Gothic UI Light';"
                                                "color: black;");
                ui->passwordEdit->setPlaceholderText(" Пароль неправильний");
                ui->passwordEdit->setText("");
            }
            // -------------------------------------------------------------- ERRORS OUTPUT -------------------------//


            // ------------------------------------------------------------ GO TO HOME PAGE -------------------------//
            else if (check == "both")
            {
                YMDatabase.close();
                QSqlDatabase::removeDatabase("DATA.db");
                //ui->infoLabel->setText(ID);
                Home homeWin(nullptr, ID);
                this->close();
                homeWin.exec();
            }

    }

    }
            // ------------------------------------------------------------ GO TO HOME PAGE -------------------------//


