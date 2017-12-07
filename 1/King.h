#pragma once
#include "Piece.h"
#include "stdafx.h"
class King : public Piece
{
public:
	King(Point pt, Board& board, bool player);
	~King();
	bool IsInCheck();
	virtual int isValidMove(std::string dst);
};

