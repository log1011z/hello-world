#include "teacher.h"

Teacher::Teacher()
{

}
Teacher::~Teacher()
{
    delete this;
}
Books* Teacher::findBook(QString n)
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
