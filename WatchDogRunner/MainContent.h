#pragma once
#include <QStackedWidget>
#include <QPainter>
#include <QGridLayout>
#include <QTextBrowser>

namespace ui_component
{
	class HelloWidget :public QWidget
	{
		Q_OBJECT
	public:
		HelloWidget(QWidget* parent = Q_NULLPTR);
		~HelloWidget();

	protected:

		virtual void paintEvent(QPaintEvent* e)override final;

	private:

		QGridLayout* main_layout;

		QTextBrowser* text_window;
	};

	class MainContent:public QStackedWidget
	{
		Q_OBJECT
	public:
		MainContent(QWidget* parent=Q_NULLPTR);
		~MainContent();

	private:
	};
}


