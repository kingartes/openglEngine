#include <vector>
#include <glm/vec4.hpp>
#include <glm/vec2.hpp>

struct Point {
	float x;
	float y;
	float z;
	float w;
};


struct Color {
	float R;
	float G;
	float B;
};

struct Triangle {
	glm::vec4 points[3];
};

class DrawingData {
private:
	std::vector<float> vertices;
	std::vector<float> vertices_lines;
public:
	DrawingData();
	void AddTriangle(Triangle& triangle, Color& color);
	void AddVertice(const glm::vec4& vec, const Color& color, const glm::vec2& tex);
	void AddLine(glm::vec4& p1, glm::vec4& p2, Color& color);
	std::vector<float> GetDrawingTrianglesData();
	std::vector<float> GetDrawingLinesData();
};
