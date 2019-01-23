#pragma once
#include <glm\glm.hpp>

class Cell
{
public:
	Cell();
	~Cell();

	//Enum that defines what type a cell is (Empty, Predator, Prey)
	enum cellType {
		Empty = 0,
		Predator = 1,
		Prey = 2
	}celltype;

	//Changes cell type to either empty, prey, or predator
	void setEmpty();
	void setPrey();
	void setPredator();
	
	//What color this cell will be rendered as
	glm::vec3 color;

	//How much health it has (Predator's will be counting down to death) (Prey will be counting up to creating new prey cell)
	unsigned int health{ 0 };
};