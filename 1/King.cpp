#include "King.h"

King::King(Point pt, Board& board, Player& player) : Piece(pt, board, player)
{
}

King::~King()
{
}

bool King::IsInCheck()
{
	return false;
}
