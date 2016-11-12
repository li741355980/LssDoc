#ifndef WINDOW2_H
#define WINDOW2_H
#include<QWidget>
#include"ui_window2.h"

class window2:public QWidget
{
public:
    window2(QWidget *parent=0);
private:
    Ui::window2 ui;
};
#endif // WINDOW2_H
