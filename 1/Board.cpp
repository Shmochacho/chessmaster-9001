#include "Board.h"

Board::Board()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; i++)
		{
			_piece[i][j] = NullPiece();
		}
	}
}

Board::~Board()
{
}

bool Board::isMate()
{
	return false;
}

int Board::Move(std::string dst, std::string src)
{
	return 0;
}
