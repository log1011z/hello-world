#include "logindlg.h"
#include "ui_logindlg.h"
#include<QMessageBox>

LoginDlg::LoginDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDlg)
{
    ui->setupUi(this);
}

LoginDlg::~LoginDlg()
{
    delete ui;
}


void LoginDlg::on_loginBtn_clicked()
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
    if(ui->userLineEdit->text().size()==9)
    {
        Teacher*p=findTeacher(ui->userLineEdit->text());
        if (p)
        {
            //密码
            //密码正确
            if (ui->pwdLineEdit->text()==p->password)
            {

                hide();
                reader=new UserReader(this);
                reader->setModal(true);
                reader->show();
                pT=p;
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
            LoginDlg::ui->userLineEdit->setFocus();
        }

    }
    else if(ui->userLineEdit->text().size()==11)
    {
        Student*p=findStudent(ui->userLineEdit->text());
        if (p)
        {
            //密码
            //密码正确
            if (ui->pwdLineEdit->text()==p->password)
            {

                hide();
                reader=new UserReader(this);
                reader->setModal(true);
                reader->show();
                pS=p;
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
            LoginDlg::ui->userLineEdit->setFocus();
        }
    }
    else
    {
        QMessageBox::warning(this, tr("warning"), tr("username is error"),
                             QMessageBox::Yes);
        ui->userLineEdit->clear();
        ui->pwdLineEdit->clear();
        LoginDlg::ui->userLineEdit->setFocus();
    }


}

void LoginDlg::on_exitBtn_clicked()
{
    close();
}

