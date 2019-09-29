#include "WatchDogRunner.h"

WatchDogRunner::WatchDogRunner(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.mainToolBar->hide();
	Init();
}

void WatchDogRunner::Init()
{
	this->resize(QSize(QApplication::desktop()->width() / 2, QApplication::desktop()->height() / 2));
	list = new ui_component::NavigationBar(this);

	ui_component::HelloWidget* hello = new ui_component::HelloWidget(this);
	
	main_layout = new QGridLayout(this);

	main_layout->setMargin(0);

	main_layout->setSpacing(0);

	main_layout->addWidget(list,0,0);

	main_layout->addWidget(hello,0,1);

	main_layout->setColumnStretch(0, 1);

	main_layout->setColumnStretch(1, 4);

	this->centralWidget()->setLayout(main_layout);
}


