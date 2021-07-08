#include "gradeerror.h"
#include "ui_gradeerror.h"

GradeError::GradeError(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GradeError)
{
    ui->setupUi(this);

    // -------------------------------------------------------- LOGO & ICON --------------------//
            this->setWindowTitle(" Помилка ");
            QIcon winIcon(":/res/img/mainYellowLogo.ico");
            this->setWindowIcon(winIcon);
    // -------------------------------------------------------- LOGO & ICON --------------------//
}

GradeError::~GradeError()
{
    delete ui;
}

void GradeError::on_closeButton_clicked()
{
    this->close();
}
