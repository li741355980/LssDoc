#ifndef WINDOW1_H
#define WINDOW1_H
#include<QWidget>
#include"ui_window1.h"

class window1:public QWidget
{
public:
    window1(QWidget *parent=0);
private:
    Ui::window1 ui;
};

#endif // WINDOW1_H
