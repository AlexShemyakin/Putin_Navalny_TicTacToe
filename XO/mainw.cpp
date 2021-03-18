#include "mainw.h"
#include "ui_mainw.h"
#include "dialog.h"

MainW::MainW(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainW)
{
    ui->setupUi(this);
}

MainW::~MainW()
{
    delete ui;
}
void MainW::on_push_put_clicked()
{
    Dialog dl;
    dl.setchoice();
    dl.show();
    dl.exec();
}

void MainW::on_push_nav_clicked()
{
    Dialog dl;
    dl.show();
    dl.exec();
}

