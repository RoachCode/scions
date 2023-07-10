#include "getrandom.h"
#include <iostream>
#include <string.h>
#include <string>
void getSpellName(int spellnamer);

int spell(int monstatype, int spellcostin, int spellnamein, int maxdamin, int maxmpin, int statwisdomin, int n, int e, int s, int w, int fl)
{
	int monstertype(monstatype);
	int spellcost{ spellcostin };
	int	spellname{ spellnamein };
	int	maxdam{ maxdamin };
	int	maxmp{ maxmpin };
	int statwisdom{ statwisdomin };
				    
	if (statCurrentMP(0) < spellcost)
	{
		std::cout << "\n NOT ENOUGH MANA\n";

		mainb(monstertype, n, e, s, w, fl);
		return 0;
	}
	else if (statCurrentMP(0) >= spellcost)
	{
		int upperBound{ maxdam };						  //70 is a placeholder for max damage
		int ran{ getRandom(upperBound) };
		if (ran == 0)
		{
			std::cout << " YOU CAST";
			getSpellName(spellname);
			std::cout << '\n';
			getSpellName(spellname);
			std::cout << " MISS\n";
			return 0;
		}
		else
		{
			std::cout << " YOU CAST";
			getSpellName(spellname);
		
			if (spellname != 3)		//3 AND 4 ARE EXEMPT BECAUSE THEY HEAL
			{	
				if (spellname != 4)
				{
					std::cout << '\n';
					getSpellName(spellname);
				}
				
			}

			int dam{ ran + (statwisdom * 3) };
			if (spellname != 3)
			{
				if (spellname != 4)
				{
					std::cout << " DAMAGE: " << dam << "                             ";
				}
			}

			changeColour(black);                ///
			getname();
			std::cout << " MP:   ";
			//changeColour(cyan);
			std::cout << statCurrentMP(spellcost);
			//changeColour(white);
			std::cout << " / ";
			//changeColour(cyan);
			std::cout << statMaxMP();
			changeColour(white);


			std::cout << '\n';
			return dam;
		}

	}
}
void getSpellName(int spellnamer)
{
	if (spellnamer == 1)
	{
		std::cout << " MAGIC MISSILE";
	}
	else if (spellnamer == 2)
	{
		std::cout << " IMMOLATE";
	}
	else if (spellnamer == 3)
	{
		std::cout << " CURE";
	}
	else if (spellnamer == 4)
	{
		std::cout << " CURA";
	}
	else if (spellnamer == 5)
	{
		std::cout << " AQUARAKE";
	}
}
