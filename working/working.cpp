#include <windows.h>
#include <iostream>
#include <stdlib.h>     //   not needed for colour change


int main()
{
    system("CLS");
    changeColour(red);
    std::cout << "Hello World!\n\n\n\n" << std::flush;
    system("PAUSE");
    system("CLS");
    std::cout << "Goodbye World!\n";
    system("PAUSE");
    return 0;
}