#include "authorizteacher.h"
#include "ui_authorizteacher.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include "QMessageBox"
#include "regteacher.h"
#include "teacherspage.h"

AuthorizTeacher::AuthorizTeacher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AuthorizTeacher)
{
    ui->setupUi(this);
    YMDatabase = QSqlDatabase::addDatabase("QSQLITE");
    YMDatabase.setDatabaseName("DATA.db");
    YMDatabase.open();
    // -------------------------------------------------------- LOGO & ICON ----------------------//
            this->setWindowTitle(" Authorization ");
            QIcon winIcon(":/res/img/mainYellowLogo.ico");
            this->setWindowIcon(winIcon);
    // -------------------------------------------------------- LOGO & ICON ----------------------//
}

AuthorizTeacher::~AuthorizTeacher()
{
    delete ui;
}

void AuthorizTeacher::on_registrationButton_clicked()
{
    RegTeacher RegWin;
    RegWin.setModal(true);
    this->close();
    RegWin.exec();
}


void AuthorizTeacher::on_numberEdit_textChanged(const QString &arg1)
{
    number = arg1;
}

void AuthorizTeacher::on_passwordEdit_textChanged(const QString &arg1)
{
    pass = arg1;
}

void AuthorizTeacher::on_readyButton_clicked()
{
            number.remove("+");

            // ------------------------------- CHECKING NUMBER AND PASSWORD WITH INFO IN DB -------------------------//
            check = "none";

            QSqlQuery checkNUM;
            checkNUM.exec("SELECT Number, id FROM Teacher where Number = '"+number+"'");
            while (checkNUM.next()) {
                check = "num";
                ID = checkNUM.value(1).toString();
                }

            QSqlQuery checkQuery;
            checkQuery.exec("SELECT Number FROM Teacher where Number = '"+number+"' and Pass = '"+pass+"' and id = '"+ID+"'");
            while (checkQuery.next()) {
                check = "both";
            }
            // ------------------------------- CHECKING NUMBER AND PASSWORD WITH INFO IN DB -------------------------//
            // ----------------------------------------------- ERRORS OUTPUT ----------------------------------------//
            if (check == "none")
            {
                 ui->numberEdit->setStyleSheet("background-color: #C34129;"
                                               "font: 15pt 'Yu Gothic UI Light';"
                                               "color: white;");
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
            // ----------------------------------------------- ERRORS OUTPUT ----------------------------------------//
            // ---------------------------------------------- GO TO HOME PAGE ---------------------------------------//
            else if (check == "both")
            {
            YMDatabase.close();
            QSqlDatabase::removeDatabase("DATA.db");

            TeachersPage teachersWin(nullptr, ID);
            this->close();
            teachersWin.exec();
            }
            // ---------------------------------------------- GO TO HOME PAGE ---------------------------------------//

        //ui->infoLabel->setText(ID);

        }


