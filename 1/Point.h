#pragma once
#include "stdafx.h"

class Point
{
public:
	Point(std::string tile);
	Point(int row, int col);
	~Point();
protected:
	int _row;
	int _col;
};

