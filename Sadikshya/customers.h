#ifndef CUSTOMERS_H
#define CUSTOMERS_H

#include <QDialog>

namespace Ui {
class customers;
}

class customers : public QDialog
{
    Q_OBJECT

public:
    explicit customers(QWidget *parent = nullptr);
    ~customers();

private slots:
   // void on_registerbutton_clicked();

private:
    Ui::customers *ui;
};

#endif // CUSTOMERS_H
