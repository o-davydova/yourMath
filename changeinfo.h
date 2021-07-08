#ifndef CHANGEINFO_H
#define CHANGEINFO_H

#include <QSqlDatabase>
#include <QDialog>

namespace Ui {
class changeInfo;
}

class changeInfo : public QDialog
{
    Q_OBJECT

public:
    explicit changeInfo(QWidget *parent = nullptr, QString uid = "");
    ~changeInfo();
    QSqlDatabase YMDatabase;

private slots:
    void on_readyButton_clicked();

    void on_teacherBox_currentIndexChanged(int index);

    void on_teacherBox_currentTextChanged(const QString &arg1);

    void on_nameEdit_textChanged(const QString &arg1);

    void on_numberEdit_textChanged(const QString &arg1);

    void on_passEdit_textChanged(const QString &arg1);

    void on_newPassEdit_textChanged(const QString &arg1);

    void on_AgeEdit_valueChanged(const QString &arg1);

    void on_gradeEdit_valueChanged(const QString &arg1);

private:
    Ui::changeInfo *ui;
    QString ID;
    QString teacherID;
    int TeacherIdInt;
    QString teacher;
    QString name;
    QString name2;
    QString age;
    QString grade;
    QString pass;
    QString number;
    QString newPass;
    QString oldPass;
    bool next;
};

#endif // CHANGEINFO_H
