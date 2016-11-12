#include<QApplication>
#include"drawer.h"

int main(int argc,char *argv[]){
    QApplication app(argc,argv);
    drawer w;
    w.show();
    return app.exec();


}
