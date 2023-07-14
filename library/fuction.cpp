#include "fuction.h"
Admin* findAdmin(QString n)
{
    Admin*p=headA,*q;
    while (p)
    {
        if (p->num == n)
        {
            q=p;
            return q;
        }
        p = p->next;
    }
    return NULL;
}
Teacher* findTeacher(QString n)
{
    Teacher*p=headT,*q;
    while (p)
    {
        if (p->num == n)
        {
            q=p;
            return q;
        }
        p = p->next;
    }
    return NULL;
}
Student* findStudent(QString n)
{
    Student*p=headS,*q;
    while (p)
    {
        if (p->num == n)
        {
            q=p;
            return q;
        }
        p = p->next;
    }
    return NULL;
}
Books* findBooks(QString n)
{
    Books*p=headB;
    while (p)
    {
        if (p->name == n)
        {

            return p;
        }
        p = p->next;
    }
    return NULL;
}
