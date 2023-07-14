#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resize(QSize(611, 431));
    //this->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(251,102,102, 200), stop:1 rgba(20,196,188, 210));");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_readerBtn_clicked()
{
    dialog=new LoginDlg(this);
    dialog->setModal(true);
    dialog->show();
}


void MainWindow::on_readerBtn_2_clicked()
{
    dialogA=new LoginAdmin(this);
    dialogA->setModal(true);
    dialogA->show();
}


void MainWindow::on_exitBtn_clicked()
{
    close();
}




