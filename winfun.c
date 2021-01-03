#include<stdio.h>
#include<windows.h>
#include<Winbase.h>
#include<wchar.h>
#pragma comment(lib, "user32.lib")

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR szCmdLine, int CmdShow) {

	int x = GetSystemMetrics(SM_CXSCREEN);
	int y = GetSystemMetrics(SM_CYSCREEN);
	wprintf(L"scrn size: %dx%d\n", x, y);

	wchar_t computerName[MAX_COMPUTERNAME_LENGTH+1];
	DWORD size = sizeof(computerName) / sizeof(*computerName);

	int n = GetComputerNameW(computerName, &size);
	if (n==0)
	 {
	 	wprintf(L"Failed to get comp name. %ld", GetLastError());
	 	return 1;
	 } 

	 wprintf(L"Comp name: %ls \n", computerName);

	return 0;
}
