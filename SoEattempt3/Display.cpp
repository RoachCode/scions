#include "getrandom.h"

void display()
{
	changeColour(white);
	std::cout << "\n                                                [a]    "; 
	changeColour(darkgrey);
	std::cout << "ATTACK   ";
	changeColour(white);

	if (statStrength() < 10)
	{
		std::cout << "                 [";
		changeColour(green);
		std::cout << "0" << statStrength();
		changeColour(white);
		std::cout << "]    ";
	}
	else
	{
		std::cout << "                 [";
		changeColour(green);
		std::cout << statStrength();
		changeColour(white);
		std::cout << "]    ";
	}
	

	changeColour(darkgrey);
	std::cout << "STRENGTH";
	changeColour(white);
	std::cout << "\n                                                [m]    "; 
	changeColour(darkgrey);
	std::cout << "MAGIC    ";
	changeColour(white);

	if (statDef() < 10)
	{
		std::cout << "                 [";
		changeColour(green);
		std::cout << "0" << statDef();
		changeColour(white);
		std::cout << "]    ";
	}
	else
	{
		std::cout << "                 [";
		changeColour(green);
		std::cout << statDef();
		changeColour(white);
		std::cout << "]    ";
	}

	changeColour(darkgrey);
	std::cout << "DEFENSE";
	changeColour(white);
	std::cout << "\n                                                [i]    ";
	changeColour(darkgrey);
	std::cout << "INVENTORY";
	changeColour(white);

	if (statStrength() < 10)
	{
		std::cout << "                 [";
		changeColour(green);
		std::cout << "0" << statWisdom();
		changeColour(white);
		std::cout << "]    ";
	}
	else
	{
		std::cout << "                 [";
		changeColour(green);
		std::cout << statWisdom();
		changeColour(white);
		std::cout << "]    ";
	}

	changeColour(darkgrey);
	std::cout << "WISDOM";
	changeColour(white);
	std::cout << "\n                                                [f]    ";
	changeColour(darkgrey);
	std::cout << "FLEE     ";
	changeColour(white);


	std::cout << "\n\n      ";
	std::cout << "\n                                                [LVL]   " << statLevel();
	std::cout << "\n                                                [EXP]   " << statXP(0);
	std::cout << "\n\n                                                [GOLD]  ";
	changeColour(yellow);
	std::cout << statGold(0) << '\n';
	changeColour(white);
}