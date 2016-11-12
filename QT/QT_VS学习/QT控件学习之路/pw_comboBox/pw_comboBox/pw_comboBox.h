#ifndef PW_COMBOBOX_H
#define PW_COMBOBOX_H

#include<QComboBox>


class pw_comboBox:public QComboBox
{
    Q_OBJECT
public:
    pw_comboBox(QWidget *parent=0);
public slots:
    void pw_showTip(QString);


};

#endif // PWCOMBOBOX_H
