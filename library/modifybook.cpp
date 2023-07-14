#include "modifybook.h"
#include "ui_modifybook.h"
#include<QMessageBox>
ModifyBook::ModifyBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyBook)
{
    ui->setupUi(this);
    ui->modifyWidget->hide();
}

ModifyBook::~ModifyBook()
{
    delete ui;
}

void ModifyBook::on_choseBtn_clicked()
{
    if(ui->numIn->text().isEmpty()||ui->dateIn->text().isEmpty()||ui->nameIn->text().isEmpty()||ui->writerIn->text().isEmpty()||ui->stateIn->text().isEmpty()||ui->priceIn->text().isEmpty()||ui->publishIn->text().isEmpty()||ui->kindIn->text().isEmpty())
    {
        QMessageBox::warning(this, tr("Warning"), tr("No empty information!"),
                             QMessageBox::Yes);
    }
    else
    {

        pB->num=ui->numIn->text();
        pB->name=ui->nameIn->text();
        pB->date=ui->dateIn->text();
        pB->writer=ui->writerIn->text();
        pB->kind=ui->kindIn->text();
        pB->publish=ui->publishIn->text();
        pB->state=ui->stateIn->text();
        pB->price=ui->priceIn->text().toInt();
        QMessageBox::information(this, tr("Information"), tr("Modify successfully"),
                                 QMessageBox::Yes);
        close();


}
}

void ModifyBook::on_exitBtn_clicked()
{
    ui->choseWidget->show();
    ui->modifyWidget->hide();
}


void ModifyBook::on_confirmBtn_clicked()
{
    if(ui->bookIn->text().isEmpty())
    {
        QMessageBox::warning(this, tr("Warning"), tr("No empty information!"),
                             QMessageBox::Yes);
    }
    else
    {
        pB=findBooks(ui->bookIn->text());
        if(pB)
        {
            if(pB->state=="借阅中")
               {
                QMessageBox::warning(this, tr("Warning"), tr("The book has been lend!"),
                                     QMessageBox::Yes);
            }
            else
            {
                ui->choseWidget->hide();
                ui->modifyWidget->show();
            }

        }
        else
        {
            QMessageBox::warning(this, tr("Warning"), tr("Name error!"),
                                 QMessageBox::Yes);
        }
    }

}


void ModifyBook::on_exitBtn1_clicked()
{
    close();
}

