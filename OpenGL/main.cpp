#include <vector>
#include "Drawing.h"
#include <iostream>

int InitApp(std::vector<float>, std::vector<float>);

int main() {
	DrawingData dd = DrawingData{};
	dd.AddTriangle(-1.0f, -1.0f, -0.5f, -1.0f, -0.5f, -0.5f, 0.0f, 1.0f, 0.0f);
	dd.AddTriangle(-1.0f, -1.0f, -1.0f, -0.5f, -0.5f, -0.5f, 1.0f, 1.0f, 1.0f);
	dd.AddTriangle(-0.5f, -1.0f,  0.0f, -1.0f,  0.0f, -0.5f, 0.0f, 0.0f, 0.0f);
	dd.AddTriangle(-0.5f, -1.0f, -0.5f, -0.5f,  0.0f, -0.5f, 0.0f, 0.0f, 0.0f);
	dd.AddLine(-1.0f, -1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f);
	dd.AddLine(1.0f, -1.0f,  -1.0f, 1.0f, 0.0f, 0.0f, 0.0f);

	std::vector<float> vertices = dd.GetDrawingTrianglesData();
	std::vector<float> vertices_lines = dd.GetDrawingLinesData();
	std::cout << sizeof(vertices);
	InitApp(vertices, vertices_lines);
	return 0;
}