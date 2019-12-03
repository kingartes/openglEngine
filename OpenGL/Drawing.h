#include <vector>

class DrawingData {
private:
	std::vector<float> vertices;
	std::vector<float> vertices_lines;
public:
	DrawingData();
	void AddTriangle(float x1, float y1, float x2, float y2, float x3, float y3, float colorRed, float colorGreen, float colorBlue);
	void AddLine(float x1, float y1, float x2, float y2, float colorRed, float colorGreen, float colorBlue);
	std::vector<float> GetDrawingTrianglesData();
	std::vector<float> GetDrawingLinesData();
};
