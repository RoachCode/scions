#include "getrandom.h"


int attack(int monster)
{
	int upperBound{ statStrength() };				
	int ran{ getRandom(upperBound) };
	if (ran == 0)
	{
		std::cout << "\n MISS\n";
		return 0;
	}
	else if ((ran + weapon(0)) == (upperBound + weapon(0)))
	{
		int dam{ ran + weapon(0) };
		int s{ (dam * 3) / 2 };
		if (monster == 550)
		{
			s = 0;
			std::cout << " YOU USE: MELEE ATTACK\n CRITICAL ATTACK DAMAGE: " << s << " [ IMMUNE ]" << '\n';
			return s;
		}
		std::cout << " YOU USE: MELEE ATTACK\n CRITICAL ATTACK DAMAGE: " << s << '\n';
		return s;
	}
	else
	{
		int dam{ ran + weapon(0) };
		if (monster == 550)
		{
			dam = 0;
			std::cout << " YOU USE: MELEE ATTACK\n ATTACK DAMAGE: " << dam << " [ IMMUNE ]" << '\n';
			return dam;
		}
		std::cout << " YOU USE: MELEE ATTACK\n ATTACK DAMAGE: " << dam << '\n';
		return dam;
	}
}