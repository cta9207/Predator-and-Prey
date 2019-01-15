#pragma once
#include <glm\glm.hpp>

class Cell
{
public:
	Cell();
	~Cell();

	enum cellType {
		Empty = 0,
		Predator = 1,
		Prey = 2
	}celltype;

	void setEmpty();
	void setPrey();
	void setPredator();
	
	glm::vec3 color;

	unsigned int health{ 0 };
};