#ifndef BORROW_H
#define BORROW_H

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
class Borrow;
}

class Borrow : public QDialog
{
    Q_OBJECT

public:
    explicit Borrow(QWidget *parent = nullptr);
    ~Borrow();

private slots:
    void on_exitBtn_clicked();

    void on_choseBtn_clicked();

private:
    Ui::Borrow *ui;
};

#endif // BORROW_H
