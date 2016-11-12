#include"drawer.h"
#include<QGroupBox>
#include<QHBoxLayout>
#include<QVBoxLayout>
drawer::drawer(QWidget *parent):QToolBox(parent){

    setWindowTitle(tr("My QQ"));

    QGroupBox *groupBox1 = new QGroupBox();

    toolButton1_1 = new QToolButton( );
    toolButton1_1->setText( tr( "beibei" ) );
    toolButton1_1->setIcon( QPixmap("://8080/1.PNG") );
    toolButton1_1->setIconSize( QPixmap("://8080/1.PNG").size() );
    toolButton1_1->setAutoRaise( true );
    toolButton1_1->setToolButtonStyle( Qt::ToolButtonTextUnderIcon);


    toolButton1_2 = new QToolButton();
    toolButton1_2->setText( tr( "jingjing" ) );
    toolButton1_2->setIcon( QPixmap( "://8080/2.PNG") );
    toolButton1_2->setIconSize( QPixmap( "://8080/2.PNG").size() );
    toolButton1_2->setAutoRaise( true );
    toolButton1_2->setToolButtonStyle( Qt::ToolButtonTextUnderIcon);


    QVBoxLayout *layout1 = new QVBoxLayout(groupBox1);
    layout1->setMargin(10);
    layout1->setAlignment(Qt::AlignHCenter);
    layout1->addWidget(toolButton1_1);
    layout1->addWidget(toolButton1_2);
    layout1->addStretch();

    QGroupBox *groupBox2 = new QGroupBox();

    toolButton2_1 = new QToolButton( );
    toolButton2_1->setText( tr( "pizicai" ) );
    toolButton2_1->setIcon( QPixmap( "://8080/3.PNG" ) );
    toolButton2_1->setIconSize( QPixmap( "://8080/3.PNG").size() );
    toolButton2_1->setAutoRaise( true );
    toolButton2_1->setToolButtonStyle( Qt::ToolButtonTextUnderIcon);

    toolButton2_2 = new QToolButton();
    toolButton2_2->setText( tr( "feiyang" ) );
    toolButton2_2->setIcon( QPixmap( "://8080/4.PNG") );
    toolButton2_2->setIconSize( QPixmap( "://8080/4.PNG").size() );
    toolButton2_2->setAutoRaise( true );
    toolButton2_2->setToolButtonStyle( Qt::ToolButtonTextUnderIcon);

    QVBoxLayout *layout2 = new QVBoxLayout(groupBox2);
    layout2->setMargin(10);
    layout2->setAlignment(Qt::AlignHCenter);
    layout2->addWidget(toolButton2_1);
    layout2->addWidget(toolButton2_2);
    layout2->addStretch();

    QGroupBox *groupBox3 = new QGroupBox();

    toolButton3_1 = new QToolButton( );
    toolButton3_1->setText( tr( "QQ" ) );
    toolButton3_1->setIcon( QPixmap( "://8080/5.PNG" ) );
    toolButton3_1->setIconSize( QPixmap( "://8080/5.PNG").size() );
    toolButton3_1->setAutoRaise( true );
    toolButton3_1->setToolButtonStyle( Qt::ToolButtonTextUnderIcon);

    toolButton3_2 = new QToolButton();
    toolButton3_2->setText( tr( "angel" ) );
    toolButton3_2->setIcon( QPixmap( "://8080/6.PNG") );
    toolButton3_2->setIconSize( QPixmap( "://8080/6.PNG").size() );
    toolButton3_2->setAutoRaise( true );
    toolButton3_2->setToolButtonStyle( Qt::ToolButtonTextUnderIcon);

    QVBoxLayout *layout3 = new QVBoxLayout(groupBox3);
    layout3->setMargin(10);
    layout3->setAlignment(Qt::AlignHCenter);
    layout3->addWidget(toolButton3_1);
    layout3->addWidget(toolButton3_2);
    layout3->addStretch();

    this->addItem( ( QWidget* )groupBox1 , tr("my friends" ));
    this->addItem( ( QWidget* )groupBox2 , tr("stranger" ));
    this->addItem( ( QWidget* )groupBox3 , tr("blacklist" ));

}
