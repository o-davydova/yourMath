#ifndef LEVELS_H
#define LEVELS_H

#include <QDialog>

#include "home.h"
#include "g1_l1.h"
#include "g2_l1.h"

namespace Ui {
class Levels;
}

class Levels : public QDialog
{
    Q_OBJECT

public:
    explicit Levels(QWidget *parent = nullptr, QString uid = "", QString ugrade = "", bool uteacher = false);
    ~Levels();

private slots:
    void on_homeButton_clicked();

    void on_Lev_1_clicked();

    void on_DPA_clicked();

private:
    Ui::Levels *ui;
    QString ID;
    QString grade;
    bool teacher;
};

#endif // LEVELS_H
