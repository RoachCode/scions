#include "getrandom.h"

#define KEY_UP 72       //Up arrow character
#define KEY_DOWN 80    //Down arrow character
#define KEY_ENTER '\r'//Enter key charatcer

int magicMissile(int monstatype, int n, int e, int s, int w, int fl)
{
	system("CLS");
    returnName(monstatype);
	display();
	int dam{ spell(monstatype, 3, 1, 20, 30, statWisdom(), n, e, s, w, fl) };			//running magic missile
	monsterHP(monstatype, dam, n, e, s, w, fl);
    std::cout << "\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
	int pain{ enemyattack(monstatype) };

   // monsterHP(monstatype, 0);
    std::cout << "\n";
	displayHPMP(pain, 0); //pain is damage to char, 0 is spellcost
	mainb(monstatype, n, e, s, w, fl);
    return 0;
}
int immolate(int monstatype, int n, int e, int s, int w, int fl)
{
	system("CLS");
    returnName(monstatype);
	display();
	int dam{ spell(monstatype, 12, 2, 50, 30, statWisdom(), n, e, s, w, fl) };          //running immolate          mpcost 12, name id 1, max damage 100, max mp 30, stat wisdom 0
	monsterHP(monstatype, dam, n, e, s, w, fl);
    std::cout << "\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
	int pain{ enemyattack(monstatype) };

  //  monsterHP(monstatype, 0);
    std::cout << "\n";
	displayHPMP(pain, 0); //pain is damage to char, 0 is spellcost
	mainb(monstatype, n, e, s, w, fl);
    return 0;
}
int cure(int monstatype, int n, int e, int s, int w, int fl)
{
    system("CLS");
    returnName(monstatype);
    display();
    int dam{ spell(monstatype, 5, 3, 50, 30, statWisdom(), n, e, s, w, fl) };          //running immolate          mpcost 12, name id 1, max damage 100, max mp 30, stat wisdom 0
    int damtochar{ -dam };
    std::cout << " CURE HEALS: ";
    changeColour(lightred);
    std::cout << -damtochar << " HP\n";
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
    int pain2{ enemyattack(monstatype) };

    monsterHP(monstatype, 0, n, e, s, w, fl);
    std::cout << "\n\n";
    displayHPMP(pain2, 0); //pain is damage to char, 0 is spellcost
    mainb(monstatype, n, e, s, w, fl);
    return 0;
}

int cura(int monstatype, int n, int e, int s, int w, int fl)
{
    system("CLS");
    returnName(monstatype);
    display();
    int dam{ spell(monstatype, 9, 4, 130, 30, statWisdom(), n, e, s, w, fl) };          //running immolate          mpcost 12, name id 1, max damage 100, max mp 30, stat wisdom 0
    int damtochar{ -dam };
    std::cout << " CURA HEALS: ";
    changeColour(lightred);
    std::cout << -damtochar << " HP\n";
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
    int pain2{ enemyattack(monstatype) };

    monsterHP(monstatype, 0, n, e, s, w, fl);
    std::cout << "\n\n";
    displayHPMP(pain2, 0); //pain is damage to char, 0 is spellcost
    mainb(monstatype, n, e, s, w, fl);
    return 0;
}
int aquarake(int monstatype, int n, int e, int s, int w, int fl)
{
    system("CLS");
    returnName(monstatype);
    display();
    int dam{ spell(monstatype, 26, 5, 125, 30, statWisdom(), n, e, s, w, fl) };          //running immolate          mpcost 12, name id 1, max damage 100, max mp 30, stat wisdom 0
    monsterHP(monstatype, dam, n, e, s, w, fl);
    std::cout << "\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    int pain{ enemyattack(monstatype) };

    //  monsterHP(monstatype, 0);
    std::cout << "\n";
    displayHPMP(pain, 0); //pain is damage to char, 0 is spellcost
    mainb(monstatype, n, e, s, w, fl);
    return 0;
}




