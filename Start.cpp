#include <iostream>
#include "Simulation.h"

using namespace std;

int main()
{
	Simulation simulation(300, 200, "Cellular Automata(Predator and Prey)"); //Can change the resolution of the window by modifying the first 2 numbers
	simulation.run();

	return 0;
}