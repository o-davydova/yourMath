#ifndef AUTHORIZTEACHER_H
#define AUTHORIZTEACHER_H
#include <QSqlDatabase>
#include <QDialog>

namespace Ui {
class AuthorizTeacher;
}

class AuthorizTeacher : public QDialog
{
    Q_OBJECT

public:
    explicit AuthorizTeacher(QWidget *parent = nullptr);
    ~AuthorizTeacher();

    QSqlDatabase YMDatabase;

private slots:
    void on_registrationButton_clicked();

    void on_numberEdit_textChanged(const QString &arg1);

    void on_passwordEdit_textChanged(const QString &arg1);

    void on_readyButton_clicked();

private:
    Ui::AuthorizTeacher *ui;

    QString number;
    QString pass;
    QString check;
    QString ID;

    bool next = 0;
};

#endif // AUTHORIZTEACHER_H
