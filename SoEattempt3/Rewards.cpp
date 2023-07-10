#include "getrandom.h"

void godofdoom()
{
	int exp{ 840 };
	std::cout << " EXP: ";
	std::cout << (statXP(exp) - statXP(0) + exp) << '\n';
	int gil{ (exp * 5) };
	int money{ getRandom(gil) };
	std::cout << " GOLD: ";
	changeColour(yellow);
	std::cout << (statGold(money) - statGold(0) + money) << '\n' << '\n';
	changeColour(white);
	static bool initializedGGG;
	if (!initializedGGG)
	{
		if (weapon(0) < 8)
		{
			initializedGGG = true;
			weapon(1);
			
		}
		std::cout << "\n YOU RECEIVED: MURASAME BLADE\n\n";
	}
	system("PAUSE");
	system("CLS");
	std::cout << " AND SO, OUR HERO ";
	getname();
	std::cout << " HAS BATTLED THE GREAT ELDER GOD OF DOOM, EMERGING VICTORIOUS\n   WITH MURASAME IN HAND. AS YOU HOLD THE BLADE, HOWEVER, YOU NOTICE THE RUST, THE FLECKING\n      GOLD PAINT, AND THE CHIPPED STEEL OF AN IMITATION.\n         PERHAPS THE NEXT DUNGEON HOLDS WHAT YOU SEEK.";
	std::cout << "\n\n\n THANK YOU FOR PLAYING!\n\n\n";
	system("PAUSE");
	system("CLS");
}
void dragon()
{
	int exp{ 110 };
	std::cout << " EXP: ";
	std::cout << (statXP(exp) - statXP(0) + 110) << '\n';
	int gil{ (exp * 5) };
	int money{ getRandom(gil) };
	std::cout << " GOLD: ";
	changeColour(yellow);
	std::cout << (statGold(money) - statGold(0) + money) << '\n' << '\n';
	changeColour(white);
	hitincture(-1);
	std::cout << "\n YOU RECEIVED: HI-TINCTURE [1]\n\n";
	system("PAUSE");
	system("CLS");
	
}
void lynx()
{
	int exp{ 60 };
	std::cout << " EXP: ";
	std::cout << (statXP(exp) - statXP(0) + 60) << '\n';
	int gil{ (exp * 1) };
	int money{ getRandom(gil) };
	std::cout << " GOLD: ";
	changeColour(yellow);
	std::cout << (statGold(money) - statGold(0) + money) << '\n' << '\n';
	changeColour(white);
	system("PAUSE");
	system("CLS");

}
void bugbear()
{
	int exp{ 40 };
	std::cout << " EXP: ";
	std::cout << (statXP(exp) - statXP(0) + 40) << '\n';
	int gil{ (exp * 1) };
	int money{ getRandom(gil) };
	std::cout << " GOLD: ";
	changeColour(yellow);
	std::cout << (statGold(money) - statGold(0) + money) << '\n' << '\n';
	changeColour(white);
	int treasure{ getRandom(2) };
	if (treasure > 1)
	{
		potion(-2);
		std::cout << "\n YOU RECEIVED: POTION [2]\n\n";
	}
	system("PAUSE");
	system("CLS");

}
void bandit()
{
	int exp{ 70 };
	std::cout << " EXP: ";
	std::cout << (statXP(exp) - statXP(0) + 70) << '\n';
	int gil{ (exp * 3) };
	int money{ getRandom(gil) };
	std::cout << " GOLD: ";
	changeColour(yellow);
	std::cout << (statGold(money) - statGold(0) + money) << '\n' << '\n';
	changeColour(white);

	int treasure{ getRandom(2) };
	                ////////////////////////////////////////////////////////////////////////////////////
	if (treasure > 1)
	{
		static bool initialized3;
		if (!initialized3)
		{
			if (weapon(0) < 5)
			{
				initialized3 = true;
				weapon(1);
				std::cout << "\n YOU RECEIVED: RAZOR FLAIL\n\n";
			}
		}
		changeColour(white);
	}

	system("PAUSE");
	system("CLS");

}
void wolf()
{
	int exp{ 20 };
	std::cout << " EXP: ";
	std::cout << (statXP(exp) - statXP(0) + 20) << '\n';
	int gil{ (exp * 2) };
	int money{ getRandom(gil) };
	std::cout << " GOLD: ";
	changeColour(yellow);
	std::cout << (statGold(money) - statGold(0)) + money << '\n' << '\n';
	changeColour(white);
	system("PAUSE");
	system("CLS");

}
void rat()
{
	int exp{ 2 };
	std::cout << " EXP: ";
	std::cout << (statXP(exp) - statXP(0) + 2) << '\n';
	std::cout << " GOLD: ";
	changeColour(yellow);
	std::cout << "0" << '\n' << '\n';
	changeColour(white);
	system("PAUSE");
	system("CLS");

}

