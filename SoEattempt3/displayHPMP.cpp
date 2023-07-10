#include "getrandom.h"

void displayHPMP(int pain, int spellcost)
{
	int localpain{ pain };
	int localspellcost{ spellcost };
	std::cout << "                                               ";
	getname();
	std::cout << " HP:   ";
	changeColour(lightred);
	int health{ statCurrentHP(localpain) };
	if (health < (statMaxHP() / 10))
	{
		changeColour(red);
	}
	std::cout << health;
	changeColour(white);
	std::cout << " / ";
	changeColour(lightred);
	std::cout << statMaxHP();
	changeColour(white);
	
		std::cout << "\n                                                                                  ARMOR: ";

	changeColour(darkgrey);
	if (getArmor(0) == 6)
	{
		std::cout << " LEATHER ARMOR ";
	}
	if (getArmor(0) == 10)
	{
		std::cout << " STEEL ARMOR   ";
	}
	if (getArmor(0) == 14)
	{
		std::cout << " CARAPACE      ";
	}
	changeColour(white);
	std::cout << "  [";
	changeColour(lightgreen);
	std::cout << getArmor(0);
	changeColour(white);
	std::cout << "]";

	std::cout << "\n                                               ";
	getname();
	std::cout << " MP:   ";
	changeColour(cyan);
	int mana{ statCurrentMP(localspellcost) };
	if (mana < (statMaxMP() / 10))
	{
		changeColour(blue);
	}
	std::cout << mana;
	changeColour(white);
	std::cout << " / ";
	changeColour(cyan);
	std::cout << statMaxMP();
	changeColour(white);
	
		std::cout << "\n                                                                                  WEAPON: ";
	
	changeColour(darkgrey);
	if (weapon(0) == broadsword)
	{
		std::cout << "BROADSWORD    ";
	}
	if (weapon(0) == razorflail)
	{
		std::cout << "RAZOR FLAIL   ";
	}
	if (weapon(0) == murasame)
	{
		std::cout << "MURASAME      ";
	}
	if (weapon(0) == hungryblade)
	{
		std::cout << "HUNGRY BLADE  ";
	}
	if (weapon(0) == stoneaxe)
	{
		std::cout << "BASALT AXE    ";
	}
	changeColour(white);
	std::cout << "  [";
	changeColour(lightgreen);
	std::cout << weapon(0);
	changeColour(white);
	std::cout << "]";

	std::cout << '\n';
	changeColour(white);
}