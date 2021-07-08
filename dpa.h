#ifndef DPA_H
#define DPA_H

#include <QDialog>
#include <QSqlDatabase>

namespace Ui {
class DPA;
}

class DPA : public QDialog
{
    Q_OBJECT

public:
    explicit DPA(QWidget *parent = nullptr, QString uid = "");
    ~DPA();
    QSqlDatabase YMDatabase;

private slots:
    void on_homeButton_clicked();

    void on_answ_1_1_clicked();

    void on_answ_1_2_clicked();

    void on_answ_1_3_clicked();

    void on_answ_2_1_clicked();

    void on_answ_2_2_clicked();

    void on_answ_2_3_clicked();

    void on_answ_3_1_clicked();

    void on_answ_3_2_clicked();

    void on_answ_3_3_clicked();

    void on_backButton_clicked();

    void on_nextButton_clicked();

    void on_answ_4_1_clicked();

    void on_answ_4_2_clicked();

    void on_answ_4_3_clicked();

    void on_answ_4_4_clicked();

    void on_answ_4_5_clicked();

    void on_answ_4_6_clicked();

    void on_answ_5_1_textChanged(const QString &arg1);

    void on_answ_5_2_textChanged(const QString &arg1);

    void on_answ_5_3_textChanged(const QString &arg1);

    void on_answ_7_3_4_textChanged(const QString &arg1);

    void on_answ_6_1_textChanged(const QString &arg1);

    void on_answ_6_2_textChanged(const QString &arg1);

    void on_answ_6_3_textChanged(const QString &arg1);

    void on_answ_7_1_1_textChanged(const QString &arg1);

    void on_answ_7_1_2_textChanged(const QString &arg1);

    void on_answ_7_1_3_textChanged(const QString &arg1);

    void on_answ_7_2_1_textChanged(const QString &arg1);

    void on_answ_7_2_2_textChanged(const QString &arg1);

    void on_answ_7_2_3_textChanged(const QString &arg1);

    void on_answ_7_3_1_textChanged(const QString &arg1);

    void on_answ_7_3_2_textChanged(const QString &arg1);

    void on_answ_7_3_3_textChanged(const QString &arg1);

    void on_answ_7_3_6_textChanged(const QString &arg1);

    void on_answ_7_3_5_textChanged(const QString &arg1);

    void on_printButton_clicked();

private:
    Ui::DPA *ui;

    QString ID;
    int index = 0;
    int solution[5] = {0};
    int second[3] = {0};
    int third[3] = {0};
    int forth[3] = {0};
    int last[12] = {0};
    QString Solution = "",
    style1 = "background-color:rgb(250, 191, 35);"
            "color: white;"
            "font: 40pt 'Yu Gothic UI Semilight';"
            "border:5px solid;"
            "border-radius: 5px;"
            "border-color: rgb(250, 191, 35);",
    style2 = "background-color:rgb(147, 231, 68);"
            "color: white;"
            "font: 40pt 'Yu Gothic UI Semilight';"
            "border:5px solid;"
            "border-radius: 5px;"
            "border-color: rgb(147, 231, 68);",
    style3 = "background-color: rgb(138, 81, 250);"
            "color: white;"
            "font: 40pt 'Yu Gothic UI Semilight';"
            "border:5px solid;"
            "border-radius: 5px;"
            "border-color: rgb(138, 81, 250);",
    defaultStyle = "border-color: rgb(45, 44, 44);"
                  "background-color: rgb(45, 44, 44);"
                  "color: white;"
                  "font: 40pt 'Yu Gothic UI Semilight';"
                  "border:5px solid;"
                  "border-radius: 5px;",
    defaultStyle1, defaultStyle2, defaultStyle3;
    int point = 0, checked = 0;

    QString name;
    int ready = 0;
    QString dpa = nullptr;
};

#endif // DPA_H
