#pragma once
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QStyleOption>
#include <QPainter>

namespace ui_component
{

	class ButtonList
	{
	public:
		ButtonList(QWidget* parent = Q_NULLPTR);
		~ButtonList() {};

		QVBoxLayout* Layout()const { return layout; }

		inline void AddBtn(QPushButton* btn)
		{
			this->layout->addWidget(btn); 
		}
		
	private:

		QVBoxLayout* layout;

		void Init(QWidget* parent);
	};

	class NavigationBar :public QWidget
	{
		Q_OBJECT
	public:
		NavigationBar(QWidget* parent = Q_NULLPTR);
		~NavigationBar();

	protected:
		virtual void paintEvent(QPaintEvent* e)override;

	private:
		QPushButton* hello_btn;
		QPushButton* information_btn;
		QPushButton* execute_btn;
		QPushButton* setting_btn;

		ButtonList* list;

		void Init();
	};
}

