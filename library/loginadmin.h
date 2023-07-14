#ifndef LOGINADMIN_H
#define LOGINADMIN_H

#include <QDialog>
#include "useradmin.h"
#include "books.h"
#include "student.h"
#include "teacher.h"
#include "admin.h"
#include "fuction.h"
extern Books*headB,*pB;
extern Student*headS,*pS;
extern Admin*headA,*pA;
extern Teacher*headT,*pT;
namespace Ui {
class LoginAdmin;
}

class LoginAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit LoginAdmin(QWidget *parent = nullptr);
    ~LoginAdmin();

private slots:
    void on_loginBtn_clicked();

    void on_exitBtn_clicked();

private:
    Ui::LoginAdmin *ui;
    UserAdmin* admin;
};

#endif // LOGINADMIN_H
