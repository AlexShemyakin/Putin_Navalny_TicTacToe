#include "dialog.h"
#include "ui_dialog.h"
#include "mainw.h"
#include <QMainWindow>
#include <QTime>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::setchoice(){

    choice = 1;
}
void Dialog::setchar_n(int i, int j){
    a[i][j] = 2;
}

void Dialog::setchar_p(int i, int j){
    a[i][j] = 1;
}

void Dialog::on_button_clicked()
{
    choice ++;
    if (Dialog::choice%2 != 0){
        setchar_n(0,0);
        ui->button->setIcon(QIcon(":/resurces/naval.png"));
        Dialog::sound->play("D:\\Programmes\\QT\\Examples\\MyQT\\XO\\pravda.wav");
    }
    else {
        setchar_p(0,0);
        ui->button->setIcon(QIcon(":/resurces/putin.png"));
        Dialog::sound->play("D:\\Programmes\\QT\\Examples\\MyQT\\XO\\smeh.wav");
    }
    game();

}

void Dialog::on_pushButton_8_clicked()
{
    choice ++;
    if (Dialog::choice%2 != 0) {
        setchar_n(0,1);
        ui->pushButton_8->setIcon(QIcon(":/resurces/naval.png"));
        Dialog::sound->play("D:\\Programmes\\QT\\Examples\\MyQT\\XO\\privet.wav");
    }
    else {
        setchar_p(0,1);
        ui->pushButton_8->setIcon(QIcon(":/resurces/putin.png"));
        Dialog::sound->play("D:\\Programmes\\QT\\Examples\\MyQT\\XO\\parash.wav");
    }
    ui->pushButton_8->setEnabled(true);
    game();
}

void Dialog::on_pushButton_6_clicked()
{
    choice ++;
    if (Dialog::choice%2 != 0) {
        setchar_n(0,2);
        ui->pushButton_6->setIcon(QIcon(":/resurces/naval.png"));
        Dialog::sound->play("D:\\Programmes\\QT\\Examples\\MyQT\\XO\\idem.wav");
    }
    else {
        setchar_p(0,2);
        ui->pushButton_6->setIcon(QIcon(":/resurces/putin.png"));
        Dialog::sound->play("D:\\Programmes\\QT\\Examples\\MyQT\\XO\\kashel.wav");
    }
    ui->pushButton_6->setEnabled(true);
    game();
}

void Dialog::on_pushButton_5_clicked()
{
    choice ++;
    if (Dialog::choice%2 != 0) {
        setchar_n(1,0);
        ui->pushButton_5->setIcon(QIcon(":/resurces/naval.png"));
        Dialog::sound->play("D:\\Programmes\\QT\\Examples\\MyQT\\XO\\privet.wav");
    }
    else {
        setchar_p(1,0);
        ui->pushButton_5->setIcon(QIcon(":/resurces/putin.png"));
        Dialog::sound->play("D:\\Programmes\\QT\\Examples\\MyQT\\XO\\parash.wav");
    }
    ui->pushButton_5->setEnabled(true);
    game();
}

void Dialog::on_pushButton_9_clicked()
{
    choice ++;
    if (Dialog::choice%2 != 0) {
        setchar_n(1,1);
        ui->pushButton_9->setIcon(QIcon(":/resurces/naval.png"));
        Dialog::sound->play("D:\\Programmes\\QT\\Examples\\MyQT\\XO\\prosto.wav");
    }
    else {
        setchar_p(1,1);
        ui->pushButton_9->setIcon(QIcon(":/resurces/putin.png"));
        Dialog::sound->play("D:\\Programmes\\QT\\Examples\\MyQT\\XO\\smeh.wav");
    }
    ui->pushButton_9->setEnabled(true);
    game();
}

void Dialog::on_pushButton_7_clicked()
{
    choice ++;
    if (Dialog::choice%2 != 0) {
        setchar_n(1,2);
        ui->pushButton_7->setIcon(QIcon(":/resurces/naval.png"));
        Dialog::sound->play("D:\\Programmes\\QT\\Examples\\MyQT\\XO\\idem.wav");
    }
    else {
        setchar_p(1,2);
        ui->pushButton_7->setIcon(QIcon(":/resurces/putin.png"));
        Dialog::sound->play("D:\\Programmes\\QT\\Examples\\MyQT\\XO\\kashel.wav");
    }
    ui->pushButton_7->setEnabled(true);
    game();
}

