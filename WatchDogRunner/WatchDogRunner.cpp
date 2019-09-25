#include "WatchDogRunner.h"

WatchDogRunner::WatchDogRunner(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);


	main_layout = new QGridLayout(this);

	main_layout->setContentsMargins(0, 0, 0, 0);
	this->centralWidget()->setLayout(main_layout);
}
