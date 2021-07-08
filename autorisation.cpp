#include "autorisation.h"
#include "ui_autorisation.h"
#include "QMovie"

autorisation::autorisation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::autorisation)
{
    ui->setupUi(this);
    this->showMaximized();

    QMovie *thereMovie = new QMovie(":/res/img/there.gif");
    ui->thereGif->setMovie(thereMovie);
    thereMovie->start();
}

autorisation::~autorisation()
{
    delete ui;
}
