#include "getrandom.h"


int potion(int changepot)
{
	int maxpot{ 5 };
	static int previousPOT{ maxpot };
	int currentPOT{ previousPOT - changepot };
	previousPOT = currentPOT;
	if (previousPOT > 175)
	{
		previousPOT = 5;
		return previousPOT;
	}
	if (previousPOT > 0)
	{
		return previousPOT;
	}
	if (previousPOT < 0)
	{
		previousPOT = 0;
	}
	return previousPOT;
}

int tincture(int changetin)
{
	int maxtin{ 2 };
	static int previousTIN{ maxtin };
	int currentTIN{ previousTIN - changetin };
	previousTIN = currentTIN;
	if (previousTIN > 175)
	{
		previousTIN = 2;
		return previousTIN;
	}
	if (previousTIN > 0)
	{
		return previousTIN;
	}
	if (previousTIN < 0)
	{
		previousTIN = 0;
	}
	return previousTIN;
}

int hipotion(int changehipot)
{
	int maxhipot{ 0 };
	static int previousHIPOT{ maxhipot };
	int currentHIPOT{ previousHIPOT - changehipot };
	previousHIPOT = currentHIPOT;
	if (previousHIPOT > 175)
	{
		previousHIPOT = 0;
		return previousHIPOT;
	}
	if (previousHIPOT > 0)
	{
		return previousHIPOT;
	}
	if (previousHIPOT < 0)
	{
		previousHIPOT = 0;
	}
	return previousHIPOT;
}

int hitincture(int changehitin)
{
	int maxhitin{ 0 };
	static int previousHITIN{ maxhitin };
	int currentHITIN{ previousHITIN - changehitin };
	previousHITIN = currentHITIN;
	if (previousHITIN > 175)
	{
		previousHITIN = 0;
		return previousHITIN;
	}
	if (previousHITIN > 0)
	{
		return previousHITIN;
	}
	if (previousHITIN < 0)
	{
		previousHITIN = 0;
	}
	return previousHITIN;
}

int elixir(int changelix)
{
	int maxlix{ 0 };
	static int previousLIX{ maxlix };
	int currentLIX{ previousLIX - changelix };
	previousLIX = currentLIX;
	if (previousLIX > 175)
	{
		previousLIX = 0;
		return previousLIX;
	}
	if (previousLIX > 0)
	{
		return previousLIX;
	}
	if (previousLIX < 0)
	{
		previousLIX = 0;
	}
	return previousLIX;
}
