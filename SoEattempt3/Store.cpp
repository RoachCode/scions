#include "getrandom.h"

#define KEY_UP 72       //Up arrow character
#define KEY_DOWN 80    //Down arrow character
#define KEY_ENTER '\r'//Enter key charatcer

void store()
{
    system("CLS");
    setCoord(0, 0);
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n";
    std::cout <<
        "                                                     [ BUY ]                                                      ";
    std::cout << "\n\n\n";
    changeColour(darkgrey);
    std::cout <<
        "                                                       SELL                                                       ";
    std::cout << "\n\n\n";
    std::cout <<
        "                                                       EXIT                                                       ";
    changeColour(white);
    setCoord(0, 0);

}
void store2()
{
    system("CLS");
    setCoord(0, 0);
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n";
    changeColour(darkgrey);
    std::cout <<
        "                                                       BUY                                                        ";
    std::cout << "\n\n\n";
    changeColour(white);
    std::cout <<
        "                                                     [ SELL ]                                                     ";
    std::cout << "\n\n\n";
    changeColour(darkgrey);
    std::cout <<
        "                                                       EXIT                                                       ";
    changeColour(white);
    setCoord(0, 0);
}
void store3()
{
    system("CLS");
    setCoord(0, 0);
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n";
    changeColour(darkgrey);
    std::cout <<
        "                                                       BUY                                                        ";
    std::cout << "\n\n\n";
    std::cout <<
        "                                                       SELL                                                       ";
    std::cout << "\n\n\n";
    changeColour(white);
    std::cout <<
        "                                                     [ EXIT ]                                                     ";
    setCoord(0, 0);

}

void loadStore(int n, int e, int s, int w, int fl)
{
    changeColour(darkgrey);
    store();
    std::this_thread::sleep_for(std::chrono::milliseconds(120));
    changeColour(lightgrey);
    store();
    std::this_thread::sleep_for(std::chrono::milliseconds(120));
    changeColour(white);
    store();
    detectArrowStore(n, e, s, w, fl);
}

void detectArrowStore(int n, int e, int s, int w, int fl)
{
    int selected = 0;                      //Keeps track of which option is selected.
    int numChoices = 3;                     //The number of choices we have.
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
                    store();
                }
                if (selected == 1)
                {
                    store2();
                }
                if (selected == 2)
                {
                    store3();
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
                    store();
                }
                if (selected == 1)
                {
                    store2();
                }
                if (selected == 2)
                {
                    store3();
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
        buying(n, e, s, w, fl);
    }
    else if ((selected + 1) == 2)
    {
        //return selling();
        selling(n, e, s, w, fl);
    }
    else if ((selected + 1) == 3)
    {
        system("CLS");
        boxMaker(n, e, s, w, fl);
    }
   // return loadStore();
}