#include <iostream>
#include <random>
#include <ctime>

int getRandom(int upperBoundRdm)
{
	int upperBound{ 0 };
	upperBound = upperBoundRdm;
	int max{ upperBound }; // Sets the upper bound to generate the random number.
	static bool timeinitialized;
	if (!timeinitialized)
	{
		timeinitialized = true;
		srand(time(0));
	}
	int rando{ 0 };
	rando = (rand() % max) + (rand() % max);
//	std::cout << rando;     ///////////
	return rando;
}