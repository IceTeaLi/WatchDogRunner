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
	
}
