#ifndef DIALOG_H
#define DIALOG_H

#include<QStackedWidget>
#include<QListWidget>
#include<QDialog>
#include<QWidget>
#include"window1.h"
#include"window2.h"
#include"window3.h"

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = 0);

private:
    QListWidget* list;
    QStackedWidget* stack;
    window1 *w1;
    window2 *w2;
    window3 *w3;

};


#endif // DIALOG_H
