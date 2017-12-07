#pragma once
#include "Piece.h"
class NullPiece :
	public Piece
{
public:
	NullPiece(Point pt, Board& board);
	~NullPiece();
	virtual int isValidMove(std::string dst);
};

