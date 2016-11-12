#include"QMLDYnLoader.h"

QMLDynLoader::QMLDynLoader()
{ 
	this->mEngine_ = NULL; 
	this->mView_ = NULL; 
	this->mParentWindow_ = NULL;
}
void QMLDynLoader::setEngine(QQmlApplicationEngine *engine)
{ 
	this->mEngine_ = engine ; 
	if( this->mEngine_ == NULL ) 
	{ 
		emit this->sError("��ʼ��qml����ʧ��"); 
		return ; 
	}
 	this->mEngine_->clearComponentCache(); 
	if( this->mView_ ) return ; //��ȡ������ 
	if( this->mEngine_->rootObjects().count( ) >= 0 )
	{
		this->mParentWindow_ =qobject_cast( this->mEngine_->rootObjects().value(0)); 
		if(this->mParentWindow_ == NULL )
 		{ 
			emit this->sError("�޷���������QML�������ȼ���������."); 
			return ; 
		} 
	} 
	this->mView_ = new QQuickView(this->mEngine_ , this->mParentWindow_ );
}
void QMLDynLoader::loadQml(const QUrl& qmlFile)
{
 	if(this->mView_) 
	{ 
		this->mView_->setSource(qmlFile); 
		this->mView_->show(); 
	}
}
