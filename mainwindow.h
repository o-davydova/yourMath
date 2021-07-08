#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QSqlDatabase>
#include <QMainWindow>
#include <QDebug>
#include "authorization.h"
#include "registration.h"
#include "home.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
   // QSqlDatabase YmDatabase;

private slots:
    void on_yesButton_clicked();
    void on_noButton_clicked();
    void on_stopAsk_stateChanged(int arg1);
    void on_teacherButton_clicked();

public slots:

private:
    Ui::MainWindow *ui;
    Authorization *authorization;
    Registration *registration;
    Home *home;
    bool ask = 0;                           //=0 для презы
    bool answ;
};
#endif // MAINWINDOW_H
