#include "getrandom.h"

#define KEY_UP 72       //Up arrow character
#define KEY_DOWN 80    //Down arrow character
#define KEY_ENTER '\r'//Enter key charatcer

void fingerSaver()
{
    std::cout << "-----------------  [";
    changeColour(darkgrey);
}

void mmenu1()
{
    system("CLS");

    changeColour(white);
    std::cout << "\n [ ";
    if (potion(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << potion(0) << " ]  -----------------  ";
    changeColour(lightmagenta);
    std::cout << "POTION       ";
    changeColour(white);
    fingerSaver();
    std::cout << "HEALS THE USER 50 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (tincture(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << tincture(0) << " ]  -----------------  ";
    std::cout << "TINCTURE     ";
    fingerSaver();
    std::cout << "HEALS THE USER 20 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (hipotion(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << hipotion(0) << " ]  -----------------  ";
    std::cout << "HI-POTION    ";
    fingerSaver();
    std::cout << "HEALS THE USER 250 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (hitincture(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << hitincture(0) << " ]  -----------------  ";
    std::cout << "HI-TINCTURE  ";
    fingerSaver();
    std::cout << "HEALS THE USER 50 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (elixir(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << elixir(0) << " ]  -----------------  ";
    std::cout << "ELIXIR       ";
    fingerSaver();
    std::cout << "HEALS THE USER TO FULL HP AND MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n\n                            EXIT         ";
    std::cout << "-----------------  [ ";
    changeColour(darkgrey);
    std::cout << "RETURN TO MENU";
    changeColour(white);
    std::cout << " ]\n\n";
}
void mmenu2()
{
    system("CLS");
    changeColour(white);
    std::cout << "\n [ ";
    if (potion(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << potion(0) << " ]  -----------------  ";

    std::cout << "POTION       ";

    fingerSaver();
    std::cout << "HEALS THE USER 50 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (tincture(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << tincture(0) << " ]  -----------------  ";
    changeColour(lightmagenta);
    std::cout << "TINCTURE     ";
    changeColour(white);
    fingerSaver();
    std::cout << "HEALS THE USER 20 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (hipotion(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << hipotion(0) << " ]  -----------------  ";
    std::cout << "HI-POTION    ";
    fingerSaver();
    std::cout << "HEALS THE USER 250 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (hitincture(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << hitincture(0) << " ]  -----------------  ";
    std::cout << "HI-TINCTURE  ";
    fingerSaver();
    std::cout << "HEALS THE USER 50 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (elixir(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << elixir(0) << " ]  -----------------  ";
    std::cout << "ELIXIR       ";
    fingerSaver();
    std::cout << "HEALS THE USER TO FULL HP AND MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n\n                            EXIT         ";
    std::cout << "-----------------  [ ";
    changeColour(darkgrey);
    std::cout << "RETURN TO MENU";
    changeColour(white);
    std::cout << " ]\n\n";
}
void mmenu3()
{
    system("CLS");
    changeColour(white);
    std::cout << "\n [ ";
    if (potion(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << potion(0) << " ]  -----------------  ";

    std::cout << "POTION       ";

    fingerSaver();
    std::cout << "HEALS THE USER 50 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (tincture(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << tincture(0) << " ]  -----------------  ";
    std::cout << "TINCTURE     ";
    fingerSaver();
    std::cout << "HEALS THE USER 20 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (hipotion(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << hipotion(0) << " ]  -----------------  ";
    changeColour(lightmagenta);
    std::cout << "HI-POTION    ";
    changeColour(white);
    fingerSaver();
    std::cout << "HEALS THE USER 250 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (hitincture(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << hitincture(0) << " ]  -----------------  ";
    std::cout << "HI-TINCTURE  ";
    fingerSaver();
    std::cout << "HEALS THE USER 50 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (elixir(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << elixir(0) << " ]  -----------------  ";
    std::cout << "ELIXIR       ";
    fingerSaver();
    std::cout << "HEALS THE USER TO FULL HP AND MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n\n                            EXIT         ";
    std::cout << "-----------------  [ ";
    changeColour(darkgrey);
    std::cout << "RETURN TO MENU";
    changeColour(white);
    std::cout << " ]\n\n";
}
void mmenu4()
{
    system("CLS");
    changeColour(white);
    std::cout << "\n [ ";
    if (potion(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << potion(0) << " ]  -----------------  ";

    std::cout << "POTION       ";

    fingerSaver();
    std::cout << "HEALS THE USER 50 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (tincture(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << tincture(0) << " ]  -----------------  ";
    std::cout << "TINCTURE     ";
    fingerSaver();
    std::cout << "HEALS THE USER 20 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (hipotion(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << hipotion(0) << " ]  -----------------  ";
    std::cout << "HI-POTION    ";
    fingerSaver();
    std::cout << "HEALS THE USER 250 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (hitincture(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << hitincture(0) << " ]  -----------------  ";
    changeColour(lightmagenta);
    std::cout << "HI-TINCTURE  ";
    changeColour(white);
    fingerSaver();
    std::cout << "HEALS THE USER 50 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (elixir(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << elixir(0) << " ]  -----------------  ";
    std::cout << "ELIXIR       ";
    fingerSaver();
    std::cout << "HEALS THE USER TO FULL HP AND MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n\n                            EXIT         ";
    std::cout << "-----------------  [ ";
    changeColour(darkgrey);
    std::cout << "RETURN TO MENU";
    changeColour(white);
    std::cout << " ]\n\n";
}
void mmenu5()
{
    system("CLS");
    changeColour(white);
    std::cout << "\n [ ";
    if (potion(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << potion(0) << " ]  -----------------  ";

    std::cout << "POTION       ";

    fingerSaver();
    std::cout << "HEALS THE USER 50 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (tincture(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << tincture(0) << " ]  -----------------  ";
    std::cout << "TINCTURE     ";
    fingerSaver();
    std::cout << "HEALS THE USER 20 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (hipotion(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << hipotion(0) << " ]  -----------------  ";
    std::cout << "HI-POTION    ";
    fingerSaver();
    std::cout << "HEALS THE USER 250 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (hitincture(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << hitincture(0) << " ]  -----------------  ";
    std::cout << "HI-TINCTURE  ";
    fingerSaver();
    std::cout << "HEALS THE USER 50 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (elixir(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << elixir(0) << " ]  -----------------  ";
    changeColour(lightmagenta);
    std::cout << "ELIXIR       ";
    changeColour(white);
    fingerSaver();
    std::cout << "HEALS THE USER TO FULL HP AND MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n\n                            EXIT         ";
    std::cout << "-----------------  [ ";
    changeColour(darkgrey);
    std::cout << "RETURN TO MENU";
    changeColour(white);
    std::cout << " ]\n\n";
}
void mmenu6()
{
    system("CLS");
    changeColour(white);
    std::cout << "\n [ ";
    if (potion(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << potion(0) << " ]  -----------------  ";

    std::cout << "POTION       ";

    fingerSaver();
    std::cout << "HEALS THE USER 50 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (tincture(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << tincture(0) << " ]  -----------------  ";
    std::cout << "TINCTURE     ";
    fingerSaver();
    std::cout << "HEALS THE USER 20 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (hipotion(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << hipotion(0) << " ]  -----------------  ";
    std::cout << "HI-POTION    ";
    fingerSaver();
    std::cout << "HEALS THE USER 250 HP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (hitincture(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << hitincture(0) << " ]  -----------------  ";
    std::cout << "HI-TINCTURE  ";
    fingerSaver();
    std::cout << "HEALS THE USER 50 MP";
    changeColour(white);
    std::cout << " ]\n\n";

    std::cout << "\n [ ";
    if (elixir(0) < 10)
    {
        std::cout << "0";
    }
    std::cout << elixir(0) << " ]  -----------------  ";

    std::cout << "ELIXIR       ";

    fingerSaver();
    std::cout << "HEALS THE USER TO FULL HP AND MP";
    changeColour(white);
    std::cout << " ]\n\n";

    changeColour(lightmagenta);
    std::cout << "\n\n                            EXIT         ";
    changeColour(white);
    std::cout << "-----------------  [ ";
    changeColour(darkgrey);
    std::cout << "RETURN TO MENU";
    changeColour(white);
    std::cout << " ]\n\n";
}

