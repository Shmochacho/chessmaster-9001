#include "Pawn.h"

Pawn::Pawn(Point pt, Board& board, bool player) : Piece(pt, board, player)
{
	_sign = player ? toupper(PawnType) : tolower(PawnType);
}

Pawn::~Pawn()
{
}

bool Pawn::GetFirstMove()
{
	return _firstMove;
}