void hookhorror()

{
	int exp{ 370 };
	std::cout << " EXP: ";
	std::cout << (statXP(exp) - statXP(0) + exp) << '\n';
	int gil{ (200) };
	int money{ getRandom(gil) };
	std::cout << " GOLD: ";
	changeColour(yellow);
	std::cout << (statGold(money) - statGold(0) + money) << '\n' << '\n';
	changeColour(white);

	int treasure{ getRandom(1000) };
	////////////////////////////////////////////////////////////////////////////////////
	if (treasure > 975) //8
	{
		static bool initialized3;
		if (!initialized3)
		{
			if (getArmor(0) < 14)
			{
				initialized3 = true;
				getArmor(-10);
				getArmor(2);
				std::cout << "\n YOU RECEIVED: CARAPACE ARMOR\n\n";
			}
		}
		changeColour(white);
	}

	system("PAUSE");
	system("CLS");

}
void reddragon()
{
	int exp{ 420 };
	std::cout << " EXP: ";
	std::cout << (statXP(exp) - statXP(0) + 420) << '\n';
	int gil{ (exp * 5) };
	int money{ getRandom(gil) };
	std::cout << " GOLD: ";
	changeColour(yellow);
	std::cout << (statGold(money) - statGold(0) + money) << '\n' << '\n';
	changeColour(white);
	statCurrentHP(-9999);
	statCurrentMP(-9999);
	std::cout << "\n YOU EAT THE DRAGON'S HEART... HP/MP FULLY RESTORED\n\n";
	system("PAUSE");
	system("CLS");

}
void direwolf()
{
	int exp{ 300 };
	std::cout << " EXP: ";
	std::cout << (statXP(exp) - statXP(0) + 300) << '\n';
	int gil{ (exp * 1) };
	int money{ getRandom(gil) };
	std::cout << " GOLD: ";
	changeColour(yellow);
	std::cout << (statGold(money) - statGold(0)) + money << '\n' << '\n';
	changeColour(white);
	system("PAUSE");
	system("CLS");

}
void doomspawn()
{
	int exp{ 600 };
	std::cout << " EXP: ";
	std::cout << (statXP(exp) - statXP(0) + 600) << '\n';
	std::cout << " GOLD: ";
	changeColour(yellow);
	std::cout << "0" << '\n' << '\n';
	changeColour(white);
	system("PAUSE");
	system("CLS");

}
void sentientblade()
{
	int exp{ 200 };
	std::cout << " EXP: ";
	std::cout << (statXP(exp) - statXP(0) + 200) << '\n';
	std::cout << " GOLD: 0";
	changeColour(yellow);
	std::cout << '\n' << '\n';
	changeColour(white);

	int treasure{ getRandom(1000) };
	////////////////////////////////////////////////////////////////////////////////////
	if (treasure > 975) //8
	{
		static bool initialized3;
		if (!initialized3)
		{	
			if (weapon(0) < 14)
			{
				initialized3 = true;
				weapon(-10);
				weapon(3);
				std::cout << "\n YOU RECEIVED: HUNGRY BLADE\n\n";
			}
		}
		changeColour(white);
	}

	system("PAUSE");
	system("CLS");

}
void incubus()
{
	int exp{ 160 };
	std::cout << " EXP: ";
	std::cout << (statXP(exp) - statXP(0) + 160) << '\n';
	int gil{ (exp * 2) };
	int money{ getRandom(gil) };
	std::cout << " GOLD: ";
	changeColour(yellow);
	std::cout << (statGold(money) - statGold(0) + money) << '\n' << '\n';
	changeColour(white);
	int treasure{ getRandom(20) };
	if (treasure > 17)
	{
		elixir(-1);
		std::cout << "\n YOU RECEIVED: ELIXIR\n\n";
	}
	system("PAUSE");
	system("CLS");

}

