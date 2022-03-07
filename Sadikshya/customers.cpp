#include "customers.h"
#include "ui_customers.h"
#include"customerregistration.h"

customers::customers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customers)
{
    ui->setupUi(this);

}

customers::~customers()
{
    delete ui;
}



