#include "getrandom.h"
#define KEY_UP 72       //Up arrow character
#define KEY_DOWN 80    //Down arrow character
#define KEY_ENTER '\r'//Enter key charatcer
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_SPACE 32

void box_n4n4(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_n3n4(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_n2n4(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_n1n4(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_0n4(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_p1n4(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_p2n4(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_p3n4(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_p4n4(int prevN, int prevE, int prevS, int prevW, int arrow);

void box_n4n3(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_n3n3(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_n2n3(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_n1n3(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_0n3(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_p1n3(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_p2n3(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_p3n3(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_p4n3(int prevN, int prevE, int prevS, int prevW, int arrow);

void box_n4n2(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_n3n2(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_n2n2(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_n1n2(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_0n2(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_p1n2(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_p2n2(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_p3n2(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_p4n2(int prevN, int prevE, int prevS, int prevW, int arrow);

void box_n4n1(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_n3n1(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_n2n1(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_n1n1(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_0n1(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_p1n1(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_p2n1(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_p3n1(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_p4n1(int prevN, int prevE, int prevS, int prevW, int arrow);

void box_n40(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_n30(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_n20(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_n10(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_00(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_p10(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_p20(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_p30(int prevN, int prevE, int prevS, int prevW, int arrow);
void box_p40(int prevN, int prevE, int prevS, int prevW, int arrow);


void printRefresh()
{
    system("CLS");
    setCoord(0, 0);
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
    std::cout <<
        "                                                      [ REFRESH ]                                                       ";
    std::cout << "\n\n\n";
    changeColour(darkgrey);
    std::cout <<
        "                                                        RETURN                                                          ";
    changeColour(white);
    setCoord(0, 0);


}
void printRefresh2()
{
    system("CLS");
    setCoord(0, 0);
    changeColour(darkgrey);
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
    std::cout <<
        "                                                        REFRESH                                                         ";
    std::cout << "\n\n\n";
    changeColour(white);
    std::cout <<
        "                                                      [ RETURN ]                                                        ";
    setCoord(0, 0);

}
void refreshOrNo(int nor, int eas, int sou, int wes, int floor)
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
                printRefresh();
            }
            break;
        case KEY_DOWN:
            if (selected < numChoices - 1)
            { //Dont increment if we are at the last option.
                ++selected;
                updated = true;
                printRefresh2();
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
        refresh();
    }
    else if ((selected + 1) == 2)
    {
        system("CLS");
        boxMaker(nor, eas, sou, wes, floor);  ////////////  was map 00000
    }
}


void refresh()
{
    //stopmusic
    PlaySound(NULL, NULL, 0);
    system("refresher.exe");
    //C:/Users/Windows/Desktop/ScionsOfEmporia/Refresh/
    exit(0);
}

// Goes to map()
int mapper()
{

    return map(0, 0, 0, 0, 0);
}

// Keeps a running tally of [y] coordinate
int yVal(int ychange)
{
    static int Y2{ 0 };								// used to be static
    int newY{ Y2 + ychange };
    Y2 = newY;
    if (Y2 < -4)
    {
        Y2 = -4;
    }
    if (Y2 > 0)
    {
        Y2 = 0;
    }
    return Y2;
}

// Keeps a running tally of [x] coordinate
int xVal(int xchange)
{
    static int X2{ 0 };								// used to be static
    int newX{ X2 + xchange };
    X2 = newX;
    if (X2 < -4)
    {
        X2 = -4;
    }
    if (X2 > 4)
    {
        X2 = 4;
    }
    return X2;
}

// Runs keypress() returns main()
int map(int north, int east, int south, int west, int direction)
{
    int nn{ north };
    int ee{ east };
    int ss{ south };
    int ww{ west };
    // up 1, down 2, left 3, right 4
    int direct{ direction };


    keypress(nn, ee, ss, ww, direct);
    return map(nn, ee, ss, ww, direct);
}

// Reads xVal and yVal, then goes to that coordinate's room.
void keypress(int nn, int ee, int ss, int ww, int direct)
{
    int prevN{ nn };
    int prevE{ ee };
    int prevS{ ss };
    int prevW{ ww };
    int arrow{ direct }; //1234, udlr


    if (yVal(0) == 0)
    {
        if (xVal(0) == -4)
        {
            box_n40(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == -3)
        {
            box_n30(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == -2)
        {
            box_n20(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == -1)
        {
            box_n10(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 0)
        {
            box_00(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 1)
        {
            box_p10(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 2)
        {
            box_p20(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 3)
        {
            box_p30(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 4)
        {
            box_p40(prevN, prevE, prevS, prevW, arrow);
        }
    }
    else if (yVal(0) == -1)
    {
        if (xVal(0) == -4)
        {
            box_n4n1(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == -3)
        {
            box_n3n1(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == -2)
        {
            box_n2n1(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == -1)
        {
            box_n1n1(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 0)
        {
            box_0n1(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 1)
        {
            box_p1n1(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 2)
        {
            box_p2n1(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 3)
        {
            box_p3n1(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 4)
        {
            box_p4n1(prevN, prevE, prevS, prevW, arrow);
        }
    }
    else if (yVal(0) == -2)
    {
        if (xVal(0) == -4)
        {
            box_n4n2(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == -3)
        {
            box_n3n2(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == -2)
        {
            box_n2n2(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == -1)
        {
            box_n1n2(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 0)
        {
            box_0n2(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 1)
        {
            box_p1n2(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 2)
        {
            box_p2n2(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 3)
        {
            box_p3n2(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 4)
        {
            box_p4n2(prevN, prevE, prevS, prevW, arrow);
        }
    }
    else if (yVal(0) == -3)
    {
        if (xVal(0) == -4)
        {
            box_n4n3(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == -3)
        {
            box_n3n3(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == -2)
        {
            box_n2n3(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == -1)
        {
            box_n1n3(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 0)
        {
            box_0n3(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 1)
        {
            box_p1n3(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 2)
        {
            box_p2n3(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 3)
        {
            box_p3n3(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 4)
        {
            box_p4n3(prevN, prevE, prevS, prevW, arrow);
        }
    }
    else if (yVal(0) == -4)
    {
        if (xVal(0) == -4)
        {
            box_n4n4(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == -3)
        {
            box_n3n4(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == -2)
        {
            box_n2n4(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == -1)
        {
            box_n1n4(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 0)
        {
            box_0n4(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 1)
        {
            box_p1n4(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 2)
        {
            box_p2n4(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 3)
        {
            box_p3n4(prevN, prevE, prevS, prevW, arrow);
        }
        else if (xVal(0) == 4)
        {
            box_p4n4(prevN, prevE, prevS, prevW, arrow);
        }
    }
}

// Modifies xVal and yVal, based on arrow keys. was void
int direction(int north, int east, int south, int west)
{
    int u{ 1 };
    int d{ 2 };
    int l{ 3 };
    int r{ 4 };

    char c;
    switch ((c = _getch()))
    {
    case KEY_UP:
        if (north < 500)
        {
            yVal(0);         // 0

        }
        else
        {
            yVal(-1);
        }
        return map(north, east, south, west, u);
        break;
    case KEY_DOWN:
        if (south < 500)
        {
            yVal(0);   // 0
        }
        else
        {
            yVal(1);
        }
        return map(north, east, south, west, d);
        break;
    case KEY_RIGHT:
        if (east < 500)
        {
            xVal(0);
        }
        else
        {
            xVal(1);      // 0
        }
        return map(north, east, south, west, r);
        break;
    case KEY_LEFT:
        if (west < 500)
        {
            xVal(0);
        }
        else
        {
            xVal(-1); // 0
        }
        return map(north, east, south, west, l);
        break;
    case KEY_SPACE:
        system("CLS");
        printRefresh();
        refreshOrNo(north, east, south, west, 0);
        break;
    }
    return map(north, east, south, west, 0);
}
//goes to direction
void boxMaker(int nor, int eas, int sou, int wes, int floor)
{
    int north{ nor };
    int east{ eas };
    int south{ sou };
    int west{ wes };
    int design{ floor };

    int x{ 0 };                             //sets location to build room
    int y{ 0 };
    x = 54 + (xVal(0) * 13);  //11
    y = 30 + (yVal(0) * 6);   //5        27
//       

    setCoord(8, 1);
    std::cout << "HP: [ ";
    changeColour(lightred);
    std::cout << statCurrentHP(0);
    changeColour(white);
    std::cout << " ]          ";
    std::cout << "MP: [ ";
    changeColour(cyan);
    std::cout << statCurrentMP(0);
    changeColour(white);
    std::cout << " ]          ";
    std::cout << "GOLD: [ ";
    changeColour(yellow);
    std::cout << statGold(0);
    changeColour(white);
    std::cout << " ]          ";
    std::cout << "LVL: [ ";
    std::cout << statLevel();
    std::cout << " ]          ";
    changeColour(darkgrey);
    std::cout << "PRESS SPACE TO RESTART";
    changeColour(white);

    setCoord(x, y);
    std::cout << "|___";                    // this is the bottom
    if (yVal(0) == 0)
    {
        std::cout << "____";

    }
    else if (south < 500)
    {
        std::cout << "____";

    }
    else if (south < 1001)
    {
        std::cout << "|  |";
    }
    std::cout << "___|";
    //

    //left side bottom
    setCoord(x, y - 1);

    if (xVal(0) == -4)
    {
        std::cout << "|     ";

    }
    else if (west < 500)
    {
        std::cout << "|     ";
    }
    else if (west < 1001)
    {
        std::cout << "--    ";
    }


    //right side bottom

    if (xVal(0) == 4)
    {
        std::cout << "     |\n";
    }
    else if (east < 500)
    {
        std::cout << "     |\n";
    }
    else if (east < 1001)
    {
        std::cout << "    --\n";
    }
    //

    ///center area
    setCoord(x, y - 2);
    if (xVal(0) == -4)
    {
        std::cout << "|     ";
    }
    else if (west < 500)
    {
        std::cout << "|     ";
    }
    else
    {
        std::cout << "      ";
    }


                                            //background is x16, then add foreground
    if (design == 0) // empty
    {
        //changeColour(128);
        std::cout << " ";
        //changeColour(white);
    }
    if (design == 1) // merchant
    {
        changeColour(47);
        std::cout << "M";
        changeColour(white);
    }
    if (design == 2) // save
    {
        changeColour(31);
        std::cout << "S";
        changeColour(white);
    }
    if (design == 3) // monster
    {
        changeColour(79);
        std::cout << "B";
        changeColour(white);
    }
    if (design == 4) // trap
    {
        changeColour(128);
        std::cout << "T";
        changeColour(white);
    }
    if (design == 5) // treasure
    {
        changeColour(95);
        std::cout << "$";
        changeColour(white);
    }
    if (design == 6) // boss
    {
        changeColour(240);
        std::cout << "E";
        changeColour(white);
    }



    //changeColour(128);
    //std::cout << "M";
    //changeColour(white);



    if (xVal(0) == 4)
    {
        std::cout << "    |\n";
    }
    else if (east < 500)
    {
        std::cout << "    |\n";
    }
    else
    {
        std::cout << "     \n";
    }

    //
            /////left side top
    setCoord(x, y - 3);

    if (xVal(0) == -4)
    {
        std::cout << "|     ";

    }
    else if (west < 500)
    {
        std::cout << "|     ";
    }
    else if (west < 1001)
    {
        std::cout << "--    ";
    }


    //right side top
    //setCoord(x, y - 3);
    if (xVal(0) == 4)
    {
        std::cout << "     |\n";

    }
    else if (east < 500)
    {
        std::cout << "     |\n";
    }
    else if (east < 1001)
    {
        std::cout << "    --\n";
    }

    setCoord(x, y - 4);
    std::cout << "|          |\n";
    //this is the top box
    setCoord(x, y - 5);
    std::cout << " ___";
    if (yVal(0) == -4)
    {
        std::cout << "____";
    }
    else if (north < 500)
    {
        std::cout << "____";
    }
    else if (north < 1001)
    {
        std::cout << "|  |";
    }

    std::cout << "___ \n";



    setCoord(x + 5, y - 2);

    direction(north, east, south, west);
}

void trapRoom(int n, int e, int s, int w)
{
    int nor{ n };
    int eas{ e };
    int sou{ s };
    int wes{ w };
    int floor{ 4 };
    //code specific to this room
    system("CLS");
    setCoord(0, 0);
    changeColour(68);
    string message0000 =
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"
        "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]";
    std::cout << message0000;
    setCoord(0, 0);
    changeColour(black);
    std::cout << message0000;
    changeColour(white);
    setCoord(0, 0);

    int wordy{ getRandom(50) };
    static int wordys{ wordy };
    if (wordys < 33)
    {
        std::cout << "\n THIS ROOM IS RIDDLED WITH TRAPS\n\n YOU TAKE [ ";
    }
    else if (wordys < 66)
    {
        std::cout << "\n THIS ROOM CAVES IN AS THE DOORS RUMBLE OPEN\n\n YOU TAKE [ ";
    }
    else if (wordys < 101)
    {
        std::cout << "\n THIS ROOM IS FILLED WITH NOXIOUS FUMES\n\n YOU TAKE [ ";
    }

    changeColour(red);
    int silver{ getRandom(50) };
    std::cout << silver;
    changeColour(white);
    std::cout << " ] DAMAGE\n\n";
    displayHPMP(silver, 0);
    std::cout << '\n' << '\n';
    system("PAUSE");
    system("CLS");
    boxMaker(nor, eas, sou, wes, floor);
}
void trapRoomEmpty(int n, int e, int s, int w)
{
    int nor{ n };
    int eas{ e };
    int sou{ s };
    int wes{ w };
    int floor{ 4 };
    boxMaker(nor, eas, sou, wes, floor);
}

void printBoss()
{
    system("CLS");
    setCoord(0, 0);
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
    std::cout <<
        "                                                     [ ENTER LAIR ]                                                     ";
    std::cout << "\n\n\n";
    changeColour(darkgrey);
    std::cout <<
        "                                                          EXIT                                                          ";
    changeColour(white);
    setCoord(0, 0);


}
void printBoss2()
{
    system("CLS");
    setCoord(0, 0);
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
    changeColour(darkgrey);
    std::cout <<
        "                                                       ENTER LAIR                                                       ";
    std::cout << "\n\n\n";
    changeColour(white);
    std::cout <<
        "                                                        [ EXIT ]                                                        ";
    setCoord(0, 0);

}
void bossOrNo(int nor, int eas, int sou, int wes, int floor)
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
                printBoss();
            }
            break;
        case KEY_DOWN:
            if (selected < numChoices - 1)
            { //Dont increment if we are at the last option.
                ++selected;
                updated = true;
                printBoss2();
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
        std::cout << " ENEMY SPOTTED: ELDER GOD OF DOOM";
        int d{ 2000 };
        display();
        std::cout << "\n\n\n\n\n\n\n";
        displayHPMP(0, 0);
        mainb(d, nor, eas, sou, wes, floor);
    }
    else if ((selected + 1) == 2)
    {
        system("CLS");
        boxMaker(nor, eas, sou, wes, floor);  ////////////  was map 00000
    }
}
void bossRoom(int n, int e, int s, int w)
{
    int nor{ n };
    int eas{ e };
    int sou{ s };
    int wes{ w };
    int floor{ 6 };
    //code specific to this room
    system("CLS");
    changeColour(darkgrey);
    wipe();
    changeColour(white);
    printBoss();
    bossOrNo(nor, eas, sou, wes, floor);
    system("CLS");
    boxMaker(nor, eas, sou, wes, floor);
}
void bossRoomEmpty(int n, int e, int s, int w)
{
    int nor{ n };
    int eas{ e };
    int sou{ s };
    int wes{ w };
    int floor{ 6 };
    boxMaker(nor, eas, sou, wes, floor);
}

void monsterRoom(int n, int e, int s, int w)
{
    int nor{ n };
    int eas{ e };
    int sou{ s };
    int wes{ w };
    int floor{ 3 };

    system("CLS");
    changeColour(red);
    wipe();
    changeColour(white);
    name(nor, eas, sou, wes, floor);
    //its gonna run name, and when its fucking done, itll be back here. no directions out.
    boxMaker(nor, eas, sou, wes, floor);
}
void monsterRoomEmpty(int n, int e, int s, int w)
{
    int nor{ n };
    int eas{ e };
    int sou{ s };
    int wes{ w };
    int floor{ 3 };
    boxMaker(nor, eas, sou, wes, floor);
}

void treasureRoom(int n, int e, int s, int w)
{

    int nor{ n };
    int eas{ e };
    int sou{ s };
    int wes{ w };
    int floor{ 5 };
    //code specific to this room

    
       
        changeColour(magenta);
        wipe();
        changeColour(white);
        std::cout << "\n THIS ROOM APPEARS TO BE A TREASURE STOCKPILE.\n\n YOU RECIEVE [ ";
        changeColour(yellow);
        int silver{ getRandom(300) };
        std::cout << silver;
        changeColour(white);
        std::cout << " ] GOLD\n\n";
        statGold(silver);
        system("PAUSE");
        system("CLS");
    
    boxMaker(nor, eas, sou, wes, floor);
}
void treasureRoomEmpty(int n, int e, int s, int w)
{
    int nor{ n };
    int eas{ e };
    int sou{ s };
    int wes{ w };
    int floor{ 5 };
    boxMaker(nor, eas, sou, wes, floor);
}

void printSave()
{
    system("CLS");
    setCoord(0, 0);
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
    std::cout <<
        "                                                     [ SAVE  GAME ]                                                     ";
    std::cout << "\n\n\n";
    changeColour(darkgrey);
    std::cout <<
        "                                                          EXIT                                                          ";
    changeColour(white);
    setCoord(0, 0);


}
void printSave2()
{
    system("CLS");
    setCoord(0, 0);
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
    changeColour(darkgrey);
    std::cout <<
        "                                                       SAVE  GAME                                                       ";
    std::cout << "\n\n\n";
    changeColour(white);
    std::cout <<
        "                                                        [ EXIT ]                                                        ";
    setCoord(0, 0);

}
void saveOrNo(int nor, int eas, int sou, int wes, int floor)
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
                printSave();
            }
            break;
        case KEY_DOWN:
            if (selected < numChoices - 1)
            { //Dont increment if we are at the last option.
                ++selected;
                updated = true;
                printSave2();
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
        saveLoad(0);
    }
    else if ((selected + 1) == 2)
    {
        system("CLS");
        boxMaker(nor, eas, sou, wes, floor);  ////////////  was map 00000
    }
}
void saveRoom(int n, int e, int s, int w)
{
    int nor{ n };
    int eas{ e };
    int sou{ s };
    int wes{ w };
    int floor{ 2 };

    system("CLS");
    changeColour(blue);
    wipe();
    changeColour(white);
    printSave();
    saveOrNo(nor, eas, sou, wes, floor);
    system("CLS");
    boxMaker(nor, eas, sou, wes, floor);
}
void saveRoomEmpty(int n, int e, int s, int w)
{
    int nor{ n };
    int eas{ e };
    int sou{ s };
    int wes{ w };
    int floor{ 2 };
    boxMaker(nor, eas, sou, wes, floor);
}

void merchantRoom(int n, int e, int s, int w)
{
    int nor{ n };
    int eas{ e };
    int sou{ s };
    int wes{ w };
    int floor{ 1 };

    system("CLS");
    changeColour(green);
    wipe();
    changeColour(white);
    merchant(nor, eas, sou, wes, floor);
    system("CLS");
    boxMaker(nor, eas, sou, wes, floor);
}
void merchantRoomEmpty(int n, int e, int s, int w)
{
    int nor{ n };
    int eas{ e };
    int sou{ s };
    int wes{ w };
    int floor{ 1 };
    boxMaker(nor, eas, sou, wes, floor);
}

void emptyRoom(int n, int e, int s, int w)
{
    int nor{ n };
    int eas{ e };
    int sou{ s };
    int wes{ w };

    int luck{ getRandom(2000) };
  
    if (luck == 1439)
    {
        static bool stone;
        if (!stone)
        {
            stone = true;
            changeColour(black);
            wipe();
            changeColour(white);
            system("CLS");
            std::cout << "\n ";
            string mess =
                "'Eh?'";
            slowPrint(mess, 15);
            std::this_thread::sleep_for(std::chrono::milliseconds(400));
            std::cout << "\n  ";
            string mess2 =
                "'What's that?'";
            slowPrint(mess2, 15);
            std::this_thread::sleep_for(std::chrono::milliseconds(400));
            std::cout << "\n\n";
            string mess3 =
                " A STONE AXE IS BARELY VISIBLE INSET INTO THE WALL OF THIS ROOM.\n\n ATTEMPT TO REMOVE THE AXE?   y/n\n";
            slowPrint(mess3, 15);
            char input;
            std::cin >> input;
            if (input == 'y')
            {
                weapon(10);
                std::cout << '\n';
                string mess4 =
                    "\n THE AXE PULLS FREE FROM ITS ENTOMBMENT, SHIMMERING FAINTLY WITH AN ENCHANTED AURA.";
                slowPrint(mess4, 15);
                std::cout << '\n' << '\n';
                system("PAUSE");
                system("CLS");
                boxMaker(nor, eas, sou, wes, 0);
            }
            else if (input == 'Y')
            {
                weapon(10);
                std::cout << '\n';
                string mess5 =
                    "\n THE AXE PULLS FREE FROM ITS ENTOMBMENT, SHIMMERING FAINTLY WITH AN ENCHANTED AURA.";
                slowPrint(mess5, 15);
                std::cout << '\n' << '\n';
                system("PAUSE");
                system("CLS");
                boxMaker(nor, eas, sou, wes, 0);
            }
            else if (input == 'n')
            {
                system("CLS");
                boxMaker(nor, eas, sou, wes, 0);
            }
            else if (input == 'N')
            {
                system("CLS");
                boxMaker(nor, eas, sou, wes, 0);
            }
            else
            {
                std::cout << "\n INVALID ENTRY";
            }
            if (input == 'y')
            {
                weapon(10);
                std::cout << '\n';
                string mess6 =
                    "\n THE AXE PULLS FREE FROM ITS ENTOMBMENT, SHIMMERING FAINTLY WITH AN ENCHANTED AURA.";
                slowPrint(mess6, 15);
                std::cout << '\n' << '\n';
                system("PAUSE");
                system("CLS");
                boxMaker(nor, eas, sou, wes, 0);
            }
            if (input == 'Y')
            {
                weapon(10);
                std::cout << '\n';
                string mess7 =
                    "\n THE AXE PULLS FREE FROM ITS ENTOMBMENT, SHIMMERING FAINTLY WITH AN ENCHANTED AURA.\n\n\n\n\n\n";
                slowPrint(mess7, 15);
                std::cout << '\n' << '\n';
                system("PAUSE");
                system("CLS");
                boxMaker(nor, eas, sou, wes, 0);
            }
            else
            {
                system("CLS");
                boxMaker(nor, eas, sou, wes, 0);
            }
        }
        else
        {
            
            boxMaker(nor, eas, sou, wes, 0);
        }
    }
    else
    {
        
        boxMaker(nor, eas, sou, wes, 0);
    }
}
void emptyRoomEmpty(int n, int e, int s, int w)
{
    int nor{ n };
    int eas{ e };
    int sou{ s };
    int wes{ w };
    boxMaker(nor, eas, sou, wes, 0);
}

void box_n4n4(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }
            
        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}

void box_n3n4(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_n2n4(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_n1n4(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_0n4(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_p1n4(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_p2n4(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_p3n4(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_p4n4(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}

void box_n4n3(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_n3n3(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_n2n3(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_n1n3(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_0n3(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_p1n3(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_p2n3(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_p3n3(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_p4n3(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}

void box_n4n2(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_n3n2(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_n2n2(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_n1n2(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_0n2(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_p1n2(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_p2n2(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_p3n2(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_p4n2(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}

void box_n4n1(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_n3n1(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_n2n1(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_n1n1(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_0n1(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_p1n1(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_p2n1(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_p3n1(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_p4n1(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}

void box_n40(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_n30(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_n20(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_n10(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_00(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_p10(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_p20(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_p30(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}
void box_p40(int prevN, int prevE, int prevS, int prevW, int arrow)
{
    int getRandom(int upperBoundRdm);
    static int n1{ 0 };
    static int e1{ 0 };
    static int s1{ 0 };
    static int w1{ 0 };
    static int roomtype1{ 0 };

    static bool enter = true;

    static bool box_n4n4;
    if (!box_n4n4)
    {
        box_n4n4 = true;
        n1 = getRandom(500);
        e1 = getRandom(500);
        s1 = getRandom(500);
        w1 = getRandom(500);
        roomtype1 = getRandom(500);

    }

    if (arrow == 1)          //  previous arrow --- 1234, udlr
    {
        if (prevN > 499)
        {
            s1 = prevN;
        }
    }
    if (arrow == 2)
    {
        if (prevS > 499)
        {
            n1 = prevS;
        }
    }
    if (arrow == 3)
    {
        if (prevW > 499)
        {
            e1 = prevW;
        }
    }
    if (arrow == 4)
    {
        if (prevE > 499)
        {
            w1 = prevE;
        }
    }

    if (roomtype1 < 50)
    {

        if (enter == true)
        {
            enter = false;
            trapRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            trapRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 200)
    {

        if (enter == true)
        {
            enter = false;
            monsterRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            monsterRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 250)
    {

        if (enter == true)
        {
            enter = false;
            static bool cash;
            if (!cash)
            {
                cash = true;
                treasureRoom(n1, e1, s1, w1);
            }
            else
            {
                treasureRoomEmpty(n1, e1, s1, w1);
            }
        }
        if (enter == false)
        {
            enter = true;
            treasureRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 300)
    {

        if (enter == true)
        {
            enter = false;
            saveRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            saveRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 325)
    {

        if (enter == true)
        {
            enter = false;
            merchantRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            merchantRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 350)
    {

        if (enter == true)
        {
            enter = false;
            static bool boss;
            if (!boss)
            {
                boss = true;
                bossRoom(n1, e1, s1, w1);
            }
            else
            {
                bossRoomEmpty(n1, e1, s1, w1);
            }

        }
        if (enter == false)
        {
            enter = true;
            bossRoomEmpty(n1, e1, s1, w1);
        }
    }
    else if (roomtype1 < 1000)
    {

        if (enter == true)
        {
            enter = false;
            emptyRoom(n1, e1, s1, w1);
        }
        if (enter == false)
        {
            enter = true;
            emptyRoomEmpty(n1, e1, s1, w1);
        }
    }
}