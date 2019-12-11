#include "Drawing.h"
#include <vector>


DrawingData::DrawingData() {
	vertices = {};
	vertices_lines = {};
}

void DrawingData::AddTriangle(Triangle& triangle, Color& color) {
	vertices.insert(vertices.end(), { triangle.points[0].x, triangle.points[0].y, triangle.points[0].z, triangle.points[0].w, color.R, color.G, color.B });
	vertices.insert(vertices.end(), { triangle.points[1].x, triangle.points[1].y, triangle.points[1].z, triangle.points[1].w, color.R, color.G, color.B });
	vertices.insert(vertices.end(), { triangle.points[2].x, triangle.points[2].y, triangle.points[2].z, triangle.points[2].w, color.R, color.G, color.B });
}

void DrawingData::AddLine(glm::vec4& p1, glm::vec4& p2, Color& color) {
	vertices_lines.insert(vertices_lines.end(), { p1.x, p1.y, p1.z, color.R, color.G, color.B });
	vertices_lines.insert(vertices_lines.end(), { p2.x, p2.y, p2.z, color.R, color.G, color.B });
}

std::vector<float> DrawingData::GetDrawingTrianglesData() {
	std::vector<float> results = { vertices };
	return results;
}

std::vector<float> DrawingData::GetDrawingLinesData() {
	std::vector<float> results = { vertices_lines };
	return results;
}

