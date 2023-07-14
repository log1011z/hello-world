#ifndef LOGINDLG_H
#define LOGINDLG_H

#include <QDialog>
#include "userreader.h"
#include "books.h"
#include "student.h"
#include "teacher.h"
#include "admin.h"
#include "fuction.h"
extern Books*headB,*pB;
extern Student*headS,*pS;
extern Admin*headA,*pA;
extern Teacher*headT,*pT;
#include <QMetaType>
namespace Ui {
class LoginDlg;
}
// 首先声明元类型




class LoginDlg : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDlg(QWidget *parent = nullptr);
    ~LoginDlg();

private slots:
    void on_loginBtn_clicked();

    void on_exitBtn_clicked();

private:
    Ui::LoginDlg *ui;
    UserReader*reader;
};

#endif // LOGINDLG_H
