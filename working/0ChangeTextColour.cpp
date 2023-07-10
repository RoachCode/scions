#include <windows.h>
#include <iostream>
/*
const int black = 0;
const int blue = 1;
const int green = 2;
const int cyan = 3;
const int red = 4;
const int magenta = 5;
const int brown = 6;
const int lightgrey = 7;            (num + num) * 16
const int darkgrey = 8;
const int lightblue = 9;
const int lightgreen = 10;
const int lightcyan = 11;
const int lightred = 12;
const int lightmagenta = 13;
const int yellow = 14;
const int white = 15;
*/
void changeColour(int colour)
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, colour);
}