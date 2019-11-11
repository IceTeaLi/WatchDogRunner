#include "WatchDogRunner.h"

using namespace ipc;
using namespace hook;
using namespace process;

WatchDogRunner::WatchDogRunner(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.mainToolBar->hide();
	Init();
	server = new MsgIPCWnd;
	server->start();
	server->show();
	Process process(TEXT("C:\\Users\\leon\\AppData\\Local\\Kingsoft\\WPS Office\\ksolaunch.exe"),TEXT("C:\\Users\\leon\\Desktop\\office-test\\EXCEL\\wps\\2M.et"));
	process.WPSstart(TEXT("2M.et - WPS 2019"));
	PROCESS_INFORMATION pi;
	ZeroMemory(&pi, sizeof(pi));
	process.GetProcessInfo(pi);

	//process.stop();
	MsgInject hook(pi.dwThreadId, 0);
	hook.DoInject();

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


