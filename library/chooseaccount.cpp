#include "chooseaccount.h"
#include "ui_chooseaccount.h"
#include<QMessageBox>
chooseAccount::chooseAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chooseAccount)
{
    ui->setupUi(this);
    ui->textBrowser->setVisible(false);
    ui->enBtn->hide();
}

chooseAccount::~chooseAccount()
{
    delete ui;
}

void chooseAccount::on_chooseBtn_clicked()
{
    if(ui->accountIn->text().size()==9)
    {
        Teacher*p=findTeacher(ui->accountIn->text());
        if(p)
        {
            ui->label->hide();
            ui->accountIn->hide();
            ui->chooseBtn->hide();
            ui->exitBtn->hide();
            ui->enBtn->show();
            ui->textBrowser->setPlainText("账号：");
            ui->textBrowser->append(p->num);
            ui->textBrowser->append("密码：");
            ui->textBrowser->append(p->password);
            ui->textBrowser->append("姓名：");
            ui->textBrowser->append(p->name);
            ui->textBrowser->append("电话：");
            ui->textBrowser->append(p->tel);
            ui->textBrowser->show();
        }
        else
        {

            QMessageBox::warning(this, tr("warning"), tr("username is error"),
                                 QMessageBox::Yes);
            ui->accountIn->clear();
            ui->accountIn->setFocus();
        }


    }
    else if(ui->accountIn->text().size()==11)
    {
        Student*p=findStudent(ui->accountIn->text());
        if(p)
        {
            ui->label->hide();
            ui->accountIn->hide();
            ui->chooseBtn->hide();
            ui->exitBtn->hide();
            ui->enBtn->show();
            ui->textBrowser->setPlainText("账号：");
            ui->textBrowser->append(p->num);
            ui->textBrowser->append("密码：");
            ui->textBrowser->append(p->password);
            ui->textBrowser->append("姓名：");
            ui->textBrowser->append(p->name);
            ui->textBrowser->append("电话：");
            ui->textBrowser->append(p->tel);
            ui->textBrowser->show();
        }
        else
        {
            QMessageBox::warning(this, tr("warning"), tr("username is error"),
                                 QMessageBox::Yes);
            ui->accountIn->clear();
            ui->accountIn->setFocus();

        }
    }
    else
    {
        Admin*p=findAdmin(ui->accountIn->text());
        if(p)
        {
            ui->label->hide();
            ui->accountIn->hide();
            ui->chooseBtn->hide();
            ui->exitBtn->hide();
            ui->enBtn->show();
            ui->textBrowser->setPlainText("账号：");
            ui->textBrowser->append(p->num);
            ui->textBrowser->append("密码：");
            ui->textBrowser->append(p->password);
            ui->textBrowser->show();
        }
        else
        {
            QMessageBox::warning(this, tr("warning"), tr("username is error"),
                                 QMessageBox::Yes);
            ui->accountIn->clear();
            ui->accountIn->setFocus();
        }

    }

}


void chooseAccount::on_exitBtn_clicked()
{
    close();
}


void chooseAccount::on_enBtn_clicked()
{
    close();
}

