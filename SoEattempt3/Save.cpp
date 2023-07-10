#include "getrandom.h"

void saveLoad(int saveload)
{
//	getname();

	if (saveload == 0)
		//SAVE
	{
		int gold{ statGold(0) };
		int XP{ statXP(0) };
		int HP{ statCurrentHP(0) };
		int MP{ statCurrentMP(0) };
		int wep{ weapon(0) };
		if (wep == broadsword)
		{
			wep = 1;
		}
		if (wep == razorflail)
		{
			wep = 2;
		}
		if (wep == murasame)
		{
			wep = 3;
		}
		if (wep == hungryblade)
		{
			wep = 4;
		}
		if (wep == stoneaxe)
		{
			wep = 5;
		}
		
		int arm{ getArmor(0) };
		if (arm == leatherarmor)
		{
			arm = 1;
		}
		if (arm == steelarmor)
		{
			arm = 2;
		}
		if (arm == carapace)
		{
			arm = 3;
		}
		int pot{ potion(0) };
		int tin{ tincture(0) };
		int hipot{ hipotion(0) };
		int hitin{ hitincture(0) };
		int lix{ elixir(0) };

//		std::ofstream ofs;
//		ofs.open("saveslot1.txt", std::ofstream::out | std::ofstream::trunc);
//		ofs.close();

		std::ofstream save1;
		save1.open("saveslot1.txt", std::ofstream::out);
		save1 << gold << "\n" << XP << "\n" << HP << "\n" << MP << "\n" << wep << "\n" << arm << "\n" << pot << "\n" << tin << "\n" << hipot << "\n" << hitin << "\n" << lix;
		save1.close();
		
		system("CLS");
		changeColour(brown);
		std::cout << gold << " = GOLD\n" << XP << " = XP\n" << HP << " = HP\n" << MP << " = MP\n" << wep << " = WEPCODE\n" << arm << " = ARMORCODE\n" << pot << " - POTIONS\n" << tin << " - TINCTURES\n" << hipot << " - HI-POTIONS\n" << hitin << " - HI-TINCTURES\n" << lix <<" - ELIXIRS\n\n";
		changeColour(white);
		std::cout << "\n GAME SUCCESSFULLY SAVED\n\n";
		system("PAUSE");
		system("CLS");
	}
	
	if (saveload == 1)
		//LOAD
	{
		std::ifstream save1;
		save1.open("saveslot1.txt", std::ifstream::in);
		//std::string save1str;
		int a{ 0 };
		int b{ 0 };
		int c{ 0 };
		int d{ 0 };
		int e{ 0 };
		int f{ 0 };
		int g{ 0 };
		int h{ 0 };
		int i{ 0 };
		int j{ 0 };
		int k{ 0 };

		save1 >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k;
		changeColour(brown);
		std::cout << a << " = GOLD\n" << b << " = XP\n" << c << " = HP\n" << d << " = MP\n" << e << " = WEPCODE\n" << f << " = ARMORCODE\n" << g << " - POTIONS\n" << h << " - TINCTURES\n" << i << " - HI-POTIONS\n" << j << " - HI-TINCTURES\n" << k << " - ELIXIRS\n\n";
		changeColour(white);
		//
		system("PAUSE");							//
		
		if (b == 0)
		{
			std::cout << "\n NO SAVE FILE DETECTED. STARTING NEW GAME...\n\n";
			system("PAUSE");
			system("CLS");
			map(600, 0, 0, 0, 0);
		}
		else
		{
			statGold(a);
			statXP(b);
			int work{ statMaxHP() - c };
			statCurrentHP(work);
			statCurrentMP(9999);
			statCurrentMP(-d);
			weapon(-99);
			weapon(e - 1);
			getArmor(-99);
			getArmor(f - 1);

			potion(9999);
			tincture(9999);
			hipotion(9999);
			hitincture(9999);
			elixir(9999);

			potion(-g);
			tincture(-h);
			hipotion(-i);
			hitincture(-j);
			elixir(-k);

			system("CLS");
			std::cout << "\n GAME SUCCESSFULLY LOADED\n\n";
			system("PAUSE");
			system("CLS");
			map(600, 0, 0, 0, 0);
		}
	}
	
}

//slot1
//slot2