void Dialog::on_pushButton_2_clicked()
{
    choice ++;
    if (Dialog::choice%2 != 0) {
        setchar_n(2,0);
        ui->pushButton_2->setIcon(QIcon(":/resurces/naval.png"));
        Dialog::sound->play("D:\\Programmes\\QT\\Examples\\MyQT\\XO\\pravda.wav");
    }
    else {
        setchar_p(2,0);
        ui->pushButton_2->setIcon(QIcon(":/resurces/putin.png"));
        Dialog::sound->play("D:\\Programmes\\QT\\Examples\\MyQT\\XO\\smeh.wav");
    }
    ui->pushButton_2->setEnabled(true);
    game();
}

void Dialog::on_pushButton_3_clicked()
{
    choice ++;
    if (Dialog::choice%2 != 0) {
        setchar_n(2,1);
        ui->pushButton_3->setIcon(QIcon(":/resurces/naval.png"));
        Dialog::sound->play("D:\\Programmes\\QT\\Examples\\MyQT\\XO\\konflict.wav");
    }
    else {
        setchar_p(2,1);
        ui->pushButton_3->setIcon(QIcon(":/resurces/putin.png"));
        Dialog::sound->play("D:\\Programmes\\QT\\Examples\\MyQT\\XO\\parash.wav");
    }
    ui->pushButton_3->setEnabled(true);
    game();
}

void Dialog::on_pushButton_4_clicked()
{
    choice ++;
    if (Dialog::choice%2 != 0) {
        setchar_n(2,2);
        ui->pushButton_4->setIcon(QIcon(":/resurces/naval.png"));
        Dialog::sound->play("D:\\Programmes\\QT\\Examples\\MyQT\\XO\\konflict.wav");
    }
    else {
        setchar_p(2,2);
        ui->pushButton_4->setIcon(QIcon(":/resurces/putin.png"));
        Dialog::sound->play("D:\\Programmes\\QT\\Examples\\MyQT\\XO\\kashel.wav");
    }
    ui->pushButton_4->setEnabled(true);
    game();
}

void Dialog::game() {
    if ((a[0][0] == 1 && a[0][1] == 1 && a[0][2] == 1) || (a[1][0] == 1 && a[1][1] == 1 && a[1][2] == 1) || (a[2][0] == 1 && a[2][1] == 1 && a[2][2] == 1) ||
        (a[0][0] == 1 && a[1][0] == 1 && a[2][0] == 1) || (a[0][1] == 1 && a[1][1] == 1 && a[2][1] == 1) || (a[0][2] == 1 && a[1][2] == 1 && a[2][2] == 1) ||
          (a[0][0] == 1 && a[1][1] == 1 && a[2][2] == 1) || (a[0][2] == 1 && a[1][1] == 1 && a[2][0] == 1)) {
        Dialog::game_flag = true;
        result();
    }
    else if ((a[0][0] == 2 && a[0][1] == 2 && a[0][2] == 2) || (a[1][0] == 2 && a[1][1] == 2 && a[1][2] == 2) || (a[2][0] == 2 && a[2][1] == 2 && a[2][2] == 2) ||
            (a[0][0] == 2 && a[1][0] == 2 && a[2][0] == 2) || (a[0][1] == 2 && a[1][1] == 2 && a[2][1] == 2) || (a[0][2] == 2 && a[1][2] == 2 && a[2][2] == 2) ||
            (a[0][0] == 2 && a[1][1] == 2 && a[2][2] == 2) || (a[0][2] == 2 && a[1][1] == 2 && a[2][0] == 2))
    {
        result();
    }
    else {
        int k = 0;
        for (int i = 0 ; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (a[i][j] == 0) k++;
            }
        }
        if (k == 0) {
            ui->result->setGeometry(210, 550, 240, 70);
            ui->label->setText("НИЧЬЯ!");
        }
    }
}


void Dialog::on_restart_clicked()
{
    this->close();
}


void Dialog::on_no_restart_clicked()
{
    this->close();
}

void delay()
{
    QTime dieTime= QTime::currentTime().addSecs(1);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void Dialog::result(){
    ui->result->setGeometry(210, 550, 240, 70);
    if (game_flag == false) {
        ui->label->setText("Навальный победил!");
        delay();
        sound->play("D:\\Programmes\\QT\\Examples\\MyQT\\XO\\poryadok.wav");
    }
    else {
        ui->label->setText("Обнулился!");
        delay();
        sound->play("D:\\Programmes\\QT\\Examples\\MyQT\\XO\\vozmut.wav");
    }
}

