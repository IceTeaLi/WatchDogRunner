#pragma once
#include <QWidget>
#include <QTabWidget>

namespace gui
{

	class Hello :public QWidget
	{
		Q_OBJECT
	public:
		Hello(QWidget* parent = Q_NULLPTR);
		~Hello() {};

	private:

	};

	class Info :public QWidget
	{
		Q_OBJECT
	public:
		Info(QWidget* parent = Q_NULLPTR);
		~Info() {};

	private:

	};


	class MainWidget :public QTabWidget
	{
		Q_OBJECT
	public:
		MainWidget(QWidget* parent = Q_NULLPTR);
		~MainWidget() {};

	private:
		Hello* hello;
		Info* info;
	};
}
