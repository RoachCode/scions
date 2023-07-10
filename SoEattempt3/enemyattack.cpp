#include "getrandom.h"
#include <iostream>

void returnName(int monstatype)
{
	if (monstatype == 2000)
	{
		std::cout << " ELDER GOD OF DOOM";
	}
	else if (monstatype == 300)
	{
		std::cout << " BLACK DRAGON";
	}
	else if (monstatype == 100)
	{
		std::cout << " LYNX";
	}
	else if (monstatype == 70)
	{
		std::cout << " BANDIT";
	}
	else if (monstatype == 60)
	{
		std::cout << " BUGBEAR";
	}
	else if (monstatype == 40)
	{
		std::cout << " WOLF";
	}
	else if (monstatype == 5)
	{
		std::cout << " SWAMP RAT";
	}
	else if (monstatype == 500)
	{
		std::cout << " HOOK HORROR";
	}
	else if (monstatype == 650)
	{
		std::cout << " INCUBUS";
	}
	else if (monstatype == 400)
	{
		std::cout << " DIREWOLF";
	}
	else if (monstatype == 920)
	{
		std::cout << " RED DRAGON";
	}
	else if (monstatype == 1300)
	{
		std::cout << " DOOM SPAWN";
	}
	else if (monstatype == 550)
	{
		std::cout << " SENTIENT BLADE";
	}
}

int enemyattack(int monstatype)    // if < lows first, if > highs first
{
	std::cout << "\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	returnName(monstatype);
	std::cout << " USES: ";
	int damtochar{ monsterattack(monstatype) };
	int trueDam{ damtochar - statDef() };
	if (trueDam < 0)
	{
		trueDam = 0;
		std::cout << "MISS\n ATTACK DAMAGE: " << trueDam << '\n';
	}
	else if (damtochar < 15)
	{
		std::cout << "HEADBUTT\n ATTACK DAMAGE: " << trueDam << '\n';
	}	
	else if (damtochar < 30)
	{
		std::cout << "CHARGE\n ATTACK DAMAGE: " << trueDam << '\n';
	}
	else if (damtochar < 50)
	{
		if (monstatype == 70)
		{
			std::cout << "KNIFE ATTACK\n ATTACK DAMAGE: " << trueDam << '\n';
			return trueDam;
		}
		std::cout << "CLAW ATTACK\n ATTACK DAMAGE: " << trueDam << '\n';
	}	
	else if (damtochar < 74)
	{
		std::cout << "PSYCHIC BLAST\n ATTACK DAMAGE: " << trueDam << '\n';
	}
	else if (damtochar < 85)
	{
		if (getArmor(0) == 14)
		{
			int half{ trueDam / 2 };
			std::cout << "DRAGON BREATH ATTACK\n ATTACK DAMAGE (FIRE ABSORBED BY CARAPACE): " << half << '\n';
			return half;
		}
		else
		{
			std::cout << "DRAGON BREATH ATTACK\n ATTACK DAMAGE: " << trueDam << '\n';
		}
	}
	else if (damtochar > 100)
	{
		std::cout << "VACUUM BURST\n ATTACK DAMAGE: " << trueDam << '\n';
	}
	else if (damtochar < 120)
	{
		std::cout << "METEOR\n MAGIC DAMAGE: " << trueDam << '\n';
	}
	else if (damtochar < 130)
	{
		std::cout << "ICE STALACTITE ATTACK\nATTACK DAMAGE: " << trueDam << '\n';
	}
	else if (damtochar < 150)
	{
		std::cout << "ICE STALACTITE ATTACK\nATTACK DAMAGE: " << trueDam << '\n';
	}
	else if (damtochar < 300)
	{
		std::cout << "LEVEL 4 DOOM\nCHARACTER LEVEL: " << statLevel() << '\n';
		if (statLevel() == 4)
		{
			trueDam = 9999;
		}
		else if (statLevel() == 8)
		{
			trueDam = 9999;
		}
		else if (statLevel() == 12)
		{
			trueDam = 9999;
		}
		else
		{
			trueDam = 0;
		}
	}
	
	return trueDam;
}