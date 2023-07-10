#include <iostream>
#include <Windows.h>
#include <random>
#include <cstdlib>
#include <ctime>
#include <algorithm>    // std::count
#include <vector>
#include <string>
#include <limits.h>
#include "getrandom.h"		// Generates random integer. Call with "getRandom(int upperBoundRdm)"
							// Prints MP stat. Uses input "currentMP" - "spellCost".
//#define ENABLE_DEBUG

int currentMP(int counter, int spellCost)
{ 
#ifdef ENABLE_DEBUG
	std::cerr << "currentMP() called\n";
#endif
	int maxMP{ 30 };
	return maxMP - (counter * spellCost);				// 30 is a placeholder for max mp
}
void printMP(int currentMP, int spellCost)
{
#ifdef ENABLE_DEBUG
	std::cerr << "printMP(int currentMP, int spellCost) called\n";
#endif
	int currMP{ currentMP };
	int spCost{ spellCost }; 
	int special{ currMP - spCost };
	if (special < 0)
		{
			special;
		}
	std:: cout << special;
}
int counter(int notUsingMP)
{
#ifdef ENABLE_DEBUG
	std::cerr << "counter(int notUsingMP) called\n";
#endif
	static int counter = 3;							// value will be cost of mp spell
	int z{ ++counter - notUsingMP };			// value of nUMP 0 when using spell, otherwise 1 if reading mp
	return z;
}
int magMissile()
{
#ifdef ENABLE_DEBUG
	std::cerr << "magMissile() called\n";
#endif
	int main();
	int spellCost{ 1 };                // gets multiplied by 3
	if (currentMP(counter(4), spellCost) < spellCost)
	{
		int main();
		std::cout << "\nOUT OF MANA\n";
		return main();
	}
	else if (currentMP((counter(4)), spellCost) >= spellCost)
	{
		int upperBound{ 20 };    //20 is a placeholder for max damage
		int ran{ getRandom(upperBound) };
		if (ran == 0)
		{
			std::cout << "\nMAGIC DAMAGE:" << '\n' << "MISS\n";

			std::cout << "MP:  ";
			printMP(currentMP(counter(4), spellCost), spellCost);
			std::cout << " / 30 \n";  // 30 is a placeholder
			return main();
		}
		else
		{
			std::cout << "\nMAGIC MISSILE DAMAGE:" << '\n' << ran << '\n';
			std::cout << "MP:  ";
			printMP(currentMP(counter(4), spellCost), spellCost);
			std::cout << " / 30 \n";  // 30 is a placeholder
			int dam{ ran + 0 };   //stats
			return dam;
		}

	}
}
int attack()
{
#ifdef ENABLE_DEBUG
	std::cerr << "attack() called\n";
#endif
	int main();
	int spellCost{ 0 };
	int upperBound{ 15 };    //15 is a placeholder
	int ran{ getRandom(upperBound) };
	if (ran == 0)
	{
		std::cout << "\nATTACK DAMAGE:" << '\n' << "MISS\n";
		
		return main();
	}
	else
	{
		std::cout << "\nATTACK DAMAGE:" << '\n' << ran << '\n';
		int dam{ ran + 0 };   //stats
		return dam;
	}
}
int bugbearHP(int dam)
{
	int main();
	static int previousHP{ 140 };
	int currEnemyHP{ previousHP - dam };
	previousHP = currEnemyHP;
	if (previousHP > 0)
	{
		std::cout << "\nBUGBEAR HP:	" << previousHP << " / 140";
		return main();
	}
	if (previousHP < 0)
	{
		previousHP = 0;
	}
	if (previousHP == 0)
	{
		std::cout << "\nBUGBEAR DEAD";
		previousHP = 140;
		return main();
	}
}
int main()
{
	std::cout << "\n			[a]   TO ATTACK\n			[m]   TO USE MAGIC MISSILE\n" << '\n';
	char input;
	std::cin >> input;
	if (input == 'a')
	{
		int dam{ attack() };
		bugbearHP(dam);
		return main();
	}
	else if (input == 'm')
	{
		
		int dam{ magMissile() };
		bugbearHP(dam);
		return main();
	}
	else
	{
		std::cout << "\nINVALID ENTRY\n";
		return main();
	}
}