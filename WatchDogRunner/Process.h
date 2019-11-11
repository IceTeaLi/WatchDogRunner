#pragma once
#include <Windows.h>
#include <TlHelp32.h>
#include <time.h>

namespace process
{
	class Process
	{
	public:
		Process() = default;
		explicit Process(const LPCTSTR url, const LPTSTR command);
		~Process();

		virtual bool start();
		virtual bool cmdStart();
		bool WPSstart(const LPCTSTR name);
		virtual bool stop();
		virtual bool GetProcessInfo(PROCESS_INFORMATION&);

	private:
		LPCTSTR app_addr;
		LPTSTR app_command;

		STARTUPINFO si;
		PROCESS_INFORMATION pi;

		SHELLEXECUTEINFO shell_exec_info;

		bool IsRunning();
		const DWORD TransformToTid(const DWORD &pid);
	};

}


