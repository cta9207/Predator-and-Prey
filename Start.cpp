#include <iostream>
#include "Simulation.h"

using namespace std;

int main()
{
	//Initializes simulation class with the grid size and the name of the window 
	Simulation simulation(300, 200, "Cellular Automata(Predator and Prey)"); //Can change the resolution of the window by modifying the first 2 numbers
	//Starts the simulation
	simulation.run();

	return 0;
}