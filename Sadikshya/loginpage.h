#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QMainWindow>
#include "admin.h"
#include "customer.h"

namespace Ui {
class loginpage;
}

class loginpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit loginpage(QWidget *parent = nullptr);
    ~loginpage();

private slots:
    void on_adminbutton_clicked();

    void on_customerbutton_clicked();

private:
    Ui::loginpage *ui;
    admin *admin;
    customer *customer;
};

#endif // LOGINPAGE_H
