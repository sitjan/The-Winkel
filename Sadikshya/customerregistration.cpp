#include "customerregistration.h"
#include "ui_customerregistration.h"
#include <QMessageBox>

customerregistration::customerregistration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerregistration)
{
    ui->setupUi(this);
}

customerregistration::~customerregistration()
{
    delete ui;
}

void customerregistration::on_registerbutton_clicked()
{
    QMessageBox::information(this,"Registered","You have successfully registered. You may login now.");
    hide();
}

