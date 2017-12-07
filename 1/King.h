#pragma once
#include "Piece.h"
#include "stdafx.h"
class King :
	public Piece
{
public:
	King(Point pt, Board& board, Player& player);
	~King();
	bool IsInCheck();
};

