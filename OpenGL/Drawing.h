#include <vector>

class DrawingData {
private:
	std::vector<float> vertices;
public:
	DrawingData();
	void DrawTriangle(float x1, float y1, float x2, float y2, float x3, float y3, float color);
	std::vector<float> GetDrawingData();
};
