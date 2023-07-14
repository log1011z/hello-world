#include "deletebook.h"
#include "ui_deletebook.h"
#include<QMessageBox>
DeleteBook::DeleteBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteBook)
{
    ui->setupUi(this);

}

DeleteBook::~DeleteBook()
{
    delete ui;
}

void DeleteBook::on_chooseBookBtn_clicked()
{
    Books* p = findBooks(ui->bookIn->text());
    if (p == NULL)
    {
        QMessageBox::warning(this, tr("Warning"), tr("Book is error"),
                             QMessageBox::Yes);
        ui->bookIn->clear();
        ui->bookIn->setFocus();
    }
    else
    {
        if (p == headB)
        {
            headB = headB->next;
            delete p;
        }
        else
        {
            Books* q = headB;
            while (q->next != p)
            {
                q = q->next;
            }
            q->next = p->next;
            delete p;
        }
        QMessageBox::information(this, tr("Information"), tr("Delete successfully!"),
                                 QMessageBox::Yes);
        close();
    }

}


void DeleteBook::on_exitBtn_clicked()
{
    close();
}

