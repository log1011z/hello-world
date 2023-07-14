#ifndef RETURN_H
#define RETURN_H

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
class Return;
}

class Return : public QDialog
{
    Q_OBJECT

public:
    explicit Return(QWidget *parent = nullptr);
    ~Return();

private slots:
    void on_exitBtn_clicked();

    void on_choseBtn_clicked();

private:
    Ui::Return *ui;
};

#endif // RETURN_H
