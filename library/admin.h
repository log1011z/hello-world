#ifndef ADMIN_H
#define ADMIN_H
#include<QString>

class Admin
{
public:
    Admin();
    ~Admin();
    QString num,password;
    Admin*next;
};

#endif // ADMIN_H
