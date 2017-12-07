#include "King.h"

King::King(Point pt, Board& board, bool player) : Piece(pt, board, player)
{
	_sign = player ? toupper(KingType) : tolower(KingType);
}

King::~King()
{
}

bool King::IsInCheck()
{
	return false;
}
