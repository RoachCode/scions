#include <iostream>
#include <windows.h>


int setCoord(int x, int y)
{
	int a{ x };
	int b{ y };
HANDLE hStdout;
COORD destCoord;
hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
destCoord.X = a;
destCoord.Y = b;
SetConsoleCursorPosition(hStdout, destCoord);
return 0;
}