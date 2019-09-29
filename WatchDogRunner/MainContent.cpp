#include "MainContent.h"



ui_component::MainContent::MainContent(QWidget* parent)
	:QStackedWidget(parent)
{
	
}


ui_component::MainContent::~MainContent()
{
}

ui_component::HelloWidget::HelloWidget(QWidget* parent)
	:QWidget(parent)
{
	this->setFont(QFont("Segoe Script"));

	text_window = new QTextBrowser(this);
	text_window->setText(QString("WatchDog Runner"));
	text_window->setFontPointSize(40);

	main_layout = new QGridLayout(this);

	main_layout->addWidget(text_window);
	this->setLayout(main_layout);
}

ui_component::HelloWidget::~HelloWidget()
{

}

void ui_component::HelloWidget::paintEvent(QPaintEvent* e)
{
}
