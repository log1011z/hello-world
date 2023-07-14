#ifndef USERREADER_H
#define USERREADER_H

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
class UserReader;
}

class UserReader : public QDialog
{
    Q_OBJECT

public:
    explicit UserReader(QWidget *parent = nullptr);
    ~UserReader();

private slots:

    void on_exitBtn_clicked();

    void on_findBook_clicked();

    void on_borrowBook_clicked();

    void on_returnBook_clicked();

    void on_renewBook_clicked();

private:
    Ui::UserReader *ui;
    UserReader*reader;
};

#endif // USERREADER_H
