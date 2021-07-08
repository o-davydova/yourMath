#ifndef STATISTIC_H
#define STATISTIC_H



#include <QSqlDatabase>
#include <QDialog>

namespace Ui {
class Statistic;
}

class Statistic : public QDialog
{
    Q_OBJECT

public:
    explicit Statistic(QWidget *parent = nullptr, QString uid = "", bool check = false);
    ~Statistic();
    QSqlDatabase YMDatabase;

private slots:
    void on_homeButton_clicked();

private:
    Ui::Statistic *ui;

    QString ID, studID;
    QString name, name_2, level, grade, point, Average, currentLevel;
    int average, counter = 0;
    bool teacherCheck;
};

#endif // STATISTIC_H
