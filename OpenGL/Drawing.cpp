#include "Drawing.h"
#include <vector>


DrawingData::DrawingData() {
	vertices = {};
}

void DrawingData::DrawTriangle(float x1, float y1, float x2, float y2, float x3, float y3, float color) {
	vertices.insert(vertices.end(), { x1, y1, 0.0f, color, color, color });
	vertices.insert(vertices.end(), { x2, y2, 0.0f, color, color, color });
	vertices.insert(vertices.end(), { x3, y3, 0.0f, color, color, color });
}

std::vector<float> DrawingData::GetDrawingData() {
	return {vertices.begin(), vertices.end()};
}

