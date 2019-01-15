#pragma once
#include <random>
class Random
{
public:
	Random();

	int getRandomInt(int, int);

	~Random();

private:
	std::mt19937 mt;
};

