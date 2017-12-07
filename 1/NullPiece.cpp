#include "NullPiece.h"



NullPiece::NullPiece(Point pt, Board& board) : Piece(pt, board)
{
	_sign = NullPieceType;
}


NullPiece::~NullPiece()
{
}
