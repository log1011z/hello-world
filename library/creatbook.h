#ifndef CREATBOOK_H
#define CREATBOOK_H

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
class CreatBook;
}

class CreatBook : public QDialog
{
    Q_OBJECT

public:
    explicit CreatBook(QWidget *parent = nullptr);
    ~CreatBook();

private slots:
    void on_exitBtn_clicked();

    void on_choseBtn_clicked();

private:
    Ui::CreatBook *ui;
};

#endif // CREATBOOK_H
