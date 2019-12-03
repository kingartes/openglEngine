#include "Drawing.h"
#include <vector>


DrawingData::DrawingData() {
	vertices = {};
	vertices_lines = {};
}

void DrawingData::DrawTriangle(float x1, float y1, float x2, float y2, float x3, float y3, float color) {
	vertices.insert(vertices.end(), { x1, y1, 0.0f, color, color, color });
	vertices.insert(vertices.end(), { x2, y2, 0.0f, color, color, color });
	vertices.insert(vertices.end(), { x3, y3, 0.0f, color, color, color });
}

void DrawingData::DrawLine(float x1, float y1, float x2, float y2, float color) {
	vertices_lines.insert(vertices_lines.end(), { x1, y1, 0.0f, color, color, color });
	vertices_lines.insert(vertices_lines.end(), { x2, y2, 0.0f, color, color, color });
}

std::vector<float> DrawingData::GetDrawingTrianglesData() {
	std::vector<float> results = { vertices };
	return results;
}

std::vector<float> DrawingData::GetDrawingLinesData() {
	std::vector<float> results = { vertices_lines };
	return results;
}

