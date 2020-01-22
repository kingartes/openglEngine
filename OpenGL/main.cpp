#include <vector>
#include "Drawing.h"
#include <iostream>
#include <glm/glm.hpp>

#include <glm/gtc/type_ptr.hpp>


int InitApp(std::vector<float>, std::vector<unsigned int>);


void buildCube(DrawingData *dd, std::vector<float> data) {
	for (int i = 0; i < data.size(); i+= 5 ) {
		dd->AddVertice(glm::vec4({ data[i], data[i+1], data[i + 2] , 1.0f }), Color({ 0, 0, 0 }), glm::vec2({ data[i + 3], data[i + 4] }));
	}
}


int main() {
	DrawingData dd = DrawingData{};

	const float startZ = 0.0f;
	buildCube(&dd, std::vector<float> {
			- 0.5f, -0.5f, -0.5f, 0.0f, 0.0f,
			0.5f, -0.5f, -0.5f, 1.0f, 0.0f,
			0.5f, 0.5f, -0.5f, 1.0f, 1.0f,
			0.5f, 0.5f, -0.5f, 1.0f, 1.0f,
			-0.5f, 0.5f, -0.5f, 0.0f, 1.0f,
			-0.5f, -0.5f, -0.5f, 0.0f, 0.0f,

			-0.5f, -0.5f, 0.5f, 0.0f, 0.0f,
			0.5f, -0.5f, 0.5f, 1.0f, 0.0f,
			0.5f, 0.5f, 0.5f, 1.0f, 1.0f,
			0.5f, 0.5f, 0.5f, 1.0f, 1.0f,
			-0.5f, 0.5f, 0.5f, 0.0f, 1.0f,
			-0.5f, -0.5f, 0.5f, 0.0f, 0.0f,

			-0.5f, 0.5f, 0.5f, 1.0f, 0.0f,
			-0.5f, 0.5f, -0.5f, 1.0f, 1.0f,
			-0.5f, -0.5f, -0.5f, 0.0f, 1.0f,
			-0.5f, -0.5f, -0.5f, 0.0f, 1.0f,
			-0.5f, -0.5f, 0.5f, 0.0f, 0.0f,
			-0.5f, 0.5f, 0.5f, 1.0f, 0.0f,

			0.5f, 0.5f, 0.5f, 1.0f, 0.0f,
			0.5f, 0.5f, -0.5f, 1.0f, 1.0f,
			0.5f, -0.5f, -0.5f, 0.0f, 1.0f,
			0.5f, -0.5f, -0.5f, 0.0f, 1.0f,
			0.5f, -0.5f, 0.5f, 0.0f, 0.0f,
			0.5f, 0.5f, 0.5f, 1.0f, 0.0f,

			-0.5f, -0.5f, -0.5f, 0.0f, 1.0f,
			0.5f, -0.5f, -0.5f, 1.0f, 1.0f,
			0.5f, -0.5f, 0.5f, 1.0f, 0.0f,
			0.5f, -0.5f, 0.5f, 1.0f, 0.0f,
			-0.5f, -0.5f, 0.5f, 0.0f, 0.0f,
			-0.5f, -0.5f, -0.5f, 0.0f, 1.0f,

			-0.5f, 0.5f, -0.5f, 0.0f, 1.0f,
			0.5f, 0.5f, -0.5f, 1.0f, 1.0f,
			0.5f, 0.5f, 0.5f, 1.0f, 0.0f,
			0.5f, 0.5f, 0.5f, 1.0f, 0.0f,
			-0.5f, 0.5f, 0.5f, 0.0f, 0.0f,
			-0.5f, 0.5f, -0.5f, 0.0f, 1.0f
	});
	/*dd.AddVertice(glm::vec4({ 0.5f, 0.5f, startZ, 1.0f }), Color({ 1.0f, 0.0f, 0.0f }), glm::vec2({1, 1}));
	dd.AddVertice(glm::vec4({ 0.5f, -0.5f, startZ, 1.0f }), Color({ 0.0f, 1.0f, 0.0f }), glm::vec2({ 1, 0 }));
	dd.AddVertice(glm::vec4({ -0.5f, -0.5f, startZ, 1.0f }), Color({ 0.0f, 0.0f, 1.0f }), glm::vec2({ 0, 0 }));
	dd.AddVertice(glm::vec4({ -0.5f, 0.5f, startZ, 1.0f }), Color({1.0f, 1.0f, 1.0f}), glm::vec2({ 0, 1 }));*/
	

	std::vector<unsigned int> indices = {
		0, 1, 3,  // first triangle
		1, 2, 3    // second triangle
	};



	std::vector<float> vertices = dd.GetDrawingTrianglesData();
	
	InitApp(vertices, indices);
	return 0;
}