void rewards(int monstertype, int n, int e, int s, int w, int fl)
{
	changeColour(white);                                      // Just making sure
	int mtype{ monstertype };
	if (mtype == 2000)
	{
		godofdoom();
	}
	if (mtype == 300)
	{
		dragon();
	}
	if (mtype == 100)
	{
		lynx();
	}
	if (mtype == 70)
	{
		bandit();
	}
	if (mtype == 60)
	{
		bugbear();
	}	
	if (mtype == 40)
	{
		wolf();
	}	
	if (mtype == 5)
	{
		rat();
	}

	if (mtype == 500)
	{
		hookhorror();
	}
	if (mtype == 650)
	{
		incubus();
	}
	if (mtype == 400)
	{
		direwolf();
	}
	if (mtype == 920)
	{
		reddragon();
	}
	if (mtype == 1300)
	{
		doomspawn();
	}
	if (mtype == 550)
	{
		sentientblade();
	}

	if (statLevel() == 2)
	{
		static bool levelup2;
		if (!levelup2)
		{
			levelup2 = true;
			lvlupAnimation();
		}
	}
	else if (statLevel() == 3)
	{
		static bool levelup3;
		if (!levelup3)
		{
			levelup3 = true;
			lvlupAnimation();
			spellLearnAnimation();
		}
	}
	else if (statLevel() == 4)
	{
		static bool levelup4;
		if (!levelup4)
		{
			levelup4 = true;
			lvlupAnimation();
		}
	}
	else if (statLevel() == 5)
	{
		static bool levelup5;
		if (!levelup5)
		{
			levelup5 = true;
			lvlupAnimation();
			spellLearnAnimation2();
		}
	}
	else if (statLevel() == 6)
	{
		static bool levelup6;
		if (!levelup6)
		{
			levelup6 = true;
			lvlupAnimation();
		}
	}
	else if (statLevel() == 7)
	{
		static bool levelup7;
		if (!levelup7)
		{
			levelup7 = true;
			lvlupAnimation();
		}
	}
	boxMaker(n, e, s, w, fl);
}

void lvlupAnimation()
{

	int a{ 54 };
	int b{ 15 };

	changeColour(darkgrey);
	setCoord(a - 5, b);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b - 5);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a + 5, b);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b + 5);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");

	setCoord(a - 4, b);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b - 4);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a + 4, b);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b + 4);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");

	changeColour(lightgrey);
	setCoord(a - 3, b);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b - 3);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a + 3, b);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b + 3);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");

	setCoord(a - 2, b);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b - 2);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a + 2, b);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b + 2);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");

	changeColour(white);
	setCoord(a - 1, b);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b - 1);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a + 1, b);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b + 1);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");

	setCoord(a, b);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b);
	changeColour(lightgrey);
	std::cout << "LEVEL UP";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b);
	changeColour(darkgrey);
	std::cout << "LEVEL UP\n\n\n\n\n\n                                           ";
	system("PAUSE");
	system("CLS");
}
void spellLearnAnimation()
{

	int a{ 54 };
	int b{ 15 };

	changeColour(darkgrey);
	setCoord(a - 5, b);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b - 5);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a + 5, b);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b + 5);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");

	setCoord(a - 4, b);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b - 4);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a + 4, b);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b + 4);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");

	changeColour(lightgrey);
	setCoord(a - 3, b);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b - 3);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a + 3, b);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b + 3);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");

	setCoord(a - 2, b);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b - 2);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a + 2, b);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b + 2);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");

	changeColour(white);
	setCoord(a - 1, b);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b - 1);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a + 1, b);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b + 1);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");

	setCoord(a, b);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b);
	changeColour(lightgrey);
	std::cout << "CURA LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b);
	changeColour(darkgrey);
	std::cout << "CURA LEARNED\n\n\n\n\n\n                                           ";
	system("PAUSE");
	system("CLS");
}
void spellLearnAnimation2()
{

	int a{ 50 };
	int b{ 15 };

	changeColour(darkgrey);
	setCoord(a - 5, b);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b - 5);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a + 5, b);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b + 5);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");

	setCoord(a - 4, b);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b - 4);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a + 4, b);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b + 4);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");

	changeColour(lightgrey);
	setCoord(a - 3, b);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b - 3);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a + 3, b);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b + 3);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");

	setCoord(a - 2, b);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b - 2);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a + 2, b);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b + 2);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");

	changeColour(white);
	setCoord(a - 1, b);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b - 1);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a + 1, b);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b + 1);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");

	setCoord(a, b);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b);
	changeColour(lightgrey);
	std::cout << "AQUARAKE LEARNED";
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	system("CLS");
	setCoord(a, b);
	changeColour(darkgrey);
	std::cout << "AQUARAKE LEARNED\n\n\n\n\n\n                                           ";
	system("PAUSE");
	system("CLS");
}