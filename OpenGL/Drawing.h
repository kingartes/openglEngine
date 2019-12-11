#include <vector>
#include <glm/vec4.hpp>

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
	void AddLine(glm::vec4& p1, glm::vec4& p2, Color& color);
	std::vector<float> GetDrawingTrianglesData();
	std::vector<float> GetDrawingLinesData();
};
