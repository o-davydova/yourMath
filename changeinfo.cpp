#include "changeinfo.h"
#include "ui_changeinfo.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include "QMessageBox"

#include "home.h"

changeInfo::changeInfo(QWidget *parent, QString uid) :
    QDialog(parent),
    ui(new Ui::changeInfo)
{
    ui->setupUi(this);
    ID = uid;
    // -------------------------------------------------------- LOGO & ICON ----------------------//
            this->setWindowTitle("  ");
            QIcon winIcon(":/res/img/mainYellowLogo.ico");
            this->setWindowIcon(winIcon);
    // -------------------------------------------------------- LOGO & ICON ----------------------//
    // ------------------------------------------------------------ DATABASE -------------------------------//
            YMDatabase = QSqlDatabase::addDatabase("QSQLITE");
            YMDatabase.setDatabaseName("DATA.db");
            YMDatabase.open();

{
            QSqlQuery getTeachers;
            getTeachers.exec("SELECT Name2, Name, Name3 FROM Teacher");
                while(getTeachers.next()){
                    teacher = getTeachers.value(0).toString() + " " + getTeachers.value(1).toString()+ " " + getTeachers.value(2).toString();
                    this->ui->teacherBox->addItem(teacher);
                }
            //QMessageBox::information(this, "", ID);
            QSqlQuery getInfo;
            getInfo.exec("SELECT Name, Sec_Name, Ph_num, teacher, password, Age, Grade from Students WHERE id = '"+ID+"'");
                 while (getInfo.next()) {
                     name = getInfo.value(0).toString();
                     name2 = getInfo.value(1).toString();
                     number = getInfo.value(2).toString();
                     teacherID = getInfo.value(3).toString();
                     TeacherIdInt = getInfo.value(3).toInt();
                     pass = getInfo.value(4).toString();
                     age = getInfo.value(5).toString();
                     grade = getInfo.value(6).toString();
                 }
}           YMDatabase.close();
            QSqlDatabase::removeDatabase("DATA.db");
// ------------------------------------------------------------ DATABASE -------------------------------//
            ui->AgeEdit->setValue(age.toInt());
            ui->nameEdit->setText(name);
            ui->name2Edit->setText(name2);
            ui->teacherBox->setCurrentIndex(teacherID.toInt()-1);
            ui->gradeEdit->setValue(grade.toInt());
            ui->numberEdit->setText("+"+number);
            newPass = pass;
            oldPass = pass;
}

changeInfo::~changeInfo()
{
    delete ui;
}

void changeInfo::on_readyButton_clicked()
{// ------------------------------------------------------------ ERROR CHECKING ------------------------//
    if (pass!=oldPass)
    {
        //qDebug("xosx");
        ui->passEdit->setStyleSheet("background-color: #C34129;"
                                        "font: 15pt 'Yu Gothic UI Light';"
                                        "color: white;");
        ui->passEdit->setPlaceholderText(" Пароль введено невірно");
        ui->passEdit->setText("");
        next = false;
    } else if (newPass.length()!=8){
//        qDebug("xosx");
        ui->newPassEdit->setStyleSheet("background-color: #C34129;"
                                        "font: 15pt 'Yu Gothic UI Light';"
                                        "color: white;");
        ui->newPassEdit->setPlaceholderText(" Твій новий пароль має містити 8 символів");
        ui->newPassEdit->setText("");
        next = false;
    } else if (name.length()<1){
        ui->nameEdit->setStyleSheet("background-color: #C34129;"
                                    "font: 15pt 'Yu Gothic UI Light';"
                                    "color: white;");
        ui->nameEdit->setPlaceholderText(" Вкажи своє ім'я");
        ui->nameEdit->setText("");
        next = false;
    } else if (number.length()!=13){
        ui->numberEdit->setStyleSheet("background-color: #C34129;"
                                      "font: 15pt 'Yu Gothic UI Light';"
                                      "color: white;");
        ui->numberEdit->setPlaceholderText(" Помилка в номері");
        ui->numberEdit->setText("");
        next = false;
    } else next = true;
    // ------------------------------------------------------------ ERROR CHECKING ------------------------//
    // ------------------------------------------------------------ DATABASE -------------------------------//

    if (next == true)
    {
        YMDatabase = QSqlDatabase::addDatabase("QSQLITE");
        YMDatabase.setDatabaseName("DATA.db");
        YMDatabase.open();
        if (YMDatabase.open())
        {
            QSqlQuery updateInfo;
            updateInfo.exec("UPDATE Students SET teacher = '"+teacherID+"', password = '"+newPass+"', Name = '"+name+"',"
                            " Sec_Name = '"+name2+"', Ph_num = '"+number+"', Age = '"+age+"', Grade = '"+grade+"' WHERE id = '"+ID+"'");
            //QMessageBox::information(this, "", grade);
        }
        YMDatabase.close();
        QSqlDatabase::removeDatabase("DATA.db");

        Home homeWin(nullptr, ID);
        this->close();
        homeWin.exec();
    }
    // ------------------------------------------------------------ DATABASE -------------------------------//
}


void changeInfo::on_teacherBox_currentIndexChanged(int index)
{
    teacherID.setNum(index+1);
}

void changeInfo::on_teacherBox_currentTextChanged(const QString &arg1)
{
    teacher = arg1;
}

void changeInfo::on_nameEdit_textChanged(const QString &arg1)
{
    name = arg1;
}

void changeInfo::on_numberEdit_textChanged(const QString &arg1)
{
    number = arg1;
}

void changeInfo::on_passEdit_textChanged(const QString &arg1)
{
    oldPass = arg1;
    newPass = " ";
    ui->newPassEdit->setText("");
}

void changeInfo::on_newPassEdit_textChanged(const QString &arg1)
{
    newPass = arg1;
}

void changeInfo::on_AgeEdit_valueChanged(const QString &arg1)
{
    age = arg1;
}

void changeInfo::on_gradeEdit_valueChanged(const QString &arg1)
{
    grade = arg1;
}
