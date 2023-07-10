
#include "getrandom.h"

void printGame()
{
	system("CLS");
	setCoord(0, 0);
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	std::cout <<
		"                                                     [ LOAD  GAME ]                                                     ";
	std::cout << "\n\n\n";
	changeColour(darkgrey);
	std::cout <<
		"                                                       NEW   GAME                                                       ";
	changeColour(white);
	setCoord(0, 0);
	

}
void printGame2()
{
	system("CLS");
	setCoord(0, 0);
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	changeColour(darkgrey);
	std::cout <<
		"                                                       LOAD  GAME                                                       ";
	std::cout << "\n\n\n";
	changeColour(white);
	std::cout <<
		"                                                     [ NEW   GAME ]                                                     ";
	setCoord(0, 0);
	
}

int loadGame()
{
	changeColour(darkgrey);
	printGame();
	std::this_thread::sleep_for(std::chrono::milliseconds(120));
	changeColour(lightgrey);
	printGame();
	std::this_thread::sleep_for(std::chrono::milliseconds(120));
	changeColour(white);
	printGame();

	return detectArrow2();
}