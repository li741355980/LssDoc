#include<QApplication>
#include"pw_comboBox.h"
#include<QDialog>
#include<QHBoxLayout>

#include<QComboBox>
int main(int argc,char *argv[])
{
    QApplication app(argc,argv);
    pw_comboBox myBox;
    myBox.addItem("sadfasff");
    myBox.addItem("12a23f");
    myBox.addItem("134dfasff");
    myBox.addItem("67dfasff");
    myBox.setMaximumSize(40,15);

    myBox.setEditable(true);




    QDialog *dialog=new QDialog;
    QHBoxLayout *layout=new QHBoxLayout(dialog);
    layout->addWidget(&myBox);

    dialog->setLayout(layout);
    dialog->show();

    return app.exec();

}
