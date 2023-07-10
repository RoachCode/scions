#include <iostream>
#include "getrandom.h"

#define KEY_UP 72       //Up arrow character
#define KEY_DOWN 80    //Down arrow character
#define KEY_ENTER '\r'//Enter key charatcer
#define KEY_LEFT 75
#define KEY_RIGHT 77
string aba{ "\n NO ENEMY!         \n\n" };
string aa{ " YOU HAVE STUMBLED ACROSS A SMALL HOVEL ADORNED WITH A MERCANTILE FLAG." };
string bb33{ " THE DOUR FACE OF A DWARF GREETS YOU THROUGH A SLOT IN THE DOOR." };
string bb44{ " A PACK-LADEN TRAVELLER EYES YOU SUSPICIOUSLY FROM HIS TEMPORARY SHELTER." };
string bb55{ " A MUTE GIANT OFFERS A TOOTHLESS GRIN AND BECKONS TO A STREWN PILE OF WARES." };

int aabb{ getRandom(50) };

void printMerch()
{
	system("CLS");

	std::cout << aba << aa << '\n' << '\n';

	if (aabb < 33)
	{
		std::cout << bb33;
	}
	else if (aabb < 66)
	{

		std::cout << bb44;
	}
	else if (aabb < 101)
	{

		std::cout << bb55;
	}

	setCoord(0, 0);
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	std::cout <<
		"                                                     [ ENTER SHOP ]                                                     ";
	std::cout << "\n\n\n";
	changeColour(darkgrey);
	std::cout <<
		"                                                          EXIT                                                          ";
	changeColour(white);
	setCoord(0, 0);


}
void printMerch2()
{
	system("CLS");
	std::cout << aba << aa << '\n' << '\n';

	if (aabb < 33)
	{
		std::cout << bb33;
	}
	else if (aabb < 66)
	{

		std::cout << bb44;
	}
	else if (aabb < 101)
	{

		std::cout << bb55;
	}
	setCoord(0, 0);
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	changeColour(darkgrey);
	std::cout <<
		"                                                       ENTER SHOP                                                       ";
	std::cout << "\n\n\n";
	changeColour(white);
	std::cout <<
		"                                                        [ EXIT ]                                                        ";
	setCoord(0, 0);

}

// This may be called bugbearhp but right now its a working folder for all battles.
void merchant(int n, int e, int s, int w, int fl)
{
	slowPrint(aba, 15);
	slowPrint(aa, 15);
	
	std::cout << "\n\n";
	if (aabb < 33)
	{
		slowPrint(bb33, 15);
	}
	else if (aabb < 66)
	{
		slowPrint(bb44, 15);
	}
	else if (aabb < 101)
	{
		slowPrint(bb55, 15);
	}
	printMerch();
	std::cout << "\n\n";
		int selected = 0;                      //Keeps track of which option is selected.
		int numChoices = 2;                     //The number of choices we have.
		bool selecting = true;                  //True if we are still waiting for the user to press enter.
		bool updated = false;                   //True if the selected value has just been updated.

		char c;                              //Store c outside of loop for efficiency.
		while (selecting)
		{                                       //As long as we are selecting...
			switch ((c = _getch()))
			{                                   //Check value of the last inputed character.
			case KEY_UP:
				if (selected > 0)
				{ //Dont decrement if we are at the first option.
					--selected;
					updated = true;
					printMerch();
				}
				break;
			case KEY_DOWN:
				if (selected < numChoices - 1)
				{ //Dont increment if we are at the last option.
					++selected;
					updated = true;
					printMerch2();
				}
				break;
			case KEY_ENTER:
				//We are done selecting the option.
				selecting = false;
				break;
			default: break;
			}
			if (updated)
			{                                       //Lets us know what the currently selected value is.

				//std::cout << "Option " << (selected + 1) << " is selected.\n";
				updated = false;
			}
		}
		//Lets us know what we ended up selecting.

		if ((selected + 1) == 1)
		{
			system("CLS");
			loadStore(n, e, s, w, fl);
		}
		else if ((selected + 1) == 2)
		{
			system("CLS");
			boxMaker(n, e, s, w, fl);  ////////////  was map 00000
		}
	
}
int monsterpicker()
{
	int battle{ 0 };
	int battle2{ 0 };
								 // Always ">", descending value
	if (statLevel() > 3)
	{
		battle2 = getRandom(52);
	}
	battle = getRandom(52) + battle2;


	if (battle < 5)
	{
		std::cout << " SWAMP RAT";
		return 5;
	}
	else if (battle < 20)
	{
		std::cout << " WOLF";
		return 40;
	}
	else if (battle < 35)
	{
		std::cout << " BANDIT";
		return 70;
	}
	else if (battle < 50)
	{
		std::cout << " BUGBEAR";
		return 60;
	}
	else if (battle < 66)
	{
		std::cout << " LYNX";
		return 100;
	}
	else if (battle < 80)
	{
		std::cout << " BLACK DRAGON";
		return 300;
	}
	else if (battle < 100)
	{
		std::cout << " DIREWOLF";
		return 400;
	}
	else if (battle < 130)
	{
		std::cout << " HOOK HORROR";
		return 500;
	}
	else if (battle < 140)
	{
		std::cout << " SENTIENT BLADE";
		return 550;
	}
	else if (battle < 160)
	{
		std::cout << " INCUBUS";
		return 650;
	}
	else if (battle < 175)
	{
		std::cout << " RED DRAGON";
		return 920;
	}
	else if (battle < 196)
	{
		std::cout << " DOOM SPAWN";
		return 1300;
	}
	else if (battle > 195)
	{
		std::cout << " ELDER GOD OF DOOM";
		return 2000;
	}
}