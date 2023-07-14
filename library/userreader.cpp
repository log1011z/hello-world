#include "userreader.h"
#include "ui_userreader.h"
#include "choosebook.h"
#include "borrow.h"
#include "return.h"
#include "renew.h"
UserReader::UserReader(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserReader)
{
    ui->setupUi(this);
    //this->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(251,102,102, 200), stop:1 rgba(20,196,188, 210));");

}

UserReader::~UserReader()
{
    delete ui;
}

void UserReader::on_exitBtn_clicked()
{
    close();
}


void UserReader::on_findBook_clicked()
{
    ChooseBook *chose=new ChooseBook;
    chose->setModal(true);
    chose->show();
}


void UserReader::on_borrowBook_clicked()
{
    Borrow*book=new Borrow;
    book->setModal(true);
    book->show();
}


void UserReader::on_returnBook_clicked()
{
    Return*book=new Return;
    book->setModal(true);
    book->show();
}


void UserReader::on_renewBook_clicked()
{
    Renew*book=new Renew;
    book->setModal(true);
    book->show();
}