void senu1()
{
    system("CLS");
    changeColour(white);
    std::cout << "\n [ ";
    changeColour(cyan);
    std::cout << "05 MP";
    changeColour(white);
    std::cout << " ]  -----------------  ";
    changeColour(lightmagenta);
    std::cout << "CURE           ";
    changeColour(white);
    std::cout << "-----------------  [";
    changeColour(darkgrey);
    std::cout << "RESTORE A SMALL AMOUNT OF HEALTH";
    changeColour(white);
    std::cout << " ]" << '\n' << '\n';


    changeColour(white);
    std::cout << "\n [ ";
    changeColour(cyan);
    std::cout << "03 MP";
    changeColour(white);
    std::cout << " ]  -----------------  ";
 
    std::cout << "MAGIC MISSILE  ";

    std::cout << "-----------------  [";
    changeColour(darkgrey);
    std::cout << "LAUNCH A MAGIC MISSILE AT YOUR ENEMY";
    changeColour(white);
    std::cout << " ]" << '\n' << '\n';


    changeColour(white);
    std::cout << "\n [ ";
    changeColour(cyan);
    std::cout << "12 MP";
    changeColour(white);
    std::cout << " ]  -----------------  ";

    std::cout << "IMMOLATE       ";
    std::cout << "-----------------  [";
    changeColour(darkgrey);
    std::cout << "SEND A TORRENT OF FLAME TOWARDS YOUR ENEMY";
    changeColour(white);
    std::cout << " ]\n\n";
    
    if (statLevel() > 2)
    {
        changeColour(white);
        std::cout << "\n [ ";
        changeColour(cyan);
        std::cout << "10 MP";
        changeColour(white);
        std::cout << " ]  -----------------  ";
        std::cout << "CURA           ";
        std::cout << "-----------------  [";
        changeColour(darkgrey);
        std::cout << "RESTORES A MODERATE AMOUNT OF HEALTH";
        changeColour(white);
        std::cout << " ]\n\n";
    }
    if (statLevel() > 4)
    {
        changeColour(white);
        std::cout << "\n [ ";
        changeColour(cyan);
        std::cout << "26 MP";
        changeColour(white);
        std::cout << " ]  -----------------  ";
        std::cout << "AQUARAKE       ";
        std::cout << "-----------------  [";
        changeColour(darkgrey);
        std::cout << "A GEYSER OF ALTERNATIVELY FREEZING AND BOILING WATER";
        changeColour(white);
        std::cout << " ]\n\n";
    }
    std::cout << "\n\n                               EXIT           ";
    std::cout << "-----------------  [ ";
    changeColour(darkgrey);
    std::cout << "RETURN TO MENU";
    changeColour(white);
    std::cout << " ]\n\n";
}
void senu2()
{
    system("CLS");
    changeColour(white);
    std::cout << "\n [ ";
    changeColour(cyan);
    std::cout << "05 MP";
    changeColour(white);
    std::cout << " ]  -----------------  ";

    std::cout << "CURE           ";

    std::cout << "-----------------  [";
    changeColour(darkgrey);
    std::cout << "RESTORE A SMALL AMOUNT OF HEALTH";
    changeColour(white);
    std::cout << " ]" << '\n' << '\n';


    changeColour(white);
    std::cout << "\n [ ";
    changeColour(cyan);
    std::cout << "03 MP";
    changeColour(white);
    std::cout << " ]  -----------------  ";
    changeColour(lightmagenta);
    std::cout << "MAGIC MISSILE  ";
    changeColour(white);
    std::cout << "-----------------  [";
    changeColour(darkgrey);
    std::cout << "LAUNCH A MAGIC MISSILE AT YOUR ENEMY";
    changeColour(white);
    std::cout << " ]\n\n";


    changeColour(white);
    std::cout << "\n [ ";
    changeColour(cyan);
    std::cout << "12 MP";
    changeColour(white);
    std::cout << " ]  -----------------  ";

    std::cout << "IMMOLATE       ";

    std::cout << "-----------------  [";
    changeColour(darkgrey);
    std::cout << "SEND A TORRENT OF FLAME TOWARDS YOUR ENEMY";
    changeColour(white);
    std::cout << " ]\n\n";

    if (statLevel() > 2)
    {
        changeColour(white);
        std::cout << "\n [ ";
        changeColour(cyan);
        std::cout << "10 MP";
        changeColour(white);
        std::cout << " ]  -----------------  ";
        std::cout << "CURA           ";
        std::cout << "-----------------  [";
        changeColour(darkgrey);
        std::cout << "RESTORES A MODERATE AMOUNT OF HEALTH";
        changeColour(white);
        std::cout << " ]\n\n";
    }
    if (statLevel() > 4)
    {
        changeColour(white);
        std::cout << "\n [ ";
        changeColour(cyan);
        std::cout << "26 MP";
        changeColour(white);
        std::cout << " ]  -----------------  ";
        std::cout << "AQUARAKE       ";
        std::cout << "-----------------  [";
        changeColour(darkgrey);
        std::cout << "A GEYSER OF ALTERNATIVELY FREEZING AND BOILING WATER";
        changeColour(white);
        std::cout << " ]\n\n";
    }
    std::cout << "\n\n                               EXIT           ";
    std::cout << "-----------------  [ ";
    changeColour(darkgrey);
    std::cout << "RETURN TO MENU";
    changeColour(white);
    std::cout << " ]\n\n";
}
void senu3()
{
    system("CLS");
    changeColour(white);
    std::cout << "\n [ ";
    changeColour(cyan);
    std::cout << "05 MP";
    changeColour(white);
    std::cout << " ]  -----------------  ";

    std::cout << "CURE           ";

    std::cout << "-----------------  [";
    changeColour(darkgrey);
    std::cout << "RESTORE A SMALL AMOUNT OF HEALTH";
    changeColour(white);
    std::cout << " ]" << '\n' << '\n';


    changeColour(white);
    std::cout << "\n [ ";
    changeColour(cyan);
    std::cout << "03 MP";
    changeColour(white);
    std::cout << " ]  -----------------  ";

    std::cout << "MAGIC MISSILE  ";

    std::cout << "-----------------  [";
    changeColour(darkgrey);
    std::cout << "LAUNCH A MAGIC MISSILE AT YOUR ENEMY";
    changeColour(white);
    std::cout << " ]\n\n";


    changeColour(white);
    std::cout << "\n [ ";
    changeColour(cyan);
    std::cout << "12 MP";
    changeColour(white);
    std::cout << " ]  -----------------  ";
    changeColour(lightmagenta);
    std::cout << "IMMOLATE       ";
    changeColour(white);
    std::cout << "-----------------  [";
    changeColour(darkgrey);
    std::cout << "SEND A TORRENT OF FLAME TOWARDS YOUR ENEMY";
    changeColour(white);
    std::cout << " ]\n\n";

    if (statLevel() > 2)
    {
        changeColour(white);
        std::cout << "\n [ ";
        changeColour(cyan);
        std::cout << "10 MP";
        changeColour(white);
        std::cout << " ]  -----------------  ";
        std::cout << "CURA           ";
        std::cout << "-----------------  [";
        changeColour(darkgrey);
        std::cout << "RESTORES A MODERATE AMOUNT OF HEALTH";
        changeColour(white);
        std::cout << " ]\n\n";
    }
    if (statLevel() > 4)
    {
        changeColour(white);
        std::cout << "\n [ ";
        changeColour(cyan);
        std::cout << "26 MP";
        changeColour(white);
        std::cout << " ]  -----------------  ";
        std::cout << "AQUARAKE       ";
        std::cout << "-----------------  [";
        changeColour(darkgrey);
        std::cout << "A GEYSER OF ALTERNATIVELY FREEZING AND BOILING WATER";
        changeColour(white);
        std::cout << " ]\n\n";
    }
    std::cout << "\n\n                               EXIT           ";
    std::cout << "-----------------  [ ";
    changeColour(darkgrey);
    std::cout << "RETURN TO MENU";
    changeColour(white);
    std::cout << " ]\n\n";
}
void senu4()


    {
        system("CLS");
        changeColour(white);
        std::cout << "\n [ ";
        changeColour(cyan);
        std::cout << "05 MP";
        changeColour(white);
        std::cout << " ]  -----------------  ";

        std::cout << "CURE           ";

        std::cout << "-----------------  [";
        changeColour(darkgrey);
        std::cout << "RESTORE A SMALL AMOUNT OF HEALTH";
        changeColour(white);
        std::cout << " ]" << '\n' << '\n';


        changeColour(white);
        std::cout << "\n [ ";
        changeColour(cyan);
        std::cout << "03 MP";
        changeColour(white);
        std::cout << " ]  -----------------  ";

        std::cout << "MAGIC MISSILE  ";

        std::cout << "-----------------  [";
        changeColour(darkgrey);
        std::cout << "LAUNCH A MAGIC MISSILE AT YOUR ENEMY";
        changeColour(white);
        std::cout << " ]\n\n";


        changeColour(white);
        std::cout << "\n [ ";
        changeColour(cyan);
        std::cout << "12 MP";
        changeColour(white);
        std::cout << " ]  -----------------  ";
       
        std::cout << "IMMOLATE       ";

        std::cout << "-----------------  [";
        changeColour(darkgrey);
        std::cout << "SEND A TORRENT OF FLAME TOWARDS YOUR ENEMY";
        changeColour(white);
        std::cout << " ]\n\n";

        if (statLevel() > 2)
        {
            changeColour(white);
            std::cout << "\n [ ";
            changeColour(cyan);
            std::cout << "10 MP";
            changeColour(white);
            std::cout << " ]  -----------------  ";
            changeColour(lightmagenta);
            std::cout << "CURA           ";
            changeColour(white);
            std::cout << "-----------------  [";
            changeColour(darkgrey);
            std::cout << "RESTORES A MODERATE AMOUNT OF HEALTH";
            changeColour(white);
            std::cout << " ]\n\n";
        }
        if (statLevel() > 4)
        {
            changeColour(white);
            std::cout << "\n [ ";
            changeColour(cyan);
            std::cout << "26 MP";
            changeColour(white);
            std::cout << " ]  -----------------  ";
            std::cout << "AQUARAKE       ";
            std::cout << "-----------------  [";
            changeColour(darkgrey);
            std::cout << "A GEYSER OF ALTERNATIVELY FREEZING AND BOILING WATER";
            changeColour(white);
            std::cout << " ]\n\n";
        }
        std::cout << "\n\n                               EXIT           ";
        std::cout << "-----------------  [ ";
        changeColour(darkgrey);
        std::cout << "RETURN TO MENU";
        changeColour(white);
        std::cout << " ]\n\n";
    }
