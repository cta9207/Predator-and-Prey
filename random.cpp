#include "random.h"
#include <ctime>

Random::Random():
	mt(time(nullptr))
{}

int Random::getRandomInt(int low, int high)
{
	std::uniform_int_distribution<int> dist(low, high);
	return dist(mt);
}

Random::~Random()
{
}
