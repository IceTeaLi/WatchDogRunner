#include "ProcessClass.h"



process::Process::Process(const LPCTSTR url, const LPTSTR command)
	:app_addr(url)
	,app_command(command)
{
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));

	ZeroMemory(&shell_exec_info, sizeof(SHELLEXECUTEINFO));
	shell_exec_info.cbSize = sizeof(SHELLEXECUTEINFO);
	shell_exec_info.fMask = SEE_MASK_NOCLOSEPROCESS;
	shell_exec_info.hwnd = NULL;
	shell_exec_info.lpVerb = NULL;
	shell_exec_info.lpFile = app_addr;
	shell_exec_info.lpParameters = app_command;
	shell_exec_info.lpDirectory = NULL;
	shell_exec_info.nShow = SW_SHOW;
	shell_exec_info.hInstApp = NULL;
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

bool process::Process::cmdStart()
{

	BOOL ret = ShellExecuteEx(&shell_exec_info);
	pi.hProcess = shell_exec_info.hProcess;
	pi.dwProcessId = GetProcessId(pi.hProcess);
	pi.hProcess = OpenProcess(PROCESS_ALL_ACCESS, false, pi.dwProcessId);
	return ret;
}

bool process::Process::WPSstart(const LPCTSTR name)
{
	BOOL ret = ShellExecuteEx(&shell_exec_info);
	clock_t start, finish;
	double duration=0;
	start = clock();
	while (duration < 5000)
	{
		if (FindWindow(0, name) != NULL)
			break;
		finish = clock();
		duration = finish - start;
		Sleep(50);
	}
	HWND wnd = FindWindow(0, name);
	pi.dwThreadId = GetWindowThreadProcessId(wnd, &pi.dwProcessId);
	pi.hProcess = OpenProcess(PROCESS_ALL_ACCESS, false, pi.dwProcessId);
	return true;
}

bool process::Process::stop()
{
	if (IsRunning())
	{
		if (pi.hProcess != NULL)
		{
			TerminateProcess(pi.hProcess, 0);
			CloseHandle(pi.hProcess);
			CloseHandle(pi.hThread);
			return true;
		}
	}
	return false;
}

bool process::Process::GetProcessInfo(PROCESS_INFORMATION& info)
{
	if (IsRunning()&& shell_exec_info.hProcess!=NULL)
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
		if (OpenProcess(PROCESS_ALL_ACCESS,false, pi.dwProcessId)==NULL)
			throw GetLastError();
	}
	catch (DWORD &e)
	{
		MessageBox(0, (LPCTSTR)e, 0, 0);
		return false;
	}
	return true;
}

const DWORD process::Process::TransformToTid(const DWORD& pid)
{
	THREADENTRY32 th32;
	PROCESSENTRY32 pe32;
	th32.dwSize = sizeof(THREADENTRY32);
	HANDLE thread_snap = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, pid);
	if (thread_snap == INVALID_HANDLE_VALUE)
	{
		return -1;
	}
	bool b_th32 = Thread32First(thread_snap, &th32);
	while (b_th32)
	{
		b_th32= Thread32Next(thread_snap, &th32);
	}
	return th32.th32ThreadID;
}
