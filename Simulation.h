#pragma once
//OpenGL
#include <glad\glad.h>
#include <GLFW\glfw3.h>
//Streams for reading data in and out
#include <iostream>
#include <sstream>
#include <fstream>
#include <sstream>
#include <vector>
#include <ctime>
//Libraries that help with matrix math
#include <glm\glm.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtc\type_ptr.hpp>
//Other header files
#include "cell.h"
#include "random.h"

class Simulation
{
public:
	//Constructor & Destructor
	Simulation(int,int,const char*);
	~Simulation();

	//Starts the simulation
	void run(void);

private:

	//Rendering
	int screenHeight, screenWidth;

	const struct squareRenderInfo
	{
		float vertices[12] = {
			-1.0f,-1.0f,0.0f, //Bottom Left
			1.0f,-1.0f,0.0f,  //Bottom Right
			1.0f, 1.0f,0.0f,  //Top Right
			-1.0f, 1.0f,0.0f  //Top Left
		};
		unsigned int indices[6] = {
			0,1,2,
			0,3,2
		};
	}square;

	unsigned int VAO, EBO;

	GLFWwindow* window;

	std::vector<glm::mat4> modelMatrices;

	void render(void);


	//Shader compilation and use
	unsigned int shaderID;

	void getShaderProgram(std::string vertexPath, std::string fragmentPath);
	void useShader(void);


	//Simulation methods
	void Step(void);

	std::vector<Cell*> gameBoard;

	const unsigned int threshold{ 5 };
	

	//Miscellanious
	clock_t renderTimeStart;
	Random random;
};