#include "mainwindow.h"
#include <QPushButton>
#include <QApplication>
#include <QTextCodec>
#include <QtGui>
#include "books.h"
#include "student.h"
#include "teacher.h"
#include "admin.h"
Books*headB,*pB;
Student*headS,*pS;
Admin*headA,*pA;
Teacher*headT,*pT;
void init()
{
    headA=new Admin;
    headT= new Teacher;
    headS= new Student;
    headB = new Books;
    headA->num="123456";
    headA->password="123456";
    headA->next=NULL;
    headT->num="200000000";
    headT->password="123456";
    headT->name="小祁";
    headT->tel="12345678909";
    headT->next=NULL;
    headS->num="10000000000";
    headS->password="123456";
    headS->name="小六";
    headS->tel="12345678909";
    headS->next=NULL;
    headB->num="1001";
    headB->name="兄弟";
    headB->date="1992";
    headB->price=20;
    headB->publish="文艺出版社";
    headB->kind="小说";
    headB->writer="余华";
    headB->state="可借";
    headB->next=NULL;
    pS=headS;
    pT=headT;
    pA=headA;
    pB=headB;
}

int main(int argc, char *argv[])
{
    init();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    a.exec();
}
