#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "customerregistration.h"

#include <QMainWindow>

namespace Ui {
class customer;
}

class customer : public QMainWindow
{
    Q_OBJECT

public:
    explicit customer(QWidget *parent = nullptr);
    ~customer();

private slots:
    void on_loginbutton_clicked();

    void on_registerbutton_clicked();

private:
    Ui::customer *ui;
    customerregistration *cr;
};

#endif // CUSTOMER_H
