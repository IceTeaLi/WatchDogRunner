#include "NavigationBar.h"
#include "WatchDogRunner.h"

using namespace ui_component;

ButtonList::ButtonList(QWidget* parent)
{
	Init(parent);
}

void ButtonList::Init(QWidget* parent)
{
	layout = new QVBoxLayout(parent);
	//this->layout->setContentsMargins(0, 0, 0, 0);
	this->layout->setMargin(0);
	this->layout->setSpacing(0);
}

NavigationBar::NavigationBar(QWidget* parent)
	:QWidget(parent)
{
	Init();
}

NavigationBar::~NavigationBar()
{

}

void ui_component::NavigationBar::paintEvent(QPaintEvent* e)
{
	QPainter p(this);
	p.fillRect(this->rect(), QColor(38, 38, 38));
}

void NavigationBar::Init()
{
	this->setWindowFlag(Qt::FramelessWindowHint);

	list = new ButtonList(this);

	hello_btn = new QPushButton(this);
	hello_btn->setText(QString(u8"Hello"));
	information_btn = new QPushButton(this);
	information_btn->setText(QString(u8"Information"));
	execute_btn = new QPushButton(this);
	execute_btn->setText(QString(u8"Execute"));
	setting_btn = new QPushButton(this);
	setting_btn->setText(QString(u8"Setting"));

	list->AddBtn(hello_btn);
	list->AddBtn(information_btn);
	list->AddBtn(execute_btn);
	list->AddBtn(setting_btn);

	list->Layout()->addStretch();

	this->setLayout(list->Layout());

}
