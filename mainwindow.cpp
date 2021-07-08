#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMovie"
#include "QTimer"

#include <QSqlError>
#include <QSqlDatabase>
#include <QDebug>
#include <QFileInfo>
#include <QSqlQuery>
#include <QString>
#include <QSqlQueryModel>

#include "registration.h"
#include "authorization.h"
#include "home.h"
#include "regteacher.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    if (ask == true){
        Authorization authorization;
        this->close();
        delete ui;
        authorization.exec();
    }

    authorization = new Authorization;
    registration = new Registration;
    home = new Home;

    connect(ui->noButton, SIGNAL(clicked()), authorization, SLOT(show()));
    connect(ui->yesButton, SIGNAL(clicked()), registration, SLOT(show()));

//    YmDatabase = QSqlDatabase::addDatabase("QSQLITE");
//    YmDatabase.setDatabaseName("D:/for losers/diploma/diploma/DB/YM.db");
//    YmDatabase.open();
//if (YmDatabase.open()) qDebug("yeeeeee");z

    //this->showMaximized();

    // -------------------------------------------------------- LOGO & ICON -----------------------------------//
            this->setWindowTitle("  ");
            QIcon winIcon(":/res/img/mainYellowLogo.ico");
            this->setWindowIcon(winIcon);
    // -------------------------------------------------------- LOGO & ICON -----------------------------------//


    // -------------------------------------------------------- GIF in lable ----------------------------------//
            //QMovie *Hellomovie = new QMovie(":/res/img/c7bbf0cfeba0a0a70ccd52a36a736845_w200.gif");
            //ui->HelloGif->setMovie(Hellomovie);
           // Hellomovie->start();
    // -------------------------------------------------------- GIF in lable ----------------------------------//
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_yesButton_clicked()
{
    hide();
    answ = 1;
}

void MainWindow::on_noButton_clicked()
{
    hide();
    answ = 0;
}

void MainWindow::on_stopAsk_stateChanged(int arg1)
{
    if(arg1 == 2){
        ask = true;
    } else ask = false;
    QString a;
    a.setNum(ask);
    ui->noButton->setText(a);
}

void MainWindow::on_teacherButton_clicked()
{
    RegTeacher regTeachPage;
    this->close();
    regTeachPage.exec();
}

