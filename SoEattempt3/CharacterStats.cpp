#include "getrandom.h"
												// Takes incomingXP. Adds currentXP. Returns XP
int statXP(int incomingXP)
{
	static int XP{ 10 };								// used to be static
	int newXP{ XP + incomingXP };
	XP = newXP;
	return XP;
}

int statGold(int incomingGold)
{
	static int GP{ 0 };								// used to be static
	int newGP{ GP + incomingGold };
	GP = newGP;
	return GP;
}
												// Runs without input. Runs statXP(). Returns int level.
int statLevel()
{
	int exp{ statXP(0) };
	int level{ 1 };
	if (exp < 350)
	{
		level = 1;
		return level;
	}
	else if (exp < 1450)
	{
		level = 2;
		static bool initialized2;
		if (!initialized2)
		{
			initialized2 = true;
			changeColour(black);
			statCurrentHP(-9999);
			statCurrentMP(-9999);
			changeColour(white);
			return level;
		}
		else
		{
			return level;
		}
	}
	else if (exp < 2875)
	{
		level = 3;
		static bool initialized2;
		if (!initialized2)
		{
			initialized2 = true;
			changeColour(black);
			statCurrentHP(-9999);
			statCurrentMP(-9999);
			changeColour(white);
			return level;
		}
		else
		{
			return level;
		}
	}
	else if (exp < 4950)
	{
		level = 4;
		static bool initialized2;
		if (!initialized2)
		{
			initialized2 = true;
			changeColour(black);
			statCurrentHP(-9999);
			statCurrentMP(-9999);
			changeColour(white);
			return level;
		}
		else
		{
			return level;
		}
	}
	else if (exp < 8000)
	{
		level = 5;
		static bool initialized2;
		if (!initialized2)
		{
			initialized2 = true;
			changeColour(black);
			statCurrentHP(-9999);
			statCurrentMP(-9999);
			changeColour(white);
			return level;
		}
		else
		{
			return level;
		}
	}
	else if (exp < 14500)
	{
		level = 6;
		static bool initialized2;
		if (!initialized2)
		{
			initialized2 = true;
			changeColour(black);
			statCurrentHP(-9999);
			statCurrentMP(-9999);
			changeColour(white);
			return level;
		}
		else
		{
			return level;
		}
	}
	else if (exp < 22500)
	{
		level = 7;
		static bool initialized2;
		if (!initialized2)
		{
			initialized2 = true;
			changeColour(black);
			statCurrentHP(-9999);
			statCurrentMP(-9999);
			changeColour(white);
			return level;
		}
		else
		{
			return level;
		}
	}
}
												// Runs without input. Takes statlevel(). Returns HP max.
int statMaxHP()
{
	int topHP{ statLevel() * 2 };
	int ret{ topHP * 187 };
	return ret;
}
												// Runs with int dam input. Takes statMaxHP. Returns current HP.
int statCurrentHP(int dam)
{
	int myhp{ statMaxHP() };
	static int previousHP{ myhp };
	int currentHP{ previousHP - dam };
	previousHP = currentHP;
	if (previousHP > myhp)
	{
		previousHP = myhp;
	}

	if (previousHP > 0)
	{
		return previousHP;
	}
	if (previousHP < 0)
	{
		previousHP = 0;
	}
	if (previousHP == 0)
	{

		changeColour(black);
		previousHP = statMaxHP();
		statCurrentMP(-999);
		int reset{ -statGold(0) };
		statGold(reset);
		int reset2{ -statXP(0) };               //reset is the negative value of current stat tally
		statXP(reset2);                         //this function adds the negative value, causing it to zero.
		potion(200);
		potion(-5);
		tincture(200);
		tincture(-2);
		weapon(-50);
		getArmor(-50);
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		monsterHP(100, -5000, 0, 0, 0, 0, 0);
		setCoord(3, 0);
		changeColour(white);
		/////////////
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		std::cout << "\n\n";
		system("CLS");
		std::cout << "\nENEMY DEFEATED YOU\nGAME OVER\n\n";
		system("PAUSE");
		return loadGame();
	}
}
												// Runs without input. Takes statlevel(). Returns MP max.
int statMaxMP()
{
	int topMP{ statLevel() };
	return topMP * 54;
}
												// Runs with in counter, int spellcost
int statCurrentMP(int spellcost)
{														// value of counter 0 when using spell, otherwise 1 if reading mp
	int mymp{ statMaxMP() };
	static int previousMP{ mymp };
	int currentMP{ previousMP - spellcost };
	previousMP = currentMP;
	if (previousMP > mymp)
	{
		previousMP = mymp;
	}
	if (previousMP > 0)
	{
		return previousMP;
		/*
				std::cout << "						";
				getname();
				std::cout << " HP:    " << previousHP << " / " << statMaxHP() << '\n';
		*/
	}
	if (previousMP < 0)
	{
		previousMP = 0;
	}
	return previousMP;
}

int statStrength()
{
	int a{ statLevel() };
	int strengthbase{ 3 * a };
	if (strengthbase > 5)
	{
		strengthbase = { 4 * a };
	}
	return strengthbase;
}

int statDef()
{
	int def1{ statLevel() * 2 };
	int def2{ def1 - 2 };
	int def3{ def2 + getArmor(0) };
	return def3;
}

int statWisdom()
{
	int a{ statLevel() };
	int strengthbase{ 2 * a };
	if (strengthbase > 5)
	{
		strengthbase = { 3 * a };
	}
	return strengthbase;
}
	// see below
int getArmor(int armortype)
{
	int myarm{ 1 };
	static int previousARM{ myarm };
	int currentARM{ previousARM + armortype };
	previousARM = currentARM;


	if (previousARM < 1)
	{
		previousARM = 1;
	}
	else if (previousARM == 1)
	{
		return leatherarmor;
	}
	else if (previousARM == 2)
	{
		return steelarmor;
	}
	else if (previousARM == 3)
	{
		return carapace;
	}
}        

int weapon(int weaptype)
{
	int mywep{ 1 };
	static int previousWEP{ mywep };
	int currentWEP{ weaptype + previousWEP };
	previousWEP = currentWEP;


	if (previousWEP < 1)
	{
		previousWEP = 1;
	}
	else if (previousWEP == 1)
	{
		return broadsword;
	}
	else if (previousWEP == 2)
	{
		return razorflail;
	}
	else if (previousWEP == 3)
	{
		return murasame;
	}
	else if (previousWEP == 4)
	{
		return hungryblade;
	}
	else if (previousWEP == 5)
	{
		return stoneaxe;
	}
}