void senu5()
{
    system("CLS");
    changeColour(white);
    std::cout << "\n [ ";
    changeColour(cyan);
    std::cout << "05 MP";
    changeColour(white);
    std::cout << " ]  -----------------  ";

    std::cout << "CURE           ";

    std::cout << "-----------------  [";
    changeColour(darkgrey);
    std::cout << "RESTORE A SMALL AMOUNT OF HEALTH";
    changeColour(white);
    std::cout << " ]" << '\n' << '\n';


    changeColour(white);
    std::cout << "\n [ ";
    changeColour(cyan);
    std::cout << "03 MP";
    changeColour(white);
    std::cout << " ]  -----------------  ";

    std::cout << "MAGIC MISSILE  ";

    std::cout << "-----------------  [";
    changeColour(darkgrey);
    std::cout << "LAUNCH A MAGIC MISSILE AT YOUR ENEMY";
    changeColour(white);
    std::cout << " ]\n\n";


    changeColour(white);
    std::cout << "\n [ ";
    changeColour(cyan);
    std::cout << "12 MP";
    changeColour(white);
    std::cout << " ]  -----------------  ";

    std::cout << "IMMOLATE       ";
    std::cout << "-----------------  [";
    changeColour(darkgrey);
    std::cout << "SEND A TORRENT OF FLAME TOWARDS YOUR ENEMY";
    changeColour(white);
    std::cout << " ]\n\n";

    if (statLevel() > 2)
    {
        changeColour(white);
        std::cout << "\n [ ";
        changeColour(cyan);
        std::cout << "10 MP";
        changeColour(white);
        std::cout << " ]  -----------------  ";
        std::cout << "CURA           ";
        std::cout << "-----------------  [";
        changeColour(darkgrey);
        std::cout << "RESTORES A MODERATE AMOUNT OF HEALTH";
        changeColour(white);
        std::cout << " ]\n\n";
    }
    if (statLevel() > 4)
    {
        changeColour(white);
        std::cout << "\n [ ";
        changeColour(cyan);
        std::cout << "26 MP";
        changeColour(white);
        std::cout << " ]  -----------------  ";
        changeColour(lightmagenta);
        std::cout << "AQUARAKE       ";
        changeColour(white);
        std::cout << "-----------------  [";
        changeColour(darkgrey);
        std::cout << "A GEYSER OF ALTERNATIVELY FREEZING AND BOILING WATER";
        changeColour(white);
        std::cout << " ]\n\n";
    }

    
    std::cout << "\n\n                               EXIT           ";
    
    std::cout << "-----------------  [ ";
    changeColour(darkgrey);
    std::cout << "RETURN TO MENU";
    changeColour(white);
    std::cout << " ]\n\n";
}
void senu6()
{
    system("CLS");
    changeColour(white);
    std::cout << "\n [ ";
    changeColour(cyan);
    std::cout << "05 MP";
    changeColour(white);
    std::cout << " ]  -----------------  ";

    std::cout << "CURE           ";

    std::cout << "-----------------  [";
    changeColour(darkgrey);
    std::cout << "RESTORE A SMALL AMOUNT OF HEALTH";
    changeColour(white);
    std::cout << " ]" << '\n' << '\n';


    changeColour(white);
    std::cout << "\n [ ";
    changeColour(cyan);
    std::cout << "03 MP";
    changeColour(white);
    std::cout << " ]  -----------------  ";

    std::cout << "MAGIC MISSILE  ";

    std::cout << "-----------------  [";
    changeColour(darkgrey);
    std::cout << "LAUNCH A MAGIC MISSILE AT YOUR ENEMY";
    changeColour(white);
    std::cout << " ]\n\n";


    changeColour(white);
    std::cout << "\n [ ";
    changeColour(cyan);
    std::cout << "12 MP";
    changeColour(white);
    std::cout << " ]  -----------------  ";

    std::cout << "IMMOLATE       ";
    std::cout << "-----------------  [";
    changeColour(darkgrey);
    std::cout << "SEND A TORRENT OF FLAME TOWARDS YOUR ENEMY";
    changeColour(white);
    std::cout << " ]\n\n";

    if (statLevel() > 2)
    {
        changeColour(white);
        std::cout << "\n [ ";
        changeColour(cyan);
        std::cout << "10 MP";
        changeColour(white);
        std::cout << " ]  -----------------  ";
        std::cout << "CURA           ";
        std::cout << "-----------------  [";
        changeColour(darkgrey);
        std::cout << "RESTORES A MODERATE AMOUNT OF HEALTH";
        changeColour(white);
        std::cout << " ]\n\n";
    }
    if (statLevel() > 4)
    {
        changeColour(white);
        std::cout << "\n [ ";
        changeColour(cyan);
        std::cout << "26 MP";
        changeColour(white);
        std::cout << " ]  -----------------  ";
        std::cout << "AQUARAKE       ";
        std::cout << "-----------------  [";
        changeColour(darkgrey);
        std::cout << "A GEYSER OF ALTERNATIVELY FREEZING AND BOILING WATER";
        changeColour(white);
        std::cout << " ]\n\n";
    }

    changeColour(lightmagenta);
    std::cout << "\n\n                               EXIT           ";
    changeColour(white);
    std::cout << "-----------------  [ ";
    changeColour(darkgrey);
    std::cout << "RETURN TO MENU";
    changeColour(white);
    std::cout << " ]\n\n";
}



