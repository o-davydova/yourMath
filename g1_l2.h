#ifndef G1_L2_H
#define G1_L2_H

#include <QDialog>

namespace Ui {
class g1_l2;
}

class g1_l2 : public QDialog
{
    Q_OBJECT

public:
    explicit g1_l2(QWidget *parent = nullptr, QString uid = "");
    ~g1_l2();

private:
    Ui::g1_l2 *ui;
};

#endif // G1_L2_H
