#ifndef LOGINMAIN_H
#define LOGINMAIN_H

#include <QDialog>

namespace Ui {
class LoginMain;
}

class LoginMain : public QDialog
{
    Q_OBJECT

public:
    explicit LoginMain(QWidget *parent = nullptr);
    ~LoginMain();

private:
    Ui::LoginMain *ui;
};

#endif // LOGINMAIN_H
