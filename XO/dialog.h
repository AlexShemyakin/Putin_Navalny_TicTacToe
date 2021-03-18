#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLabel>
#include <QSound>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    QSound *sound;
    void game();
    void setchoice();
    void setchar_n(int i, int j);
    void setchar_p(int i, int j);
    int choice = 0;
    int a[3][3]=
    {{0, 0, 0},
     {0, 0, 0},
     {0, 0, 0}};
    bool restart_flag = false;


private slots:
    void result();
    void on_button_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_restart_clicked();

    void on_no_restart_clicked();

private:

    bool game_flag = false;

    Ui::Dialog *ui;
};

#endif // DIALOG_H
