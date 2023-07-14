#include "creatbook.h"
#include "ui_creatbook.h"
#include<QMessageBox>
CreatBook::CreatBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreatBook)
{
    ui->setupUi(this);
}

CreatBook::~CreatBook()
{
    delete ui;
}

void CreatBook::on_exitBtn_clicked()
{
    close();
}


void CreatBook::on_choseBtn_clicked()
{
    if(ui->numIn->text().isEmpty()||ui->dateIn->text().isEmpty()||ui->nameIn->text().isEmpty()||ui->writerIn->text().isEmpty()||ui->stateIn->text().isEmpty()||ui->priceIn->text().isEmpty()||ui->publishIn->text().isEmpty()||ui->kindIn->text().isEmpty())
    {
        QMessageBox::warning(this, tr("Warning"), tr("No empty information!"),
                                 QMessageBox::Yes);
    }
    else
    {
        Books*b=new Books;
        b->num=ui->numIn->text();
        b->name=ui->nameIn->text();
        b->date=ui->dateIn->text();
        b->writer=ui->writerIn->text();
        b->kind=ui->kindIn->text();
        b->publish=ui->publishIn->text();
        b->state=ui->stateIn->text();
        b->price=ui->priceIn->text().toInt();
        b->next=headB;
        headB=b;
        QMessageBox::information(this, tr("Information"), tr("Creat successfully!"),
                                 QMessageBox::Yes);
        close();
    }


}

