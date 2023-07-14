#include "choosebook.h"
#include "ui_choosebook.h"
#include <QMessageBox>
ChooseBook::ChooseBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChooseBook)
{
    ui->setupUi(this);
    ui->textBrowser->setVisible(false);
    ui->enBtn->hide();
}

ChooseBook::~ChooseBook()
{
    delete ui;
}

void ChooseBook::on_confirmBtn_clicked()
{
    if(findBooks(ui->bookIn->text()))
    {
        Books*p=findBooks(ui->bookIn->text());
        ui->label->hide();
        ui->bookIn->hide();
        ui->confirmBtn->hide();
        ui->exitBtn->hide();
        ui->enBtn->show();
        ui->textBrowser->setPlainText("书籍名称："); //设置普通文本，原来的文本被覆盖掉
        ui->textBrowser->append(p->name);
        ui->textBrowser->append("书籍作者：");
        ui->textBrowser->append(p->writer);
        ui->textBrowser->append("书籍种类：");
        ui->textBrowser->append(p->kind);
        ui->textBrowser->append("书籍出版社：");
        ui->textBrowser->append(p->publish);
        ui->textBrowser->append("书籍状态：");
        ui->textBrowser->append(p->state);
        ui->textBrowser->show();
    }
    else
    {
        QMessageBox::warning(this, tr("warning"), tr("book is error"),
                             QMessageBox::Yes);
        ui->bookIn->clear();
        ui->bookIn->setFocus();
    }

}


void ChooseBook::on_exitBtn_clicked()
{
    close();
}


void ChooseBook::on_enBtn_clicked()
{
    close();
}

