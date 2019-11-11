#pragma once
#include <QPushButton>
#include <QEvent>

#include <Windows.h>
#include<iostream>
#include <thread>
#include <mutex>


namespace window
{
	using std::thread;
	class WinFinderBtn :public QPushButton
	{
		Q_OBJECT
	public:
		WinFinderBtn();
		~WinFinderBtn();
	protected:
		virtual void mousePressEvent(QMouseEvent* e) override;
		virtual void mouseReleaseEvent(QMouseEvent* e) override;
	private:
		HWND target_wnd;
	};

	class WinFinder
	{
	public:
		WinFinder();
		~WinFinder();

		const HWND Start();

	private:
		bool is_start = false;

		HWND target_wnd;
		HRGN target_rgn;
		HBRUSH hbrush;

		std::mutex mutex;
		POINT pos;

		void BorderHighlight();

		const HWND& GetTargetHwnd()
		{
			std::lock_guard<std::mutex> lock(mutex);
			return  target_wnd;
		}

	};
}


