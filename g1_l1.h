#ifndef G1_L1_H
#define G1_L1_H

#include <QSqlDatabase>
#include <QDialog>

namespace Ui {
class G1_L1;
}

class G1_L1 : public QDialog
{
    Q_OBJECT

public:
    explicit G1_L1(QWidget *parent = nullptr, QString uid = nullptr);
    ~G1_L1();
    QSqlDatabase YMDatabase;

private slots:
    void on_homeButton_clicked();

    void on_nextButton_clicked();

    void on_answ_1_clicked();

    void on_answ_2_clicked();

    void on_answ_3_clicked();

    void on_answ_4_clicked();

    void on_answ_5_clicked();

    void on_answ_6_clicked();

    void on_answ_7_clicked();

    void on_backButton_clicked();

    void on_printButton_clicked();

private:
    Ui::G1_L1 *ui;
    int lev = 0;
    int solution;
    QString Solution;
    QString ID;
    int point;
    QString name;
    QString grade;
    QString level;
    int ready = 0;
    QString gradeR = nullptr;
    QString levelR = nullptr;
};

#endif // G1_L1_H
