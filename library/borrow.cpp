#include "borrow.h"
#include "ui_borrow.h"
#include<QMessageBox>
Borrow::Borrow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Borrow)
{
    ui->setupUi(this);
}

Borrow::~Borrow()
{
    delete ui;
}

void Borrow::on_exitBtn_clicked()
{
    close();
}


void Borrow::on_choseBtn_clicked()
{
    if(findBooks(ui->bookIn->text()))
    {
        Books*p=findBooks(ui->bookIn->text());
        if(p)
        {
            p->state="借阅中";
            Books*t=new Books;
            t->name=p->name;
            t->next=pS->bookHead;
            pS->bookHead=t;

            QMessageBox::information(this, tr("Information"), tr("Borrow successfully!"),
                         QMessageBox::Yes);
        }
        else
        {
            QMessageBox::warning(this, tr("warning"), tr("book is error"),
                                 QMessageBox::Yes);
        }
    }
    else
    {
        QMessageBox::warning(this, tr("warning"), tr("book is error"),
                             QMessageBox::Yes);
    }


    close();
}

