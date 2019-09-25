#include "TabWidget.h"

using namespace gui;

Hello::Hello(QWidget* parent)
	:QWidget(parent)
{

}

Info::Info(QWidget* parent)
	: QWidget(parent)
{

}

MainWidget::MainWidget(QWidget* parent)
	: QTabWidget(parent)
{
	this->setTabPosition(TabPosition::West);
	hello = new Hello(this);
	info = new Info(this);
	this->addTab(hello, QString("WatchDog"));
	this->addTab(info, QString("Information"));
}