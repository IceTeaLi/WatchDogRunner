#include "WinFinder.h"



window::WinFinder::WinFinder()
{
	hbrush = CreateSolidBrush(RGB(255,0,0));
}


window::WinFinder::~WinFinder()
{
}

const HWND window::WinFinder::Start()
{
	is_start = true;
	//std::thread start(&BorderHighlight);
	is_start = false;
	//start.join();
	return GetTargetHwnd();
}

void window::WinFinder::BorderHighlight()
{
	while (is_start)
	{
		mutex.lock();
		target_wnd = WindowFromPoint(pos);
		mutex.unlock();
		try {
			int ret = GetWindowRgn(target_wnd, target_rgn);
			if (ret == ERROR)
				throw ret;
		}
		catch (int& ret)
		{
			std::cerr << "error rgn";
		}
		FrameRgn(GetDC(target_wnd), target_rgn, hbrush, 10, 10);
	}
}

window::WinFinderBtn::~WinFinderBtn()
{
}

void window::WinFinderBtn::mousePressEvent(QMouseEvent* e)
{
}

void window::WinFinderBtn::mouseReleaseEvent(QMouseEvent* e)
{
}
