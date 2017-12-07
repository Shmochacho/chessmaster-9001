#pragma once
#include "Piece.h"
#include "stdafx.h"
class Pawn :
	public Piece
{
public:
	Pawn(Point pt, Board& board, bool player);
	~Pawn();
	bool GetFirstMove();
	virtual int isValidMove(std::string dst);
protected:
	bool _firstMove;
};

