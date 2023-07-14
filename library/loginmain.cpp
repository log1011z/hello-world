#include "loginmain.h"
#include "ui_loginmain.h"

LoginMain::LoginMain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginMain)
{
    ui->setupUi(this);
}

LoginMain::~LoginMain()
{
    delete ui;
}
