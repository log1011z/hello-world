#ifndef CREATACCOUNT_H
#define CREATACCOUNT_H

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
class CreatAccount;
}

class CreatAccount : public QDialog
{
    Q_OBJECT

public:
    explicit CreatAccount(QWidget *parent = nullptr);
    ~CreatAccount();

private slots:
    void on_exitBtn_clicked();

    void on_choseBtn_clicked();

private:
    Ui::CreatAccount *ui;
};

#endif // CREATACCOUNT_H
