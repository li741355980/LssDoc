#include"pw_comboBox.h"
#include<QComboBox>
#include<QToolTip>
#include<QCursor>



pw_comboBox::pw_comboBox(QWidget *parent):QComboBox(parent)
{

    connect(this,SIGNAL(highlighted(QString)),this,SLOT(pw_showTip(QString)));
}

void pw_comboBox::pw_showTip(QString str)
{

    QToolTip::showText(QCursor::pos(),str);

}

