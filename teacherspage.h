#ifndef TEACHERSPAGE_H
#define TEACHERSPAGE_H
#include <QSqlDatabase>
#include <QDialog>

namespace Ui {
class TeachersPage;
}

class TeachersPage : public QDialog
{
    Q_OBJECT

public:
    explicit TeachersPage(QWidget *parent = nullptr, QString uid = "");
    ~TeachersPage();

    QSqlDatabase YMDatabase;

private slots:
    void on_exitButton_clicked();

    void on_MINButton_clicked();

    void on_statisticButton_clicked();

    void on_Grade1Button_clicked();

    void on_Grade2Button_clicked();

    void on_Grade3Button_clicked();

    void on_Grade4Button_clicked();

private:
    Ui::TeachersPage *ui;
    QString name;
    QString name3;
    QString school;
    QString ID;
};

#endif // TEACHERSPAGE_H
