#include "getrandom.h"
#define KEY_UP 72       //Up arrow character
#define KEY_DOWN 80    //Down arrow character
#define KEY_ENTER '\r'//Enter key charatcer

void fingerSaver(int goldin)
{
	std::cout << "-----------------  [";
	changeColour(yellow);
	if (goldin > 999)
	{
		std::cout << goldin << " GOLD";
	}
	else
	{
		std::cout << goldin << "  GOLD";
	}
	changeColour(white);
	std::cout << "]  ";
	std::cout << "-----------------  [ ";
	changeColour(darkgrey);
}

void menu1()
{
    system("CLS");
    changeColour(lightmagenta);
    std::cout << "\n POTION       ";
    changeColour(white);
    fingerSaver(100);
    std::cout << "HEALS THE USER 50 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " TINCTURE     ";
    fingerSaver(250);
    std::cout << "HEALS THE USER 20 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " HI-POTION    ";
    fingerSaver(400);
    std::cout << "HEALS THE USER 250 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " ELIXIR       ";
    fingerSaver(1000);
    std::cout << "HEALS THE USER TO FULL HP AND MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " STEEL ARMOR  ";
    fingerSaver(4600);
    std::cout << "A HEAVY PLATE OF STEEL IN DWARVEN DESIGN";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n\n     GOLD:  [ ";
    changeColour(yellow);
    std::cout << statGold(0);
    changeColour(white);
    std::cout << " ]\n\n\n\n";

    std::cout << " EXIT  ";
    std::cout << "-----------------  [ ";
    changeColour(darkgrey);
    std::cout << "RETURN TO MENU";
    changeColour(white);
    std::cout << " ]\n\n";
}
void menu2()
{
    system("CLS");
    std::cout << "\n POTION       ";
    fingerSaver(100);
    std::cout << "HEALS THE USER 50 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    changeColour(lightmagenta);
    std::cout << " TINCTURE     ";
    changeColour(white);
    fingerSaver(250);
    std::cout << "HEALS THE USER 20 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " HI-POTION    ";
    fingerSaver(400);
    std::cout << "HEALS THE USER 250 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " ELIXIR       ";
    fingerSaver(1000);
    std::cout << "HEALS THE USER TO FULL HP AND MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " STEEL ARMOR  ";
    fingerSaver(4600);
    std::cout << "A HEAVY PLATE OF STEEL IN DWARVEN DESIGN";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n\n     GOLD:  [ ";
    changeColour(yellow);
    std::cout << statGold(0);
    changeColour(white);
    std::cout << " ]\n\n\n\n";

    std::cout << " EXIT  ";
    std::cout << "-----------------  [ ";
    changeColour(darkgrey);
    std::cout << "RETURN TO MENU";
    changeColour(white);
    std::cout << " ]\n\n";
}
void menu3()
{
    system("CLS");
    std::cout << "\n POTION       ";
    fingerSaver(100);
    std::cout << "HEALS THE USER 50 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " TINCTURE     ";
    fingerSaver(250);
    std::cout << "HEALS THE USER 20 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    changeColour(lightmagenta);
    std::cout << " HI-POTION    ";
    changeColour(white);
    fingerSaver(400);
    std::cout << "HEALS THE USER 250 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " ELIXIR       ";
    fingerSaver(1000);
    std::cout << "HEALS THE USER TO FULL HP AND MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " STEEL ARMOR  ";
    fingerSaver(4600);
    std::cout << "A HEAVY PLATE OF STEEL IN DWARVEN DESIGN";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n\n     GOLD:  [ ";
    changeColour(yellow);
    std::cout << statGold(0);
    changeColour(white);
    std::cout << " ]\n\n\n\n";

    std::cout << " EXIT  ";
    std::cout << "-----------------  [ ";
    changeColour(darkgrey);
    std::cout << "RETURN TO MENU";
    changeColour(white);
    std::cout << " ]\n\n";
}
void menu4()
{
    system("CLS");
    std::cout << "\n POTION       ";
    fingerSaver(100);
    std::cout << "HEALS THE USER 50 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " TINCTURE     ";
    fingerSaver(250);
    std::cout << "HEALS THE USER 20 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " HI-POTION    ";
    fingerSaver(400);
    std::cout << "HEALS THE USER 250 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    changeColour(lightmagenta);
    std::cout << " ELIXIR       ";
    changeColour(white);
    fingerSaver(1000);
    std::cout << "HEALS THE USER TO FULL HP AND MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " STEEL ARMOR  ";
    fingerSaver(4600);
    std::cout << "A HEAVY PLATE OF STEEL IN DWARVEN DESIGN";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n\n     GOLD:  [ ";
    changeColour(yellow);
    std::cout << statGold(0);
    changeColour(white);
    std::cout << " ]\n\n\n\n";

    std::cout << " EXIT  ";
    std::cout << "-----------------  [ ";
    changeColour(darkgrey);
    std::cout << "RETURN TO MENU";
    changeColour(white);
    std::cout << " ]\n\n";
}
void menu5()
{
    system("CLS");
    std::cout << "\n POTION       ";
    fingerSaver(100);
    std::cout << "HEALS THE USER 50 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " TINCTURE     ";
    fingerSaver(250);
    std::cout << "HEALS THE USER 20 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " HI-POTION    ";
    fingerSaver(400);
    std::cout << "HEALS THE USER 250 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " ELIXIR       ";
    fingerSaver(1000);
    std::cout << "HEALS THE USER TO FULL HP AND MP";
    changeColour(white);
    std::cout << " ]\n\n";

    changeColour(lightmagenta);
    std::cout << " STEEL ARMOR  ";
    changeColour(white);
    fingerSaver(4600);
    std::cout << "A HEAVY PLATE OF STEEL IN DWARVEN DESIGN";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n\n     GOLD:  [ ";
    changeColour(yellow);
    std::cout << statGold(0);
    changeColour(white);
    std::cout << " ]\n\n\n\n";

    std::cout << " EXIT  ";
    std::cout << "-----------------  [ ";
    changeColour(darkgrey);
    std::cout << "RETURN TO MENU";
    changeColour(white);
    std::cout << " ]\n\n";
}
void menu6()
{
    system("CLS");
    std::cout << "\n POTION       ";
    fingerSaver(100);
    std::cout << "HEALS THE USER 50 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " TINCTURE     ";
    fingerSaver(250);
    std::cout << "HEALS THE USER 20 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " HI-POTION    ";
    fingerSaver(400);
    std::cout << "HEALS THE USER 250 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " ELIXIR       ";
    fingerSaver(1000);
    std::cout << "HEALS THE USER TO FULL HP AND MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " STEEL ARMOR  ";
    fingerSaver(4600);
    std::cout << "A HEAVY PLATE OF STEEL IN DWARVEN DESIGN";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n\n     GOLD:  [ ";
    changeColour(yellow);
    std::cout << statGold(0);
    changeColour(white);
    std::cout << " ]\n\n\n\n";

    changeColour(lightmagenta);
    std::cout << " EXIT  ";
    changeColour(white);
    std::cout << "-----------------  [ ";
    changeColour(darkgrey);
    std::cout << "RETURN TO MENU";
    changeColour(white);
    std::cout << " ]\n\n";
}

int buying(int n, int e, int s, int w, int fl)   //main
{
	system("CLS");
	changeColour(white);
    menu1();
    return storeMenu(n, e, s, w, fl);
}
//None of these purchase functions give you an item. perhaps make an item menu? And a magic menu.
//potion, done
int purchase1(int n, int e, int s, int w, int fl) // newgame
{
    system("CLS");
    statGold(-100);
    if (statGold(0) < 0)
    {
        statGold(100);
        std::cout << "\n NOT ENOUGH GOLD\n\n";
        system("PAUSE");
        return buying(n, e, s, w, fl);
    }
    else
    {
        potion(-1);
        std::cout << "\n YOU PURCHASED: POTION\n\n REMAINING GOLD:  [ ";
        changeColour(yellow);
        std::cout << statGold(0);
        changeColour(white);
        std::cout << " ]\n\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        system("PAUSE");
        return buying(n, e, s, w, fl);
    }
}   // None of these purchase functions actually give you the item.
//tincture, done
int purchase2(int n, int e, int s, int w, int fl) // newgame
{
    system("CLS");
    statGold(-250);
    if (statGold(0) < 0)
    {
        statGold(250);
        std::cout << "\n NOT ENOUGH GOLD\n\n";
        system("PAUSE");
        return buying(n, e, s, w, fl);
    }
    else
    {
        tincture(-1);
        std::cout << "\n YOU PURCHASED: TINCTURE\n\n REMAINING GOLD:  [ ";
        changeColour(yellow);
        std::cout << statGold(0);
        changeColour(white);
        std::cout << " ]\n\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        system("PAUSE");
        return buying(n, e, s, w, fl);
    }
}
//hi potion, done
int purchase3(int n, int e, int s, int w, int fl) // newgame
{
    system("CLS");
    statGold(-400);
    if (statGold(0) < 0)
    {
        statGold(400);
        std::cout << "\n NOT ENOUGH GOLD\n\n";
        system("PAUSE");
        return buying(n, e, s, w, fl);
    }
    else
    {
        hipotion(-1);
        std::cout << "\n YOU PURCHASED: HI-POTION\n\n REMAINING GOLD:  [ ";
        changeColour(yellow);
        std::cout << statGold(0);
        changeColour(white);
        std::cout << " ]\n\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        system("PAUSE");
        return buying(n, e, s, w, fl);
    }
}
//elixir, done
int purchase4(int n, int e, int s, int w, int fl) // newgame
{
    system("CLS");
    statGold(-1000);
    if (statGold(0) < 0)
    {
        statGold(1000);
        std::cout << "\n NOT ENOUGH GOLD\n\n";
        system("PAUSE");
        return buying(n, e, s, w, fl);
    }
    else
    {
        elixir(-1);
        std::cout << "\n YOU PURCHASED: ELIXIR\n\n REMAINING GOLD:  [ ";
        changeColour(yellow);
        std::cout << statGold(0);
        changeColour(white);
        std::cout << " ]\n\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        system("PAUSE");
        return buying(n, e, s, w, fl);
    }
}
//steel armor UNTESTED
int purchase5(int n, int e, int s, int w, int fl) // newgame
{
    system("CLS");
    statGold(-4600);
    if (statGold(0) < 0)
    {
        statGold(4600);
        std::cout << "\n NOT ENOUGH GOLD\n\n";
        system("PAUSE");
        return buying(n, e, s, w, fl);
    }
    else
    {
        static bool initialized4;
        if (!initialized4)
        {
            initialized4 = true;
            getArmor(1);
        }
        std::cout << "\n YOU PURCHASED: STEEL ARMOR\n\n REMAINING GOLD:  [ ";
        changeColour(yellow);
        std::cout << statGold(0);
        changeColour(white);
        std::cout << " ]\n\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        system("PAUSE");
        return buying(n, e, s, w, fl);
    }
}

int purchase6(int n, int e, int s, int w, int fl) // newgame
{
    system("CLS");
    loadStore(n, e, s, w, fl);
    return 0;
}

int storeMenu(int n, int e, int s, int w, int fl)
{
    int selected = 0;                      //Keeps track of which option is selected.
    int numChoices = 6;                     //The number of choices we have.
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
                if (selected == 0)
                {
                    menu1();
                }
                if (selected == 1)
                {
                    menu2();
                }
                if (selected == 2)
                {
                    menu3();
                }
                if (selected == 3)
                {
                    menu4();
                }
                if (selected == 4)
                {
                    menu5();
                }
                if (selected == 5)
                {
                    menu6();
                }
            }
            break;
        case KEY_DOWN:
            if (selected < numChoices - 1)
            { //Dont increment if we are at the last option.
                ++selected;
                updated = true;
                if (selected == 0)
                {
                    menu1();
                }
                if (selected == 1)
                {
                    menu2();
                }
                if (selected == 2)
                {
                    menu3();
                }
                if (selected == 3)
                {
                    menu4();
                }
                if (selected == 4)
                {
                    menu5();
                }
                if (selected == 5)
                {
                    menu6();
                }
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
        return purchase1(n, e, s, w, fl);
    }
    else if ((selected + 1) == 2)
    {
        return purchase2(n, e, s, w, fl);
    }
    else if ((selected + 1) == 3)
    {
        return purchase3(n, e, s, w, fl);
    }
    else if ((selected + 1) == 4)
    {
        return purchase4(n, e, s, w, fl);
    }
    else if ((selected + 1) == 5)
    {
        return purchase5(n, e, s, w, fl);
    }
    else if ((selected + 1) == 6)
    {
        return purchase6(n, e, s, w, fl);
    }

    loadStore(n, e, s, w, fl);
    return 0;
}