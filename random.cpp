#include "random.h"
#include <ctime>

Random::Random():
	//Generates a mersenne twister algorithm using the current time
	mt(time(nullptr))
{}

//Gets number between low and high value
int Random::getRandomInt(int low, int high)
{
	std::uniform_int_distribution<int> dist(low, high);
	return dist(mt);
}

Random::~Random()
{
}
