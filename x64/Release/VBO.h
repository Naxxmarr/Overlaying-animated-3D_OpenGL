#ifndef VBO_CLASS_H
#define VBO_CLASS_H

#include<glm.hpp>
#include<glad/glad.h>
#include <vector>

struct Vertex
{
	glm::vec3 position;
	glm::vec3 normal;
	glm::vec3 color;
	glm::vec2 texUV;

};

class VBO
{
public:
	//Identyfikator referencyjny obiektu bufora wierzchołków
	GLuint ID;
	// Konstruktor generujący Vertex Buffer Object i łączący go z wierzchołkami
	VBO(std::vector<Vertex>& vertices);

	void Bind();
	void Unbind();
	void Delete();
};

#endif