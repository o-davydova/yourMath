#ifndef GRADEERROR_H
#define GRADEERROR_H

#include <QDialog>

namespace Ui {
class GradeError;
}

class GradeError : public QDialog
{
    Q_OBJECT

public:
    explicit GradeError(QWidget *parent = nullptr);
    ~GradeError();

private slots:
    void on_closeButton_clicked();

private:
    Ui::GradeError *ui;
};

#endif // GRADEERROR_H
