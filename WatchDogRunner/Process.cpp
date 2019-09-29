#include "Process.h"



process::Process::Process(const LPCTSTR url, const LPTSTR command)
	:app_addr(url)
	,app_command(command)
{
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));
}


process::Process::~Process()
{
}

bool process::Process::start()
{
	return CreateProcess(app_addr,
		app_command,
		NULL,
		NULL,
		FALSE,
		0,
		NULL,
		NULL,
		&si,
		&pi);
}

bool process::Process::stop()
{
	if (IsRunning())
	{
		TerminateProcess(pi.hProcess, 0);
		CloseHandle(pi.hProcess);
		CloseHandle(pi.hThread);
		return true;
	}


	return false;
}

bool process::Process::GetProcessInfo(PROCESS_INFORMATION& info)
{
	if (IsRunning())
	{
		info = pi;
		return true;
	}
	return false;
}

bool process::Process::IsRunning()
{
	DWORD exit_code;
	try
	{
		if (!GetExitCodeProcess(pi.hProcess, &exit_code))
			throw GetLastError();
	}
	catch (DWORD &e)
	{
		MessageBox(0, (LPCTSTR)e, 0, 0);
	}
	if (exit_code == STILL_ACTIVE)
		return true;
	return false;
}
