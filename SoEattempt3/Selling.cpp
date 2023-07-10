#include "getrandom.h"
#define KEY_UP 72       //Up arrow character
#define KEY_DOWN 80    //Down arrow character
#define KEY_ENTER '\r'//Enter key charatcer

void fingerSaver99(int goldin)
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

void zmenu1()
{
    system("CLS");
    changeColour(lightmagenta);
    std::cout << "\n POTION       ";
    changeColour(white);
    fingerSaver99(100);
    std::cout << "HEALS THE USER 50 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " TINCTURE     ";
    fingerSaver99(250);
    std::cout << "HEALS THE USER 20 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " HI-POTION    ";
    fingerSaver99(400);
    std::cout << "HEALS THE USER 250 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " ELIXIR       ";
    fingerSaver99(1000);
    std::cout << "HEALS THE USER TO FULL HP AND MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " STEEL ARMOR  ";
    fingerSaver99(4600);
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
void zmenu2()
{
    system("CLS");
    std::cout << "\n POTION       ";
    fingerSaver99(100);
    std::cout << "HEALS THE USER 50 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    changeColour(lightmagenta);
    std::cout << " TINCTURE     ";
    changeColour(white);
    fingerSaver99(250);
    std::cout << "HEALS THE USER 20 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " HI-POTION    ";
    fingerSaver99(400);
    std::cout << "HEALS THE USER 250 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " ELIXIR       ";
    fingerSaver99(1000);
    std::cout << "HEALS THE USER TO FULL HP AND MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " STEEL ARMOR  ";
    fingerSaver99(4600);
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
void zmenu3()
{
    system("CLS");
    std::cout << "\n POTION       ";
    fingerSaver99(100);
    std::cout << "HEALS THE USER 50 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " TINCTURE     ";
    fingerSaver99(250);
    std::cout << "HEALS THE USER 20 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    changeColour(lightmagenta);
    std::cout << " HI-POTION    ";
    changeColour(white);
    fingerSaver99(400);
    std::cout << "HEALS THE USER 250 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " ELIXIR       ";
    fingerSaver99(1000);
    std::cout << "HEALS THE USER TO FULL HP AND MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " STEEL ARMOR  ";
    fingerSaver99(4600);
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
void zmenu4()
{
    system("CLS");
    std::cout << "\n POTION       ";
    fingerSaver99(100);
    std::cout << "HEALS THE USER 50 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " TINCTURE     ";
    fingerSaver99(250);
    std::cout << "HEALS THE USER 20 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " HI-POTION    ";
    fingerSaver99(400);
    std::cout << "HEALS THE USER 250 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    changeColour(lightmagenta);
    std::cout << " ELIXIR       ";
    changeColour(white);
    fingerSaver99(1000);
    std::cout << "HEALS THE USER TO FULL HP AND MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " STEEL ARMOR  ";
    fingerSaver99(4600);
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
void zmenu5()
{
    system("CLS");
    std::cout << "\n POTION       ";
    fingerSaver99(100);
    std::cout << "HEALS THE USER 50 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " TINCTURE     ";
    fingerSaver99(250);
    std::cout << "HEALS THE USER 20 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " HI-POTION    ";
    fingerSaver99(400);
    std::cout << "HEALS THE USER 250 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " ELIXIR       ";
    fingerSaver99(1000);
    std::cout << "HEALS THE USER TO FULL HP AND MP";
    changeColour(white);
    std::cout << " ]\n\n";

    changeColour(lightmagenta);
    std::cout << " STEEL ARMOR  ";
    changeColour(white);
    fingerSaver99(4600);
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
void zmenu6()
{
    system("CLS");
    std::cout << "\n POTION       ";
    fingerSaver99(100);
    std::cout << "HEALS THE USER 50 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " TINCTURE     ";
    fingerSaver99(250);
    std::cout << "HEALS THE USER 20 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " HI-POTION    ";
    fingerSaver99(400);
    std::cout << "HEALS THE USER 250 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " ELIXIR       ";
    fingerSaver99(1000);
    std::cout << "HEALS THE USER TO FULL HP AND MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << " STEEL ARMOR  ";
    fingerSaver99(4600);
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

int selling(int n, int e, int s, int w, int fl)   //main
{
    system("CLS");
    changeColour(white);
    zmenu1();
    return zstoreMenu(n, e, s, w, fl);
}
//None of these purchase functions give you an item. perhaps make an item menu? And a magic menu.
//potion, done
int zpurchase1(int n, int e, int s, int w, int fl) // newgame
{
    system("CLS");
    if (potion(0) < 1)
    {
        std::cout << "\n NO POTIONS LEFT\n\n";
        system("PAUSE");
        return selling(n, e, s, w, fl);
    }
    else
    {
        statGold(100);
        potion(1);
        std::cout << "\n YOU SOLD: POTION\n\n REMAINING GOLD:  [ ";
        changeColour(yellow);
        std::cout << statGold(0);
        changeColour(white);
        std::cout << " ]\n\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        system("PAUSE");
        return selling(n, e, s, w, fl);
    }
}   // None of these purchase functions actually give you the item.
//tincture, done
int zpurchase2(int n, int e, int s, int w, int fl) // newgame
{
    system("CLS");
    if (tincture(0) < 1)
    {
        std::cout << "\n NO TINCTURES LEFT\n\n";
        system("PAUSE");
        return selling(n, e, s, w, fl);
    }
    else
    {
        statGold(250);
        tincture(1);
        std::cout << "\n YOU SOLD: TINCTURE\n\n REMAINING GOLD:  [ ";
        changeColour(yellow);
        std::cout << statGold(0);
        changeColour(white);
        std::cout << " ]\n\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        system("PAUSE");
        return selling(n, e, s, w, fl);
    }
}   // None of these purchase functions actually give you the item.
//hi potion, done
int zpurchase3(int n, int e, int s, int w, int fl) // newgame
{
    system("CLS");
    if (hipotion(0) < 1)
    {
        std::cout << "\n NO HI-POTIONS LEFT\n\n";
        system("PAUSE");
        return selling(n, e, s, w, fl);
    }
    else
    {
        statGold(400);
        hipotion(1);
        std::cout << "\n YOU SOLD: HI-POTION\n\n REMAINING GOLD:  [ ";
        changeColour(yellow);
        std::cout << statGold(0);
        changeColour(white);
        std::cout << " ]\n\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        system("PAUSE");
        return selling(n, e, s, w, fl);
    }
}   // None of these purchase functions actually give you the item.
//elixir, done
int zpurchase4(int n, int e, int s, int w, int fl) // newgame
{
    system("CLS");
    if (elixir(0) < 1)
    {
        std::cout << "\n NO ELIXIRS LEFT\n\n";
        system("PAUSE");
        return selling(n, e, s, w, fl);
    }
    else
    {
        statGold(1000);
        elixir(1);
        std::cout << "\n YOU SOLD: ELIXIR\n\n REMAINING GOLD:  [ ";
        changeColour(yellow);
        std::cout << statGold(0);
        changeColour(white);
        std::cout << " ]\n\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        system("PAUSE");
        return selling(n, e, s, w, fl);
    }
}   // None of these purchase functions actually give you the item.
//steel armor UNTESTED
int zpurchase5(int n, int e, int s, int w, int fl) // newgame
{
    system("CLS");
    if (getArmor(0) < 10)
    {
        std::cout << "\n YOU CANNOT SELL WHAT YOU DO NOT YET OWN\n\n";
        system("PAUSE");
        return selling(n, e, s, w, fl);
    }
    else if (getArmor(0) > 12)
    {
        std::cout << "\n YOUR STEEL ARMOR HAS BEEN BATTERED BEYOND RESALE\n\n";
        system("PAUSE");
        return selling(n, e, s, w, fl);
    }
    else
    {
        getArmor(-10);
        std::cout << "\n YOU SOLD: STEEL ARMOR\n\n REMAINING GOLD:  [ ";
        statGold(4600);
        changeColour(yellow);
        std::cout << statGold(0);
        changeColour(white);
        std::cout << " ]\n\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        system("PAUSE");
        return selling(n, e, s, w, fl);
    }
}

int zpurchase6(int n, int e, int s, int w, int fl) // newgame
{
    system("CLS");
    loadStore(n, e, s, w, fl);
    return 0;
}

int zstoreMenu(int n, int e, int s, int w, int fl)
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
                    zmenu1();
                }
                if (selected == 1)
                {
                    zmenu2();
                }
                if (selected == 2)
                {
                    zmenu3();
                }
                if (selected == 3)
                {
                    zmenu4();
                }
                if (selected == 4)
                {
                    zmenu5();
                }
                if (selected == 5)
                {
                    zmenu6();
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
                    zmenu1();
                }
                if (selected == 1)
                {
                    zmenu2();
                }
                if (selected == 2)
                {
                    zmenu3();
                }
                if (selected == 3)
                {
                    zmenu4();
                }
                if (selected == 4)
                {
                    zmenu5();
                }
                if (selected == 5)
                {
                    zmenu6();
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
        return zpurchase1(n, e, s, w, fl);
    }
    else if ((selected + 1) == 2)
    {
        return zpurchase2(n, e, s, w, fl);
    }
    else if ((selected + 1) == 3)
    {
        return zpurchase3(n, e, s, w, fl);
    }
    else if ((selected + 1) == 4)
    {
        return zpurchase4(n, e, s, w, fl);
    }
    else if ((selected + 1) == 5)
    {
        return zpurchase5(n, e, s, w, fl);
    }
    else if ((selected + 1) == 6)
    {
        return zpurchase6(n, e, s, w, fl);
    }

    loadStore(n, e, s, w, fl);
    return 0;
}