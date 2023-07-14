#ifndef STUDENT_H
#define STUDENT_H
#include<QMessageBox>
#include "books.h"

class Student
{
public:
    Student();
    ~Student();
    Student*next;
    int m_Numberxiao,m_Numberfxiao;
    QString name, tel, m_Kind,num,password;
    Books* bookHead;
    Books* findBook(QString);
};

#endif // STUDENT_H
