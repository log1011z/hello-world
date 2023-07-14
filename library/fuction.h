#ifndef FUCTION_H
#define FUCTION_H
#include "books.h"
#include "student.h"
#include "teacher.h"
#include "admin.h"
extern Books*headB,*pB;
extern Student*headS,*pS;
extern Admin*headA,*pA;
extern Teacher*headT,*pT;
Admin* findAdmin(QString);
Teacher* findTeacher(QString);
Books* findBooks(QString);
Student* findStudent(QString);
#endif // FUCTION_H
