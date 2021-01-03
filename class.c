#include<windows.h>
#include<wchar.h>
int wmain(int argc, wchar_t **argv) {
 PDWORD cChars = NULL;
 HANDLE std = GetStdHandle(STD_OUTPUT_HANDLE);
 
 if (std == INVALID_HANDLE_VALUE)
 {
 	wprintf(L"Can't retrieve handle. \n (%d)", GetLastError());
 }

 if (argv[1])
 {
 	WriteConsoleW(std, argv[1], wcslen(argv[1]), cChars, NULL);
 }

 CloseHandle(std);

 return 0;

}