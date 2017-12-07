#include "Pawn.h"

Pawn::Pawn(Point pt, Board& board, Player& player) : Piece(pt, board, player)
{
}

Pawn::~Pawn()
{
}

bool Pawn::GetFirstMove()
{
	return _firstMove;
}
