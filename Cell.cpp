#include "cell.h"
//Contains definition and methods that each cell uses
Cell::Cell()
{
}

//Makes celltype empty and sets color to black
void Cell::setEmpty()
{
	celltype = Empty;
	color = glm::vec3(0.0f, 0.0f, 0.0f);
}

//Makes celltype predator and sets color to red
void Cell::setPredator()
{
	celltype = Predator;
	color = glm::vec3(1.0f, 0.0f, 0.0f);
}

//Makes celltype prey and sets color to green
void Cell::setPrey()
{
	celltype = Prey;
	color = glm::vec3(0.0f, 1.0f, 0.0f);
}

Cell::~Cell()
{
}
