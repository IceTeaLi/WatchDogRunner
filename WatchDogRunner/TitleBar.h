#pragma once
#include <QWidget>
#include <QHBoxLayout>

namespace ui_component
{
	class TitleBar:public QWidget
	{
	public:
		TitleBar(QWidget* parent=Q_NULLPTR);
		~TitleBar();

	protected:
		virtual void paintEvent(QPaintEvent* event) override;
		virtual void mouseDoubleClickEvent(QMouseEvent* event) override;
		virtual void mousePressEvent(QMouseEvent* event) override;
		virtual void mouseMoveEvent(QMouseEvent* event) override;
		virtual void mouseReleaseEvent(QMouseEvent* event) override;

	private:
		QHBoxLayout* main_layout;
	};

}

