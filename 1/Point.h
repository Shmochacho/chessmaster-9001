#pragma once
#include "stdafx.h"
#include <string>
class Point
{
public:
	Point(std::string tile);
	Point(int col, int row);
	Point();
	~Point();
protected:
	int _row;
	int _col;
};

