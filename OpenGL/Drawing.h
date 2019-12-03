#include <vector>

class DrawingData {
private:
	std::vector<float> vertices;
	std::vector<float> vertices_lines;
public:
	DrawingData();
	void DrawTriangle(float x1, float y1, float x2, float y2, float x3, float y3, float color);
	void DrawLine(float x1, float y1, float x2, float y2, float color);
	std::vector<float> GetDrawingTrianglesData();
	std::vector<float> GetDrawingLinesData();
};
