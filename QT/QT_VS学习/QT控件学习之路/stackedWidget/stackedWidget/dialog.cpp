#include"dialog.h"
#include<QHBoxLayout>

Widget::Widget(QWidget *parent):QWidget(parent){
    list=new QListWidget(this);
    stack=new QStackedWidget(this);
    w1=new window1(this);
    w2=new window2(this);
    w3=new window3(this);

    list->addItem("window1");
    list->addItem("window2");
    list->addItem("window3");
    stack->addWidget(w1);
    stack->addWidget(w2);
    stack->addWidget(w3);

    QHBoxLayout *layout=new QHBoxLayout(this);
    layout->addWidget(list);
    layout->addWidget(stack);
    layout->setStretchFactor(list,1);
    layout->setStretchFactor(stack,3);
    setLayout(layout);
    connect(list,SIGNAL(currentRowChanged(int)),stack,SLOT(setCurrentIndex(int)));


}
