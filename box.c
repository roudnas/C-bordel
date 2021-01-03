
#define UNICODE
#include<windows.h>
#include<stdio.h>
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR szCmdLine, int CmdShow) {

	MessageBox(NULL, L"Hello!", L"Karel", MB_OK);
	

	return 0;
}
