#ifndef HOME_H
#define HOME_H
#include <QSqlDatabase>
#include <QDialog>

#include "authorization.h"
#include "registration.h"

namespace Ui {
class Home;
}

class Home : public QDialog
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = nullptr, QString uid = " ");
    ~Home();
    QSqlDatabase YMDatabase;



private slots:
    void on_exitButton_clicked();

    void on_grade_1_clicked();

    void on_changeInfo_clicked();

    void on_grade_2_clicked();

    void on_grade_3_clicked();

    void on_showResults_clicked();

    void on_grade_4_clicked();

private:
    Ui::Home *ui;
    QString ID;
    QString check;
    QString name = "";
    QString grade = "";
    QString DPA = "";
    QString DPApoint = "";
    QString Level = "";
    QString Point = "0";
    int point = 0;
    int level = 1;
};

#endif // HOME_H
