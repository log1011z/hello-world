#include "modifyaccount.h"
#include "ui_modifyaccount.h"
#include<QMessageBox>
ModifyAccount::ModifyAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyAccount)
{
    ui->setupUi(this);
    ui->modifyWidget->hide();
}

ModifyAccount::~ModifyAccount()
{
    delete ui;
}

void ModifyAccount::on_choseBtn_clicked()
{
    if(ui->numIn->text().isEmpty()||ui->nameIn->text().isEmpty()||ui->telIn->text().isEmpty()||ui->passwordIn->text().isEmpty())
    {
        QMessageBox::warning(this, tr("Warning"), tr("No empty information!"),
                             QMessageBox::Yes);
    }
    else
    {
        if(ui->accountIn->text().size()==9)
        {
            pT->name=ui->nameIn->text();
            pT->password=ui->passwordIn->text();
            pT->num=ui->numIn->text();
            pT->tel=ui->telIn->text();
        }
        else if(ui->accountIn->text()==11)
        {
            pS->name=ui->nameIn->text();
            pS->password=ui->passwordIn->text();
            pS->num=ui->numIn->text();
            pS->tel=ui->telIn->text();
        }
        else
        {
            pA->num=ui->numIn->text();
            pA->password=ui->passwordIn->text();
        }
        QMessageBox::information(this, tr("Information"), tr("Modify successfully"),
                                 QMessageBox::Yes);
        close();
    }

}


void ModifyAccount::on_exitBtn_clicked()
{
    ui->choseWidget->show();
    ui->modifyWidget->hide();
}


void ModifyAccount::on_exitBtn1_clicked()
{
    close();
}


void ModifyAccount::on_confirmBtn_clicked()
{
    if(ui->accountIn->text().isEmpty())
    {
        QMessageBox::warning(this, tr("Warning"), tr("No empty information!"),
                             QMessageBox::Yes);
    }
    else
    {
        if(ui->accountIn->text().size()==9)
        {
            pT=findTeacher(ui->accountIn->text());
            if(pT)
            {
                ui->choseWidget->hide();
                ui->modifyWidget->show();
            }
                else
                {
                    QMessageBox::warning(this, tr("Warning"), tr("Num error!"),
                                         QMessageBox::Yes);
                }

        }
        else if(ui->accountIn->text().size()==11)
        {
            pS=findStudent(ui->accountIn->text());
            if(pS)
            {
                ui->choseWidget->hide();
                ui->modifyWidget->show();
            }
            else
            {
                QMessageBox::warning(this, tr("Warning"), tr("Num error!"),
                                     QMessageBox::Yes);
            }
        }
        else
        {
            pA=findAdmin(ui->accountIn->text());
            if(pA)
            {
                ui->choseWidget->hide();
                ui->nameIn->hide();
                ui->telIn->hide();
                ui->modifyWidget->show();

            }
            else
            {
                QMessageBox::warning(this, tr("Warning"), tr("Num error!"),
                                     QMessageBox::Yes);
            }
        }

    }

}

