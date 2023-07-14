#ifndef TEACHER_H
#define TEACHER_H
#include<QMessageBox>
#include "books.h"

class Teacher
{
public:
    Teacher();
    ~Teacher();
    Teacher*next;
    int m_Numberxiao,m_Numberfxiao;
    QString name, tel, m_Kind,num,password;
    Books* bookHead;
    Books* findBook(QString);
};

#endif // TEACHER_H
