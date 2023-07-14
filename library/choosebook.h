#ifndef CHOOSEBOOK_H
#define CHOOSEBOOK_H

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
class ChooseBook;
}

class ChooseBook : public QDialog
{
    Q_OBJECT

public:
    explicit ChooseBook(QWidget *parent = nullptr);
    ~ChooseBook();

private slots:
    void on_confirmBtn_clicked();

    void on_exitBtn_clicked();

    void on_enBtn_clicked();

private:
    Ui::ChooseBook *ui;
};

#endif // CHOOSEBOOK_H
