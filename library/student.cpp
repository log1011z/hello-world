#include "student.h"

Student::Student()
{

}
Student::~Student()
{
    delete this;
}
Books* Student::findBook(QString n)
{
    Books*p=bookHead;
    while(p)
    {
        if(p->name==n)
        {
            return p;
        }
        p=p->next;
    }
    return NULL;
}
