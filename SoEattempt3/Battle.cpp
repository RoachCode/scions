#include "getrandom.h"		// Generates random integer. Call with "getRandom(int upperBoundRdm)"
							// Prints MP stat. Uses input "currentMP" - "spellCost".
//#define ENABLE_DEBUG

int name(int n, int e, int s, int w, int fl)
{
	std::cout << " ENEMY SPOTTED:";
	int d{ 0 };
	d = monsterpicker();
	//a new getrandom function for something that generates every new battle
	display();
	std::cout << "\n\n\n\n\n\n\n";
	displayHPMP(0, 0);
	mainb(d, n, e, s, w, fl);
	return 0;
}

int enemyattack(int monstatype);
int monsterattack(int monstatype)
{
	if (monstatype == 300)					// DRAGON
	{
		int blood{ getRandom(35) };
		return blood;
	}
	else if (monstatype == 100)				// LYNX
	{
		int blood{ getRandom(15) };
		return blood;
	}
	else if (monstatype == 2000)            // ELDER GOD OF DOOM
	{
		int blood{ getRandom(100) };
		return blood;
	}
	else if (monstatype == 40)					// WOLF
	{
		int blood{ getRandom(20) };
		return blood;
	}
	else if (monstatype == 70)					// BANDIT
	{
		int blood{ getRandom(20) };
		return blood;
	}
	else if (monstatype == 60)				// BUGBEAR
	{
		int blood{ getRandom(15) };
		return blood;
	}
	else if (monstatype == 5)            // SWAMP RAT
	{
		int blood{ getRandom(5) };
		return blood;
	}
	else if (monstatype == 500)				// HOOK HORROR
	{
		int blood{ getRandom(35) };
		return blood;
	}
	else if (monstatype == 650)            // INCUBUS
	{
		int blood{ getRandom(25) };
		return blood;
	}
	else if (monstatype == 400)					// DIREWOLF
	{
		int blood{ getRandom(40) };
		return blood;
	}
	else if (monstatype == 920)					// RED DRAGON
	{
		int blood{ getRandom(60) };
		return blood;
	}
	else if (monstatype == 1300)				// DOOM SPAWN
	{
		int blood{ getRandom(100) };
		return blood;
	}
	else if (monstatype == 550)            // SENTIENT BLADE
	{
		int blood{ getRandom(30) };
		return blood;
	}
}
void monsterHP(int monstatypein, int damin, int n, int e, int s, int w, int fl)
{
	

	int monstaatype{ monstatypein };
	returnName(monstaatype);
	int dam{ damin };
	int enemyhp{ monstaatype };


	static int previousHP{ enemyhp };		  //  static is fucking me for new enemy hp values  was:   static int previousHP{ enemyhp };
	if (previousHP > monstatypein)		//99999
	{
		previousHP = monstatypein;			//I FUCKING DID IT
	}
	int currEnemyHP{ previousHP - dam };
	previousHP = currEnemyHP;


	if (previousHP > 0)
	{

		std::cout << " HP:	";
		changeColour(lightred);
		if (previousHP < (enemyhp / 10))
		{
			changeColour(red);
		}
		std::cout << previousHP;
		changeColour(white);
		std::cout << " / ";
		changeColour(lightred);
		std::cout << enemyhp;
		changeColour(white);

	}
	if (previousHP < 0)
	{
		previousHP = 0;
	}
	if (previousHP == 0)
	{
		std::cout << " DEFEATED\n\n WELL DONE! YOU WIN!\n";
		///////////////////////////////////////////
		std::cout << "\n\n";
		displayHPMP(0, 0); //pain is damage to char, 0 is spellcost
		previousHP = 99999;                
		rewards(monstatypein, n, e, s, w, fl);
	}

}

void mainb(int d, int n, int e, int s, int w, int fl)
{
	int monstatype{ 0 };
	monstatype = d;
	char input;
	std::cin >> input;
	if (input == 'a')
	{
		system("CLS");
		returnName(monstatype);
		display();
		int dam{ attack(monstatype) };
		if (monstatype == 550)
		{
			dam = 0;
		}
		monsterHP(monstatype, dam, n, e, s, w, fl);
		if (weapon(0) == 10)
		{
			int hpback{ dam / 4 };
			int mpback{ dam / 10 };
			statCurrentHP(-hpback);
			statCurrentMP(-mpback);
			std::cout << "\n THE HUNGRY BLADE RETURNS [ ";
			changeColour(lightred);
			std::cout << hpback << " HP";
			changeColour(white);
			std::cout << " ]   [ ";
			changeColour(lightcyan);
			std::cout << mpback << " MP";
			changeColour(white);
			std::cout << " ]";
		}
		else
		{
			std::cout << "\n";
		}
		int pain{ enemyattack(monstatype) };
		std::cout << "\n";
		displayHPMP(pain, 0); //pain is damage to char, 0 is spellcost
		mainb(monstatype, n, e, s, w, fl);
	}
	else if (input == 'i')
	{
		inventory(monstatype, n, e, s, w, fl);
		
	}
	else if (input == 'm')
	{
		spellBook(monstatype, n, e, s, w, fl);
	}
	else if (input == 'f')
	{
		system("CLS");
		returnName(monstatype);
		display();
		std::cout << "\n\n\n";
		int pain{ enemyattack(monstatype) };
		std::cout << "\n";
		displayHPMP(pain, 0); //pain is damage to char, 0 is spellcost
		std::cout << "\n\n YOU FLEE THE CHAMBER, GOLD TUMBLING FROM YOUR GRASP AS YOU TAKE ONE LAST STRIKE.\n\n";

		int money{ statGold(0) };
		if (money == 0)
		{
			std::cout << " YOU HAVE NO GOLD TO LOSE.";
			std::cout << "\n\n";
			system("PAUSE");
			system("CLS");
			boxMaker(n, e, s, w, fl);
		}
		int coward{ getRandom(money) };
		int loss{ coward / 3 };
		int pockethole{ getRandom(loss) };
		statGold(-pockethole);
		std::cout << " YOU DROP: [ ";
		changeColour(yellow);
		std::cout << pockethole;
		changeColour(white);
		std::cout << " ] GOLD";
		std::cout << "\n\n";
		system("PAUSE");
		system("CLS");
		boxMaker(n, e, s, w, fl);
	}
	else
	{
		system("CLS");
		returnName(monstatype);
		display();
		std::cout << "\n\n INVALID ENTRY";
		mainb(monstatype, n, e, s, w, fl);
	}
}