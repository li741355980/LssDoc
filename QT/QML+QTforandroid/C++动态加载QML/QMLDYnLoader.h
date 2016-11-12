#ifndef QMLDYNLOADER_H
#define QMLDYNLOADER_H


#include<QObject>
#include<QQuickView>
#include<QQmlApplicationEngine>
#include<QString>

class QMLDynLoader : public QObject{ 
	Q_OBJECT
public: 
	QMLDynLoader(); 
	void setEngine( QQmlApplicationEngine* engine ); 
	void loadQml(const QUrl& qmlFile );
private: 
	QQuickView* mView_; //��ʾ��view 
	QQuickWindow* mParentWindow_; //��ܵĸ����� 
	QQmlApplicationEngine*   mEngine_;
signals: 
	void sError(const QString errorMsg);
};
#endif
