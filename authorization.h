#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H
#include <QSqlDatabase>
#include <QDialog>

#include "home.h"

namespace Ui {
class Authorization;
}

class Authorization : public QDialog
{
    Q_OBJECT

public:
    explicit Authorization(QWidget *parent = nullptr);
    ~Authorization();
    QSqlDatabase YMDatabase;

private slots:
    void on_registrationButton_clicked();

    void on_passwordEdit_textChanged(const QString &arg1);

    void on_readyButton_clicked();

    void on_numberEdit_textChanged(const QString &arg1);

private:
    Ui::Authorization *ui;
    //Home *home;

    QString number;
    QString pass;
    QString check;
    QString ID;

    bool next = 0;
};

#endif // AUTHORIZATION_H
