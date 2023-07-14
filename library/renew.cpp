#include "renew.h"
#include "ui_renew.h"
#include<QMessageBox>
Renew::Renew(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Renew)
{
    ui->setupUi(this);
}

Renew::~Renew()
{
    delete ui;
}

void Renew::on_exitBtn_clicked()
{
    close();
}


void Renew::on_choseBtn_clicked()
{


        QMessageBox::information(this, tr("Information"), tr("Renew successfully"),
                                 QMessageBox::Yes);

    close();
}

