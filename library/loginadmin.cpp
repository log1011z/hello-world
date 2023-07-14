#include "loginadmin.h"
#include "ui_loginadmin.h"
#include<QMessageBox>

LoginAdmin::LoginAdmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginAdmin)
{
    ui->setupUi(this);
}

LoginAdmin::~LoginAdmin()
{
    delete ui;
}

void LoginAdmin::on_loginBtn_clicked()
{
    setModal(true);                  //setModal()是设置模态，就是得关闭当前窗口才能操作其他窗口

    if(ui->userLineEdit->text().isEmpty())
    {
        QMessageBox::warning(this, tr("warning"), tr("username is empty"),
                             QMessageBox::Yes);
        return;
    }
    if(ui->pwdLineEdit->text().isEmpty())
    {
        QMessageBox::critical(this, tr("warning"), tr("password is empty"));
        return;
    }
    //用户名正确
    Admin*p=findAdmin(ui->userLineEdit->text());
    if (p)
    {
        //密码
        //密码正确
        if (p->password==ui->pwdLineEdit->text())
        {
            hide();
            admin=new UserAdmin(this);
            admin->setModal(true);
            admin->show();
            pA=p;
        }
        else
        {
            QMessageBox::critical(this, tr("warning"), tr("password is error"));
            ui->pwdLineEdit->clear();
            ui->pwdLineEdit->setFocus();   //获取焦点
        }
    }
    else
    {
        QMessageBox::warning(this, tr("warning"), tr("username is error"),
                             QMessageBox::Yes);
        ui->userLineEdit->clear();
        ui->pwdLineEdit->clear();
        ui->userLineEdit->setFocus();
    }
}


void LoginAdmin::on_exitBtn_clicked()
{
    close();
}

