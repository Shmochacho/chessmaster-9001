#include "Point.h"

Point::Point(std::string tile)
{
	_col = (int)(tile[0] - 96);
	_row = (int)(tile[1] - 48);
}

Point::Point(int row, int col) : _row(row), _col(col)
{
}

Point::Point()
{

}

Point::~Point()
{
}
