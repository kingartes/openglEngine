#include <vector>
#include "Drawing.h"
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

int InitApp(std::vector<float>, std::vector<float>);



int main() {
	DrawingData dd = DrawingData{};
	Color black { 0 };
	Color white { 1.0f, 1.0f, 1.0f };
	glm::mat4 model = glm::mat4(1.0f);
	// model = glm::rotate(model, glm::radians(-55.0f), glm::vec3(1.0f, 0.0f, 0.0f));
	glm::mat4 view = glm::mat4(1.0f);
	// note that we're translating the scene in the reverse direction of where we want to move
	// view = glm::translate(view, glm::vec3(0.0f, 0.0f, -3.0f));
	glm::mat4 proj = glm::perspective(glm::radians(90.0f), (float)800 / (float)600, 0.1f, 100.0f);
	const float startZ = -1.0f;
	const float endZ = 0.0f;

	Triangle tr1 = { 
		proj * glm::vec4 {-0.5f, -0.5f, startZ, 1.0f},
		proj * glm::vec4 {-0.5f,  0.0f, startZ, 1.0f},
		proj * glm::vec4 { 0.0f,  0.0f, startZ, 1.0f},
	};
	Triangle tr2 = {
		proj * glm::vec4 { 0.0f,  0.0f, startZ, 1.0f},
		proj * glm::vec4 { 0.0f, -0.5f, startZ, 1.0f},
		proj * glm::vec4 {-0.5f, -0.5f, startZ, 1.0f},
	};
	Triangle tr3 = {
		proj * glm::vec4 {-0.5f, -0.5f, endZ, 1.0f},
		proj * glm::vec4 {-0.5f,  0.0f, endZ, 1.0f},
		proj * glm::vec4 { 0.0f,  0.0f, endZ, 1.0f},
	};
	Triangle tr4 = {
		proj * glm::vec4 { 0.0f,  0.0f, endZ, 1.0f},
		proj * glm::vec4 { 0.0f, -0.5f, endZ, 1.0f},
		proj * glm::vec4 {-0.5f, -0.5f, endZ, 1.0f},
	};

	dd.AddTriangle(tr1, black);
	//dd.AddTriangle(tr2, black);
	//dd.AddTriangle(tr3, black);
	//dd.AddTriangle(tr4, black);

	std::vector<float> vertices = dd.GetDrawingTrianglesData();
	std::vector<float> vertices_lines = dd.GetDrawingLinesData();
	std::cout << "x: " << tr1.points[0].x << "y: " << tr1.points[0].y << "z: " << tr1.points[0].z << "w: " << tr1.points[0].w << std::endl;
	std::cout << "x: " << tr1.points[1].x << "y: " << tr1.points[1].y << "z: " << tr1.points[1].z << "w: " << tr1.points[1].w << std::endl;
	std::cout << "x: " << tr1.points[2].x << "y: " << tr1.points[2].y << "z: " << tr1.points[2].z << "w: " << tr1.points[2].w << std::endl;
	std::cout << "x: " << tr2.points[0].x << "y: " << tr2.points[0].y << "z: " << tr2.points[0].z << "w: " << tr2.points[0].w << std::endl;
	std::cout << "x: " << tr2.points[1].x << "y: " << tr2.points[1].y << "z: " << tr2.points[1].z << "w: " << tr2.points[1].w << std::endl;
	std::cout << "x: " << tr2.points[2].x << "y: " << tr2.points[2].y << "z: " << tr2.points[2].z << "w: " << tr2.points[2].w << std::endl;
	InitApp(vertices, vertices_lines);
	return 0;
}