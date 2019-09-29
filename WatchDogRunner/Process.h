#pragma once
#include <Windows.h>

namespace process
{
	class Process
	{
	public:
		Process(const LPCTSTR url, const LPTSTR command);
		~Process();

		virtual bool start();
		virtual bool stop();
		virtual bool GetProcessInfo(PROCESS_INFORMATION&);
	private:
		LPCTSTR app_addr;
		LPTSTR app_command;

		STARTUPINFO si;
		PROCESS_INFORMATION pi;

		bool IsRunning();
	};

}


