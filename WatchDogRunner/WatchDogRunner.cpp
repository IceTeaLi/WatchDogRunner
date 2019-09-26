#include "WatchDogRunner.h"

WatchDogRunner::WatchDogRunner(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	Init();
}

void WatchDogRunner::Init()
{
	this->resize(QSize(QApplication::desktop()->width() / 2, QApplication::desktop()->height() / 2));
	list = new ui_component::NavigationBar(this);
	list->resize(this->size().width() / 5, this->size().height());
}
