#include "getrandom.h"
/*
using std::cout;
using std::flush;
using std::string;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;
*/
void slowPrint(string message, int gimmetime)		// OLD-CODE:::: ...(const string &mess...
{
	for (const char c : message)
	{
		std::cout << c << flush;
		int v{ gimmetime };
		std::this_thread::sleep_for(std::chrono::milliseconds(v - 1));
													// OLD-CODE:::: Sleep(v);
													// OLD-CODE:::: sleep_for(milliseconds(millisecondsPerChar));
	}
}