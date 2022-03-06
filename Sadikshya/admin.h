#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>

namespace Ui {
class admin;
}

class admin : public QDialog
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

private slots:
    void on_checkusernamebutton_clicked();

    void on_loginbutton_clicked();

private:
    Ui::admin *ui;
    QString username,password;
};

#endif // ADMIN_H
