#ifndef CHOOSEACCOUNT_H
#define CHOOSEACCOUNT_H

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
class chooseAccount;
}

class chooseAccount : public QDialog
{
    Q_OBJECT

public:
    explicit chooseAccount(QWidget *parent = nullptr);
    ~chooseAccount();

private slots:
    void on_chooseBtn_clicked();

    void on_exitBtn_clicked();

    void on_enBtn_clicked();

private:
    Ui::chooseAccount *ui;
};

#endif // CHOOSEACCOUNT_H