int inventory(int monstatype, int n, int e, int s, int w, int fl)   //main
{
    system("CLS");
    changeColour(white);
    mmenu1();
    return invMenu(monstatype, n, e, s, w, fl);
}
//None of these purchase functions give you an item. perhaps make an item menu? And a magic menu.
//potion, done
int useItem1(int monstatype, int n, int e, int s, int w, int fl)
{
    system("CLS");
    returnName(monstatype);
    display();
    int damtochar{ -50 };
    int potcount{ potion(1) };                             //must change the -0
    static bool initializedPOT;
    if (potcount < 0)
    {
        potcount = 0;
    }
    if (potcount == 0)
    {
        if (!initializedPOT)
        {
            initializedPOT = true;
            damtochar = -50;
        }
        else
        {
            damtochar = 0;
        }
    }
    if (potcount > 0)
    {
        initializedPOT = false;
    }
    std::cout << " POTIONS LEFT: ";
    std::cout << potcount;
    if (potcount > 0)
    {
        std::cout << "\n POTION HEALS: ";
        changeColour(lightred);
        std::cout << -damtochar << " HP\n";
    }
    else
    {
        std::cout << '\n' << '\n';
    }
    changeColour(white);
    std::cout << "                                                ";
    getname();
    std::cout << " HP:   ";
    changeColour(lightred);
    std::cout << statCurrentHP(damtochar);
    changeColour(white);
    std::cout << " / ";
    changeColour(lightred);
    std::cout << statMaxHP();
    changeColour(white);
    if (damtochar == 0)
    {
        std::cout << "\n\n\n\n\n\n\n OUT OF POTIONS\n\n";
        system("PAUSE");
        return inventory(monstatype, n, e, s, w, fl);
    }
    else
    {
        int pain2{ enemyattack(monstatype) };
        monsterHP(monstatype, 0, n, e, s, w, fl);
        std::cout << '\n';
        std::cout << '\n';
        displayHPMP(pain2, 0); //pain is damage to char, 0 is spellcost
        mainb(monstatype, n, e, s, w, fl);
        return 0;
    }
}   
//tincture, done
int useItem2(int monstatype, int n, int e, int s, int w, int fl) // newgame
{
    system("CLS");
    returnName(monstatype);
    display();
    int damtocharmp{ -20 };
    int potcounttin{ tincture(1) };                             //must change the -0
    static bool initializedTIN;
    if (potcounttin < 0)
    {
        potcounttin = 0;
    }
    if (potcounttin == 0)
    {
        if (!initializedTIN)
        {
            initializedTIN = true;
            damtocharmp = -20;
        }
        else
        {
            damtocharmp = 0;
        }
    }
    if (potcounttin > 0)
    {
        initializedTIN = false;
    }

    std::cout << " TINCTURES LEFT: ";
    std::cout << potcounttin;
    if (potcounttin > 0)
    {
        std::cout << "\n TINCTURE HEALS: ";
        changeColour(cyan);
        std::cout << -damtocharmp << " MP\n";
    }
    else
    {
        std::cout << '\n' << '\n';
    }
    changeColour(white);
    std::cout << "                                                ";
    getname();
    std::cout << " MP:   ";
    changeColour(cyan);
    std::cout << statCurrentMP(damtocharmp);
    changeColour(white);
    std::cout << " / ";
    changeColour(cyan);
    std::cout << statMaxMP();
    changeColour(white);
    if (damtocharmp == 0)
    {
        std::cout << "\n\n\n\n\n\n\n OUT OF TINCTURES\n\n";
        system("PAUSE");
        return inventory(monstatype, n, e, s, w, fl);
    }
    else
    {
        int pain2{ enemyattack(monstatype) };
        monsterHP(monstatype, 0, n, e, s, w, fl);
        std::cout << '\n';
        std::cout << '\n';
        displayHPMP(pain2, 0); //pain is damage to char, 0 is spellcost
        mainb(monstatype, n, e, s, w, fl);
        return 0;
    }
}
//hi potion, done
int useItem3(int monstatype, int n, int e, int s, int w, int fl)
{
    system("CLS");
    returnName(monstatype);
    display();
    int damtochar{ -200 };
    int potcount{ hipotion(1) };                             //must change the -0
    static bool initializedHIPOT;
    if (potcount < 0)
    {
        potcount = 0;
    }
    if (potcount == 0)
    {
        if (!initializedHIPOT)
        {
            initializedHIPOT = true;
            damtochar = -200;
        }
        else
        {
            damtochar = 0;
        }
    }
    if (potcount > 0)
    {
        initializedHIPOT = false;
    }
    std::cout << " HI-POTIONS LEFT: ";
    std::cout << potcount;
    if (potcount > 0)
    {
        std::cout << "\n HI-POTION HEALS: ";
        changeColour(lightred);
        std::cout << -damtochar << " HP\n";
    }
    else
    {
        std::cout << '\n' << '\n';
    }
    changeColour(white);
    std::cout << "                                                ";
    getname();
    std::cout << " HP:   ";
    changeColour(lightred);
    std::cout << statCurrentHP(damtochar);
    changeColour(white);
    std::cout << " / ";
    changeColour(lightred);
    std::cout << statMaxHP();
    changeColour(white);
    if (damtochar == 0)
    {
        std::cout << "\n\n\n\n\n\n\n OUT OF HI-POTIONS\n\n";
        system("PAUSE");
        return inventory(monstatype, n, e, s, w, fl);
    }
    else
    {
        int pain2{ enemyattack(monstatype) };
        monsterHP(monstatype, 0, n, e, s, w, fl);
        std::cout << '\n';
        std::cout << '\n';
        displayHPMP(pain2, 0); //pain is damage to char, 0 is spellcost
        mainb(monstatype, n, e, s, w, fl);
        return 0;
    }
}
//hi tincture, done
int useItem4(int monstatype, int n, int e, int s, int w, int fl)
{
    system("CLS");
    returnName(monstatype);
    display();
    int damtocharmp{ -50 };
    int potcounttin{ hitincture(1) };                             //must change the -0
    static bool initializedHITIN;
    if (potcounttin < 0)
    {
        potcounttin = 0;
    }
    if (potcounttin == 0)
    {
        if (!initializedHITIN)
        {
            initializedHITIN = true;
            damtocharmp = -50;
        }
        else
        {
            damtocharmp = 0;
        }
    }
    if (potcounttin > 0)
    {
        initializedHITIN = false;
    }

    std::cout << " TINCTURES LEFT: ";
    std::cout << potcounttin;
    if (potcounttin > 0)
    {
        std::cout << "\n TINCTURE HEALS: ";
        changeColour(cyan);
        std::cout << -damtocharmp << " MP\n";
    }
    else
    {
        std::cout << '\n' << '\n';
    }
    changeColour(white);
    std::cout << "                                                ";
    getname();
    std::cout << " MP:   ";
    changeColour(cyan);
    std::cout << statCurrentMP(damtocharmp);
    changeColour(white);
    std::cout << " / ";
    changeColour(cyan);
    std::cout << statMaxMP();
    changeColour(white);
    if (damtocharmp == 0)
    {
        std::cout << "\n\n\n\n\n\n\n OUT OF TINCTURES\n\n";
        system("PAUSE");
        return inventory(monstatype, n, e, s, w, fl);
    }
    else
    {
        int pain2{ enemyattack(monstatype) };
        monsterHP(monstatype, 0, n, e, s, w, fl);
        std::cout << '\n';
        std::cout << '\n';
        displayHPMP(pain2, 0); //pain is damage to char, 0 is spellcost
        mainb(monstatype, n, e, s, w, fl);
        return 0;
    }
}
//elixir, done
int useItem5(int monstatype, int n, int e, int s, int w, int fl)
{
    system("CLS");
    returnName(monstatype);
    display();
    int damtochar{ -9999 };
    int damtocharmp{ -9999 };
    int potcountlix{ elixir(1) };                             //must change the -0
    static bool initializedLIX;
    if (potcountlix < 0)
    {
        potcountlix = 0;
    }
    if (potcountlix == 0)
    {
        if (!initializedLIX)
        {
            initializedLIX = true;
            damtochar = -9999;
            damtocharmp = -9999;
        }
        else
        {
            damtochar = 0;
            damtocharmp = 0;
        }
    }
    if (potcountlix > 0)
    {
        initializedLIX = false;
    }

    std::cout << " ELIXIRS LEFT: ";
    std::cout << potcountlix;
    if (potcountlix > 0)
    {
        std::cout << "\n ELIXIR HEALS: ";
        changeColour(magenta);
        std::cout << "ALL";
        changeColour(white);
        std::cout << " HP/MP\n";
    }
    else
    {
        std::cout << '\n' << '\n';
    }
    changeColour(white);
    std::cout << "                                                ";
    getname();
    std::cout << " HP:   ";
    changeColour(lightred);
    std::cout << statCurrentHP(damtochar);
    changeColour(white);
    std::cout << " / ";
    changeColour(lightred);
    std::cout << statMaxHP();
    changeColour(white);
    std::cout << "\n                                                ";
    getname();
    std::cout << " MP:   ";
    changeColour(cyan);
    std::cout << statCurrentMP(damtocharmp);
    changeColour(white);
    std::cout << " / ";
    changeColour(cyan);
    std::cout << statMaxMP();
    changeColour(white);


    if (damtocharmp == 0)
    {
        std::cout << "\n\n\n\n\n\n\n OUT OF ELIXIRS\n\n";
        system("PAUSE");
        return inventory(monstatype, n, e, s, w, fl);
    }
    else
    {
        int pain2{ enemyattack(monstatype) };
        monsterHP(monstatype, 0, n, e, s, w, fl);
        std::cout << '\n';
        std::cout << '\n';
        displayHPMP(pain2, 0); //pain is damage to char, 0 is spellcost
        mainb(monstatype, n, e, s, w, fl);
        return 0;
    }
}
//exit
int useItem6(int monstatype, int n, int e, int s, int w, int fl)
{
    system("CLS");
    returnName(monstatype);
    display();
    std::cout << "\n\n";
    monsterHP(monstatype, 0, n, e, s, w, fl);
    std::cout << "\n\n\n\n\n";
    displayHPMP(0, 0);
    mainb(monstatype, n, e, s, w, fl);
    return 0;
}



