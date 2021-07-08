#ifndef G3_L1_H
#define G3_L1_H

#include <QSqlDatabase>
#include <QDialog>

namespace Ui {
class g3_l1;
}

class g3_l1 : public QDialog
{
    Q_OBJECT

public:
    explicit g3_l1(QWidget *parent = nullptr, QString uid = "");
    ~g3_l1();

    QSqlDatabase YMDatabase;

private slots:
    void on_backButton_clicked();

    void on_nextButton_clicked();

    void on_homeButton_clicked();

    void on_answ_1_1_clicked();

    void on_answ_1_2_clicked();

    void on_answ_1_3_clicked();

    void on_answ2_1_textChanged(const QString &arg1);

    void on_answ2_2_textChanged(const QString &arg1);

    void on_answ_4_3_clicked();

    void on_answ_4_2_clicked();

    void on_answ_4_1_clicked();

    void on_answ_5_1_clicked();

    void on_answ_5_2_clicked();

    void on_answ_5_3_clicked();

    void on_answ3_1_textChanged(const QString &arg1);

    void on_printButton_clicked();

private:
    Ui::g3_l1 *ui;

    QString ID;
    int index = 0;

    int solution[5] = {0};
    QString Solution = "";
    int point = 0;

    QString name;
    QString grade;
    QString level;
    int ready = 0;
    QString gradeR = nullptr;
    QString levelR = nullptr;
    int answ_2[2] = {0};

    bool checked[8] = {false};
};

#endif // G3_L1_H
