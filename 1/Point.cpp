#include "Point.h"

Point::Point(std::string coordinates)
{
	_col = (int)(coordinates[0] - 96);
	_row = (int)(coordinates[1] - 48);
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
