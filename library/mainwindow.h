#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "logindlg.h"
#include "loginadmin.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_readerBtn_clicked();

    void on_readerBtn_2_clicked();

    void on_exitBtn_clicked();



private:
    Ui::MainWindow *ui;
    LoginDlg*dialog;
    LoginAdmin*dialogA;
};
#endif // MAINWINDOW_H