int spellBook(int monstatype, int n, int e, int s, int w, int fl)   //main
{
    system("CLS");
    changeColour(white);
    senu1();
    return spellMenu(monstatype, n, e, s, w, fl);
}
//None of these purchase functions give you an item. perhaps make an item menu? And a magic menu.
//potion, done
int useSpell1(int monstatype, int n, int e, int s, int w, int fl)
{
    system("CLS");
    return cure(monstatype, n, e, s, w, fl);
}
//tincture, done
int useSpell2(int monstatype, int n, int e, int s, int w, int fl) // newgame
{
    system("CLS");

    return magicMissile(monstatype, n, e, s, w, fl);
}

int useSpell3(int monstatype, int n, int e, int s, int w, int fl) // newgame
{
    system("CLS");

    return immolate(monstatype, n, e, s, w, fl);
}

int useSpell4(int monstatype, int n, int e, int s, int w, int fl) // newgame
{
    system("CLS");

    return cura(monstatype, n, e, s, w, fl);
}

int useSpell5(int monstatype, int n, int e, int s, int w, int fl) // newgame
{
    system("CLS");

    return aquarake(monstatype, n, e, s, w, fl);
}

int exitMagic(int monstatype, int n, int e, int s, int w, int fl)
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
int spellMenu(int monstatype, int n, int e, int s, int w, int fl)
{
    int selected = 0;                      //Keeps track of which option is selected.
    int numChoices = 4;                     //The number of choices we have.
    if (statLevel() > 2)
    {
        numChoices = 5;
    }
    if (statLevel() > 4)
    {
        numChoices = 6;
    }
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
                    senu1();
                }
                if (selected == 1)
                {
                    senu2();
                }
                if (selected == 2)
                {
                    senu3();
                }
                if (selected == 3)
                {
                    if (statLevel() > 2)
                    {
                        senu4();
                    }
                    else
                    {
                        senu6();
                    }
                }
                if (selected == 4)
                {
                    if (statLevel() > 4)
                    {
                        senu5();
                    }
                    else
                    {
                        senu6();
                    }
                }
                if (selected == 5)
                {
                    senu6();
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
                    senu1();
                }
                if (selected == 1)
                {
                    senu2();
                }
                if (selected == 2)
                {
                    senu3();
                }
                if (selected == 3)
                {
                    if (statLevel() > 2)
                    {
                        senu4();
                    }
                    else
                    {
                        senu6();
                    }
                }
                if (selected == 4)
                {
                    if (statLevel() > 4)
                    {
                        senu5();
                    }
                    else
                    {
                        senu6();
                    }
                }
                if (selected == 5)
                {
                    senu6();
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
        return useSpell1(monstatype, n, e, s, w, fl);
    }
    else if ((selected + 1) == 2)
    {
        return useSpell2(monstatype, n, e, s, w, fl);
    }
    else if ((selected + 1) == 3)
    {
        return useSpell3(monstatype, n, e, s, w, fl);
    }
    else if ((selected + 1) == 4)
    {
        if (statLevel() > 2)
        {
            return useSpell4(monstatype, n, e, s, w, fl);
        }
        else
        {
            return exitMagic(monstatype, n, e, s, w, fl);
        }
    }
    else if ((selected + 1) == 5)
    {
        if (statLevel() > 4)
        {
            return useSpell5(monstatype, n, e, s, w, fl);
        }
        else
        {
            return exitMagic(monstatype, n, e, s, w, fl);
        }
    }
    else if ((selected + 1) == 6)
    {
        return exitMagic(monstatype, n, e, s, w, fl);
    }
    mainb(monstatype, n, e, s, w, fl);
    return 0;
}
