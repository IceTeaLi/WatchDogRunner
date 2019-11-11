#include "pch.h"
#include "CppUnitTest.h"
#include "..\WatchDogRunner\Process.h"
//#include "..\WatchDogRunner\WinFinder.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(ProcessClass)
		{
			LPTSTR szUrl = TEXT("C:\\Program Files (x86)\\Notepad++\\notepad++.exe");
			LPTSTR szCommand = TEXT("notepad++.exe C:\\Users\\leon\\Desktop\\1.bat");
			process::Process app(szUrl,szCommand);
			app.start();
			app.stop();
		}

	};
}
