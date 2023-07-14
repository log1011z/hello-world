#include "creataccount.h"
#include "ui_creataccount.h"
#include<QMessageBox>
CreatAccount::CreatAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreatAccount)
{
    ui->setupUi(this);
}

CreatAccount::~CreatAccount()
{
    delete ui;
}

void CreatAccount::on_exitBtn_clicked()
{
    close();
}


void CreatAccount::on_choseBtn_clicked()
{
    if(ui->numIn->text().isEmpty()||ui->nameIn->text().isEmpty()||ui->telIn->text().isEmpty()||ui->passwordIn->text().isEmpty())
    {
        QMessageBox::warning(this, tr("Warning"), tr("No empty information!"),
                             QMessageBox::Yes);
    }
    else
    {   if(ui->numIn->text().size()==9)
        {
            Teacher*t=new Teacher;
            t->name=ui->nameIn->text();
            t->password=ui->passwordIn->text();
            t->num=ui->numIn->text();
            t->tel=ui->telIn->text();
            t->next=headT;
            headT=t;
        }
        else if(ui->numIn->text()==11)
        {
            Student*s=new Student;
            s->name=ui->nameIn->text();
            s->password=ui->passwordIn->text();
            s->num=ui->numIn->text();
            s->tel=ui->telIn->text();
            s->next=headS;
            headS=s;
        }
        else
        {
            Admin*a=new Admin;
            a->num=ui->numIn->text();
            a->password=ui->passwordIn->text();
            a->next=headA;
            headA=a;
        }
        QMessageBox::information(this, tr("Information"), tr("Creat successfully!"),
                                 QMessageBox::Yes);
        close();
    }


}

