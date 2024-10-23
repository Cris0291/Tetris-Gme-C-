#pragma once
#include <vector>
#include <raylib.h>

class Grid {
public:
	Grid();
	void Initialize();
	void Print();
	int grid[20][10];
private:
	std::vector<Color> GetCellColors();
	int m_numRows;
	int m_numCols;
	int m_cellSize;
	std::vector<Color> colors;
};
