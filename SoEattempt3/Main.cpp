#include "getrandom.h"

#define KEY_UP 72       //Up arrow character
#define KEY_DOWN 80    //Down arrow character
#define KEY_ENTER '\r'//Enter key charatcer
#define KEY_LEFT 75
#define KEY_RIGHT 77

void getname()
{
	static string str{ "_" };
	if (str == "_")
	{
		char namer[MAX_NAME_LENGTH];
		string words{ " ENTER YOUR NAME, HERO: " };
		slowPrint(words, 10);
		std::cin.getline(namer, MAX_NAME_LENGTH);
		str = namer;
		transform(str.begin(), str.end(), str.begin(), toupper);
		if (str == "DELTRONZERO")
		{
			statXP(3030);
			statGold(3030);
			setCoord(45, 26);
			changeColour(lightblue);
			std::cout << "PERFECT BLEND OF TECHNOLOGY AND MAGIC\n                               ";
			changeColour(black);
			system("PAUSE");
			changeColour(white);
		}
		if (str == "STRONGJAW")
		{
			statXP(5555);
			statGold(4600);
			weapon(-20);
			weapon(14);
			setCoord(37, 26);
			changeColour(lightblue);
			std::cout << "SOMETIMES YOU JUST HAVE TO CHOP SOMETHIHNG IN HALF\n                               ";
			changeColour(black);
			system("PAUSE");
			changeColour(white);
		}
		system("CLS");
		std::cout << '\n' << " ";
		slowPrint(str, 10);
	}
	else
	{
		transform(str.begin(), str.end(), str.begin(), toupper);
		std::cout << " " << str;
	}
}




void printStart()
{
	system("CLS");
	setCoord(0, 0);
	std::cout << '\n';
	getname();
	string words{ ", YOUR SEARCH FOR THE FABLED SWORD MURASAME HAS LED YOU TO A CAVERN ON THE COAST. \n\n A FETID ODOR WAFTS FROM THE ENTRANCE.\n\n" };
	std::cout << words;
	std::cout << "\n\n\n\n\n\n\n";
	std::cout <<
		"                                                      [ CONTINUE ]                                                      ";
	std::cout << "\n\n\n";
	changeColour(darkgrey);
	std::cout <<
		"                                                          QUIT                                                          ";
	changeColour(white);
	setCoord(0, 0);


}
void printStart2()
{
	system("CLS");
	setCoord(0, 0);
	std::cout << '\n';
	getname();
	string words{ ", YOUR SEARCH FOR THE FABLED SWORD MURASAME HAS LED YOU TO A CAVERN ON THE COAST. \n\n A FETID ODOR WAFTS FROM THE ENTRANCE.\n\n" };
	std::cout << words;
	std::cout << "\n\n\n\n\n\n\n";
	changeColour(darkgrey);
	std::cout <<
		"                                                        CONTINUE                                                        ";
	std::cout << "\n\n\n";
	changeColour(white);
	std::cout <<
		"                                                        [ QUIT ]                                                        ";
	setCoord(0, 0);

}
void selector()
{
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
				printStart();
			}
			break;
		case KEY_DOWN:
			if (selected < numChoices - 1)
			{ //Dont increment if we are at the last option.
				++selected;
				updated = true;
				printStart2();
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
		loadGame();
	}
	else if ((selected + 1) == 2)
	{
		system("CLS");
		exit(0);
	}
}


int main()				// Runs start of program. includes getname(). Sends to name(). 
{
	static bool initialized;
	if (!initialized)
	{
		initialized = true;
		intro();
		system("CLS");
		changeColour(white);
		std::cout << '\n';
		getname();
		string words{ ", YOUR SEARCH FOR THE FABLED SWORD MURASAME HAS LED YOU TO A CAVERN ON THE COAST. \n\n A FETID ODOR WAFTS FROM THE ENTRANCE.\n\n" };
		slowPrint(words, 15);
		printStart();
		selector();
	}
	else
	{
		loadGame();
	}
}