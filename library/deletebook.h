#ifndef DELETEBOOK_H
#define DELETEBOOK_H

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
class DeleteBook;
}

class DeleteBook : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteBook(QWidget *parent = nullptr);
    ~DeleteBook();

private slots:
    void on_chooseBookBtn_clicked();

    void on_exitBtn_clicked();

private:
    Ui::DeleteBook *ui;
};

#endif // DELETEBOOK_H
