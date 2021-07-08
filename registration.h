#ifndef REGISTRATION_H
#define REGISTRATION_H
#include <QSqlDatabase>
#include <QDialog>

#include "home.h"

namespace Ui {
class Registration;
}

class Registration : public QDialog
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = nullptr);
    ~Registration();
    QSqlDatabase YMDatabase;

private slots:
    void on_autorizButton_clicked();

    void on_readyButton_clicked();

    void on_nameEdit_textChanged(const QString &arg1);

    void on_name2Edit_textChanged(const QString &arg1);

    void on_numberEdit_textChanged(const QString &arg1);

    void on_ageBox_valueChanged(const QString &arg1);

    void on_gradeBox_valueChanged(const QString &arg1);

    void on_passwordEdit_textChanged(const QString &arg1);

    void on_comboTeach_currentTextChanged(const QString &arg1);

    void on_comboTeach_currentIndexChanged(int index);

private:
    Ui::Registration *ui;

    int id = 1;
    bool next = 0;
    QString ID;
    QString name;
    QString name2;
    QString number;
    QString age;
    QString grade;
    QString pass;
    QString nameT;
    QString nameT2;
    QString nameT3;
    QString teacher;
    QString teacherID;
    int counter = 0;
};

#endif // REGISTRATION_H
