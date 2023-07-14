#ifndef DELETEACCOUNT_H
#define DELETEACCOUNT_H

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
class DeleteAccount;
}

class DeleteAccount : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteAccount(QWidget *parent = nullptr);
    ~DeleteAccount();

private slots:
    void on_chooseBtn_clicked();

    void on_exitBtn_clicked();

private:
    Ui::DeleteAccount *ui;
};

#endif // DELETEACCOUNT_H
