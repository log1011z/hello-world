#ifndef BOOKS_H
#define BOOKS_H
#include<QString>

class Books
{
public:
    Books();
    ~Books();
    Books*next;
    QString num, kind, name, publish, date, state,writer;
    int price,day,md;
};

#endif // BOOKS_H
