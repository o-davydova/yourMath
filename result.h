#ifndef RESULT_H
#define RESULT_H

#include <QDialog>
#include "g1_l2.h"
#include "home.h"
namespace Ui {
class Result;
}

class Result : public QDialog
{
    Q_OBJECT

public:
    explicit Result(QWidget *parent = nullptr, QString point = "",  QString uid = "", QString ulevel = "", QString ugrade = "", bool dpa = false);
    ~Result();

private slots:
    void on_homeButton_clicked();

    void on_nextLevButton_clicked();

private:
    Ui::Result *ui;
    QString Point;
    QString ID;
    QString level;
    QString grade;
};

#endif // RESULT_H
