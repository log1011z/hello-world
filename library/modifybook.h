#ifndef MODIFYBOOK_H
#define MODIFYBOOK_H

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
class ModifyBook;
}

class ModifyBook : public QDialog
{
    Q_OBJECT

public:
    explicit ModifyBook(QWidget *parent = nullptr);
    ~ModifyBook();

private slots:
    void on_choseBtn_clicked();

    void on_exitBtn_clicked();

    void on_confirmBtn_clicked();

    void on_exitBtn1_clicked();

private:
    Ui::ModifyBook *ui;
};

#endif // MODIFYBOOK_H
