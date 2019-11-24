#include <vector>
#include "Drawing.h"
#include <iostream>

int InitApp(std::vector<float>);

int main() {
	DrawingData dd = DrawingData{};
	dd.DrawTriangle(-1.0f, -1.0f, -0.5f, -1.0f, -0.5f, -0.5f, 1.0f);
	dd.DrawTriangle(-1.0f, -1.0f, -1.0f, -0.5f, -0.5f, -0.5f, 1.0f);
	std::vector<float> vertices = dd.GetDrawingData();
	std::cout << sizeof(vertices);
	InitApp(vertices);
	return 0;
}