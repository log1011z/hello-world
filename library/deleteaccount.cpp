#include "deleteaccount.h"
#include "ui_deleteaccount.h"
#include<QMessageBox>
DeleteAccount::DeleteAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteAccount)
{
    ui->setupUi(this);

}

DeleteAccount::~DeleteAccount()
{
    delete ui;
}

void DeleteAccount::on_chooseBtn_clicked()
{
    if(ui->accountIn->text()==tr("chou"))
    {
        QMessageBox::warning(this, tr("Information"), tr("Delete successfully!"),
                             QMessageBox::Yes);
        close();
    }
    else
    {
        QMessageBox::warning(this, tr("warning"), tr("username is error"),
                             QMessageBox::Yes);
        ui->accountIn->clear();
        ui->accountIn->setFocus();
    }

}


void DeleteAccount::on_exitBtn_clicked()
{
    close();
}

