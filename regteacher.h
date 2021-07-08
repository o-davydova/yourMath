#ifndef REGTEACHER_H
#define REGTEACHER_H
#include <QSqlDatabase>
#include <QDialog>

namespace Ui {
class RegTeacher;
}

class RegTeacher : public QDialog
{
    Q_OBJECT

public:
    explicit RegTeacher(QWidget *parent = nullptr);
    ~RegTeacher();

    QSqlDatabase YMDatabase;

private slots:

    void on_nameEdit_textChanged(const QString &arg1);

    void on_name2Edit_textChanged(const QString &arg1);

    void on_name3Edit_textChanged(const QString &arg1);

    void on_numberEdit_textChanged(const QString &arg1);

    void on_passwordEdit_textChanged(const QString &arg1);

    void on_readyButton_clicked();

    void on_schoolEdit_textChanged(const QString &arg1);

    void on_autorizButton_clicked();

private:
    Ui::RegTeacher *ui;

    int id = 1;
    bool next = 0;
    QString ID;
    QString name;
    QString name2;
    QString name3;
    QString number;
    QString pass;
    QString school;
};

#endif // REGTEACHER_H
