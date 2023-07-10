#pragma once
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <string>
#include <thread>
#include <chrono>
#include <cctype>

const int black = 0;
const int blue = 1;
const int green = 2;
const int cyan = 3;
const int red = 4;
const int magenta = 5;
const int brown = 6;
const int lightgrey = 7;
const int darkgrey = 8;
const int lightblue = 9;
const int lightgreen = 10;
const int lightcyan = 11;
const int lightred = 12;
const int lightmagenta = 13;
const int yellow = 14;
const int white = 15;

int newGame();
int oldGame();
int setCoord(int x, int y);
void printGame();
void printGame2();
int loadGame();
int detectArrow();
int main();
void changeColour(int colour);
using std::flush;
using std::string;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;
void slowPrint(const string& message, unsigned int millisecondsPerChar);