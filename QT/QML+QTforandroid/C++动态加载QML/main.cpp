#include<QApplication>
#include"QMLDynLoader.h"

int main(int argc,char *argv[])
{
	QApplication app(argc, argv); 
	QQmlApplicationEngine engine; engine.load(QUrl(QStringLiteral("qrc:///main.qml"))); 
	QMLDynLoader* loader = new QMLDynLoader();
 	loader->setEngine( &engine ); 
	loader->loadQml(QUrl::fromLocalFile("c:\\text.qml")); 
	return app.exec();
}