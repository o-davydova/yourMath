#ifndef AUTORISATION_H
#define AUTORISATION_H

#include <QDialog>

namespace Ui {
class autorisation;
}

class autorisation : public QDialog
{
    Q_OBJECT

public:
    explicit autorisation(QWidget *parent = nullptr);
    ~autorisation();

private:
    Ui::autorisation *ui;
};

#endif // AUTORISATION_H
