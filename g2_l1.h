#ifndef G2_L1_H
#define G2_L1_H

#include <QSqlDatabase>
#include <QDialog>

namespace Ui {
class g2_l1;
}

class g2_l1 : public QDialog
{
    Q_OBJECT

public:
    explicit g2_l1(QWidget *parent = nullptr, QString uid = "");
    ~g2_l1();
       QSqlDatabase YMDatabase;

private slots:
    void on_backButton_clicked();

    void on_nextButton_clicked();

    void on_homeButton_clicked();

    void on_answ_textChanged(const QString &arg1);

    void on_answ_2_1_textChanged(const QString &arg1);

    void on_answ_2_2_textChanged(const QString &arg1);

    void on_answ_2_3_textChanged(const QString &arg1);

    void on_answ_2_4_textChanged(const QString &arg1);


    void on_answ_3_1_clicked();

    void on_answ_3_2_clicked();

    void on_answ_3_3_clicked();

    void on_answ_3_4_clicked();

    void on_answ_3_5_clicked();

    void on_answ_4_3_clicked();

    void on_answ_4_2_clicked();

    void on_answ_4_1_clicked();

    void on_printButton_clicked();

private:
    Ui::g2_l1 *ui;

    QString ID;
    int index = 0;

    int solution[4] = {0};
    QString Solution = "";
    int point = 0;

    QString name;
    QString grade;
    QString level;
    int ready = 0;
    QString gradeR = nullptr;
    QString levelR = nullptr;
    int answ_2[4] = {0};
    int answ_3[5] = {5, 0, 0, 5, 0};
    int answ_4[3] = {0, 10, 0};

    bool checked[8] = {false};
};

#endif // G2_L1_H
