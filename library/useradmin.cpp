#include "useradmin.h"
#include "ui_useradmin.h"
#include "choosebook.h"
#include "deletebook.h"
#include "chooseaccount.h"
#include "deleteaccount.h"
#include "modifyaccount.h"
#include "modifybook.h"
#include "creataccount.h"
#include "creatbook.h"

UserAdmin::UserAdmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserAdmin)
{
    ui->setupUi(this);
}

UserAdmin::~UserAdmin()
{
    delete ui;
}




void UserAdmin::on_exutBtn_clicked()
{
    close();
}



void UserAdmin::on_findBook_clicked()
{
    ChooseBook*chose=new ChooseBook;
    chose->setModal(true);
    chose->show();
}


void UserAdmin::on_deleteBook_clicked()
{
    DeleteBook *chose=new DeleteBook;
    chose->setModal(true);
    chose->show();
}


void UserAdmin::on_findAccount_clicked()
{
    chooseAccount*chose=new chooseAccount;
    chose->setModal(true);
    chose->show();
}


void UserAdmin::on_deleteAccount_clicked()
{
    DeleteAccount*chose=new DeleteAccount;
    chose->setModal(true);
    chose->show();
}


void UserAdmin::on_modifyBook_clicked()
{
    ModifyBook*book=new ModifyBook;
    book->setModal(true);
    book->show();
}


void UserAdmin::on_modifyAccount_clicked()
{
    ModifyAccount*account=new ModifyAccount;
    account->setModal(true);
    account->show();
}


void UserAdmin::on_creatBook_clicked()
{
    CreatBook*book=new CreatBook;
    book->setModal(true);
    book->show();
}


void UserAdmin::on_creatAccount_clicked()
{
    CreatAccount*book=new CreatAccount;
    book->setModal(true);
    book->show();
}

