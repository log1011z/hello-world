#ifndef USERADMIN_H
#define USERADMIN_H

#include <QDialog>
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
class UserAdmin;
}

class UserAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit UserAdmin(QWidget *parent = nullptr);
    ~UserAdmin();

private slots:


    void on_exutBtn_clicked();


    void on_findBook_clicked();

    void on_deleteBook_clicked();

    void on_findAccount_clicked();

    void on_deleteAccount_clicked();

    void on_modifyBook_clicked();

    void on_modifyAccount_clicked();

    void on_creatBook_clicked();

    void on_creatAccount_clicked();

private:
    Ui::UserAdmin *ui;
};

#endif // USERADMIN_H
