#include "return.h"
#include "ui_return.h"
#include<QMessageBox>
Return::Return(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Return)
{
    ui->setupUi(this);
}

Return::~Return()
{
    delete ui;
}

void Return::on_exitBtn_clicked()
{
    close();
}


void Return::on_choseBtn_clicked()
{
    if(pS->findBook(ui->bookIn->text()))
    {
        findBooks(pS->bookHead->name)->state="可借";
        pS->bookHead=NULL;
    QMessageBox::information(this, tr("Information"), tr("Return successfully!"),
                             QMessageBox::Yes);

    }
else
{
    QMessageBox::information(this, tr("Information"), tr("You don't borrow books"),
                             QMessageBox::Yes);
}
close();
}

