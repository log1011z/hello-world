#ifndef RENEW_H
#define RENEW_H

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
class Renew;
}

class Renew : public QDialog
{
    Q_OBJECT

public:
    explicit Renew(QWidget *parent = nullptr);
    ~Renew();

private slots:
    void on_exitBtn_clicked();

    void on_choseBtn_clicked();

private:
    Ui::Renew *ui;
};

#endif // RENEW_H
