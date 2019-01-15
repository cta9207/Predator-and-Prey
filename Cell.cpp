#include "cell.h"

Cell::Cell()
{
}

void Cell::setEmpty()
{
	celltype = Empty;
	color = glm::vec3(0.0f, 0.0f, 0.0f);
}
void Cell::setPredator()
{
	celltype = Predator;
	color = glm::vec3(1.0f, 0.0f, 0.0f);
}
void Cell::setPrey()
{
	celltype = Prey;
	color = glm::vec3(0.0f, 1.0f, 0.0f);
}

Cell::~Cell()
{
}
