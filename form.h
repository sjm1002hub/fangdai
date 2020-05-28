#ifndef FORM_H
#define FORM_H
#include<iostream>
using namespace std;
#include <QWidget>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();
    QString gettext();
    void setclear();

private:
    Ui::Form *ui;
};

#endif // FORM_H
