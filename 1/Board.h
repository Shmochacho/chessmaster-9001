#pragma once
#include "stdafx.h"
#include <iostream>
#include "Piece.h"
#include "NullPiece.h"
#include "King.h"
#include "Pawn.h"

enum PieceTypes
{
	NullPieceType = 35,
	BishopType = 98,
	KingType = 107,
	KnightType = 110,
	PawnType = 112,
	QueenType = 113,
	RookType = 114,
};

class Board
{
public:
	Board();
	~Board();
	bool isMate();
	int Move(std::string dst, std::string src);

protected:
	Piece* _pieces[8][8];
};

