#pragma once
#include "Piece.h"
#include "stdafx.h"
class Pawn :
	public Piece
{
public:
	Pawn(Point pt, Board& board, Player& player);
	~Pawn();
	bool GetFirstMove();
protected:
	bool _firstMove;
};

