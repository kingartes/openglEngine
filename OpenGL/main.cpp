#include <vector>
#include "Drawing.h"
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>


int InitApp(std::vector<float>, std::vector<unsigned int>);



int main() {
	DrawingData dd = DrawingData{};

	const float startZ = 1.0f;

	dd.AddVertice(glm::vec4({ -0.5f, -0.5f, startZ, 1.0f }), Color({ 1.0f, 0.0f, 0.0f }), glm::vec2({0, 0}));
	dd.AddVertice(glm::vec4({ -0.5f,  0.0f, startZ, 1.0f }), Color({ 0.0f, 1.0f, 0.0f }), glm::vec2({ 0, 1 }));
	dd.AddVertice(glm::vec4({ 0.0f, -0.5f, startZ, 1.0f }), Color({ 0.0f, 0.0f, 1.0f }), glm::vec2({ 1, 0 }));
	dd.AddVertice(glm::vec4({ 0.0f, 0.0f, startZ, 1.0f }), Color({1.0f, 1.0f, 1.0f}), glm::vec2({ 1, 1 }));
	

	std::vector<unsigned int> indices = {
		0, 1, 3,   // first triangle
		0, 2, 3    // second triangle
	};



	std::vector<float> vertices = dd.GetDrawingTrianglesData();
	
	InitApp(vertices, indices);
	return 0;
}