#include "registration.h"
#include "ui_registration.h"
#include "QMovie"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>

#include "authorization.h"
#include "levels.h"
#include "home.h"
#include "mainwindow.h"
#include "QMessageBox"


Registration::Registration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Registration)
{
    ui->setupUi(this);
    //connect(ui->readyButton, SIGNAL(clicked()), this, SLOT(onButtonSend())); // подключаем клик по кнопке к определенному нами слоту
    age = '5';
    grade = '1';
    name = "";
    number = "";
    teacherID = "1";


    // -------------------------------------------------------- LOGO & ICON ----------------------//
            this->setWindowTitle("  ");
            QIcon winIcon(":/res/img/mainYellowLogo.ico");
            this->setWindowIcon(winIcon);
    // -------------------------------------------------------- LOGO & ICON ----------------------//
// ------------------------------------------------------------ DATABASE -------------------------------//
            YMDatabase = QSqlDatabase::addDatabase("QSQLITE");
            YMDatabase.setDatabaseName("DATA.db");
            YMDatabase.open();


            QSqlQuery getTeachers;
            getTeachers.exec("SELECT Name2, Name, Name3 FROM Teacher");
            while(getTeachers.next()){
                teacher = getTeachers.value(0).toString() + " " + getTeachers.value(1).toString()+ " " + getTeachers.value(2).toString();
                this->ui->comboTeach->addItem(teacher);
            }

// ------------------------------------------------------------ DATABASE -------------------------------//

//    QMovie *pointMovie = new QMovie(":/res/img/point.gif");
//    ui->pointGif->setMovie(pointMovie);
//    pointMovie->start();


}

Registration::~Registration()
{
    delete ui;
}

void Registration::on_autorizButton_clicked()
{
    Authorization AuthorizWin;
    AuthorizWin.setModal(true);
    this->close();
    AuthorizWin.exec();
}

void Registration::on_readyButton_clicked()
{

    // ------------------------------------------------------------ ERROR CHECKING ------------------------//
    if (!(pass.length()==8)){
        ui->passwordEdit->setStyleSheet("background-color: #C34129;"
                                        "font: 15pt 'Yu Gothic UI Light';"
                                        "color: white;");
        ui->passwordEdit->setPlaceholderText(" Твій пароль має містити 8 символів");
        ui->passwordEdit->setText("");
        next = false;
    } else next = true;
    if (name.length()<1){
        ui->nameEdit->setStyleSheet("background-color: #C34129;"
                                    "font: 15pt 'Yu Gothic UI Light';"
                                    "color: white;");
        ui->nameEdit->setPlaceholderText(" Вкажи своє ім'я");
        ui->nameEdit->setText("");
        next = false;
    } else next = true;
    if (number.length()!=13){
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

    {
        YMDatabase = QSqlDatabase::addDatabase("QSQLITE");
        YMDatabase.setDatabaseName("DATA.db");
        YMDatabase.open();

        if (YMDatabase.open()) qDebug("yeeeeee");

        QSqlQuery getID;
        getID.exec("SELECT * FROM Students");
        while (getID.next()) {
           id++;
        }
        ID.setNum(id);
        QSqlQuery insertID;
        insertID.prepare("INSERT INTO Students(id, teacher, password, Name,"
                         " Sec_Name, Ph_num, Age, Grade) VALUES('"+ID+"','"+teacherID+"',"
                         "'"+pass+"', '"+name+"', '"+name2+"', '"+number+"', "
                         "'"+age+"', '"+grade+"')");
        insertID.exec();

        /*QSqlQuery getTeacherID;
        getTeacherID.exec("SELECT id FROM Teacher WHERE Name = '"+teacherName+"' AND Name3 = '"+teacherName3+"'");
        while(getTeacherID.next()){
            teacherID = getTeacherID.value(0).toString();
            QMessageBox::information(this, "", teacherID);
        }*/
    }
    YMDatabase.close();
    QSqlDatabase::removeDatabase("DATA.db");
    // ------------------------------------------------------------ DATABASE -------------------------------//

    // ------------------------------------------------------------ GO TO HOME PAGE -------------------------//
    Home homeWin(nullptr, ID);
    this->close();
    homeWin.exec();
    }
    // ------------------------------------------------------------ GO TO HOME PAGE -------------------------//
}


void Registration::on_name2Edit_textChanged(const QString &arg1)
{
    name2 = arg1;
}
void Registration::on_numberEdit_textChanged(const QString &arg1)
{
    number = arg1;
}

void Registration::on_ageBox_valueChanged(const QString &arg1)
{
    age = arg1;
}

void Registration::on_gradeBox_valueChanged(const QString &arg1)
{
    grade = arg1;
}

void Registration::on_passwordEdit_textChanged(const QString &arg1)
{
    pass = arg1;
}

void Registration::on_nameEdit_textChanged(const QString &arg1)
{
    name = arg1;
}

void Registration::on_comboTeach_currentTextChanged(const QString &arg1)
{
    teacher = arg1;
}

void Registration::on_comboTeach_currentIndexChanged(int index)
{
    teacherID.setNum(index+1);
}
