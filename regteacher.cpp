#include "regteacher.h"
#include "ui_regteacher.h"
#include "teacherspage.h"
#include "authorizteacher.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>

#include "QMessageBox"


RegTeacher::RegTeacher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegTeacher)
{
    ui->setupUi(this);
    name = "";
    number = "";
    school = "";


    // -------------------------------------------------------- LOGO & ICON --------------------//
            this->setWindowTitle(" Registration ");
            QIcon winIcon(":/res/img/mainYellowLogo.ico");
            this->setWindowIcon(winIcon);
    // -------------------------------------------------------- LOGO & ICON --------------------//


}

RegTeacher::~RegTeacher()
{
    delete ui;
}


void RegTeacher::on_nameEdit_textChanged(const QString &arg1)
{
    name = arg1;
}

void RegTeacher::on_name2Edit_textChanged(const QString &arg1)
{
    name2 = arg1;
}

void RegTeacher::on_name3Edit_textChanged(const QString &arg1)
{
    name3 = arg1;
}

void RegTeacher::on_numberEdit_textChanged(const QString &arg1)
{
    number = arg1;
}

void RegTeacher::on_passwordEdit_textChanged(const QString &arg1)
{
    pass = arg1;
}

void RegTeacher::on_schoolEdit_textChanged(const QString &arg1)
{
    school = arg1;
}

void RegTeacher::on_readyButton_clicked()
{

    // ------------------------------------------------------------ ERROR CHECKING ------------------------//
    if (!(pass.length()==8)){
        ui->passwordEdit->setStyleSheet("background-color: #C34129;"
                                        "font: 15pt 'Yu Gothic UI Light';"
                                        "color: white;");
        ui->passwordEdit->setPlaceholderText(" Ваш пароль має містити 8 символів");
        ui->passwordEdit->setText("");
        next = false;
    } else next = true;
    if (name.length()<1){
        ui->nameEdit->setStyleSheet("background-color: #C34129;"
                                    "font: 15pt 'Yu Gothic UI Light';"
                                    "color: white;");
        ui->nameEdit->setPlaceholderText(" Вкажіть своє ім'я");
        ui->nameEdit->setText("");
        next = false;
    } else next = true;
    if (name2.length()<1){
        ui->name2Edit->setStyleSheet("background-color: #C34129;"
                                    "font: 15pt 'Yu Gothic UI Light';"
                                    "color: white;");
        ui->name2Edit->setPlaceholderText(" Вкажіть своє прізвище");
        ui->name2Edit->setText("");
        next = false;
    } else next = true;
    if (name3.length()<1){
        ui->name3Edit->setStyleSheet("background-color: #C34129;"
                                    "font: 15pt 'Yu Gothic UI Light';"
                                    "color: white;");
        ui->name3Edit->setPlaceholderText(" Вкажіть своє ім'я по батькові");
        ui->name3Edit->setText("");
        next = false;
    } else next = true;
    if ((number.length()!=13)&&(number.length()!=10)){
        ui->numberEdit->setStyleSheet("background-color: #C34129;"
                                      "font: 15pt 'Yu Gothic UI Light';"
                                      "color: white;");
        ui->numberEdit->setPlaceholderText(" Помилка в номері");
        ui->numberEdit->setText("");
        next = false;
    } else next = true;
    // ------------------------------------------------------------ ERROR CHECKING ------------------------//

    // ------------------------------------------------------------ DATABASE -------------------------------//

if(next == true){

    YMDatabase = QSqlDatabase::addDatabase("QSQLITE");
    YMDatabase.setDatabaseName("DATA.db");
    YMDatabase.open();
    {
        QSqlQuery getIDnum;
        getIDnum.prepare("SELECT * FROM Teacher");
        getIDnum.exec();
        while (getIDnum.next()) {
            id++;
        }
        ID.setNum(id);

        QSqlQuery insertID;
        insertID.prepare("INSERT INTO Teacher(id, Name, Name2, Name3, Number, School, Pass) VALUES("
                         "'"+ID+"', '"+name+"', '"+name2+"','"+name3+"', '"+number+"', '"+school+"', '"+pass+"')");
        insertID.exec();
    }
    YMDatabase.close();
    QSqlDatabase::removeDatabase("DATA.db");

    // ------------------------------------------------------------ DATABASE -------------------------------//

    // ------------------------------------------------------------ GO TO HOME PAGE -------------------------//

    TeachersPage teacherspage(nullptr, ID);
    this->close();
    teacherspage.exec();
    }

    // ------------------------------------------------------------ GO TO HOME PAGE -------------------------//

}

void RegTeacher::on_autorizButton_clicked()
{
    AuthorizTeacher AuthorizTWin;
    //AuthorizTWin.setModal(true);
    this->close();
    AuthorizTWin.exec();
}
