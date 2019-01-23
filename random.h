#pragma once
#include <random>
class Random
{
public:
	//Contstuctor
	Random();

	//Generates a number between the first supplied value and the second
	int getRandomInt(int, int);

	~Random();

private:
	//Holds mersenne twister value for generating pseudo random values
	std::mt19937 mt;
};

