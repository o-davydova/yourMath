#include "g1_l2.h"
#include "ui_g1_l2.h"

g1_l2::g1_l2(QWidget *parent, QString uid) :
    QDialog(parent),
    ui(new Ui::g1_l2)
{
    ui->setupUi(this);
}

g1_l2::~g1_l2()
{
    delete ui;
}