int invMenu(int monstatype, int n, int e, int s, int w, int fl)
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
                    mmenu1();
                }
                if (selected == 1)
                {
                    mmenu2();
                }
                if (selected == 2)
                {
                    mmenu3();
                }
                if (selected == 3)
                {
                    mmenu4();
                }
                if (selected == 4)
                {
                    mmenu5();
                }
                if (selected == 5)
                {
                    mmenu6();
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
                    mmenu1();
                }
                if (selected == 1)
                {
                    mmenu2();
                }
                if (selected == 2)
                {
                    mmenu3();
                }
                if (selected == 3)
                {
                    mmenu4();
                }
                if (selected == 4)
                {
                    mmenu5();
                }
                if (selected == 5)
                {
                    mmenu6();
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
        return useItem1(monstatype, n, e, s, w, fl);
    }
    else if ((selected + 1) == 2)
    {
        return useItem2(monstatype, n, e, s, w, fl);
    }
    else if ((selected + 1) == 3)
    {
        return useItem3(monstatype, n, e, s, w, fl);
    }
    else if ((selected + 1) == 4)
    {
        return useItem4(monstatype, n, e, s, w, fl);
    }
    else if ((selected + 1) == 5)
    {
        return useItem5(monstatype, n, e, s, w, fl);
    }
    else if ((selected + 1) == 6)
    {
        return useItem6(monstatype, n, e, s, w, fl);
    }

    mainb(monstatype, n, e, s, w, fl);
    return 0;
}






