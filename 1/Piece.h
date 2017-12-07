#pragma once
#include "stdafx.h"
#include <iostream>
#include "Point.h"
#include "Board.h"

class Piece
{
public:
	Piece(Point pt, Board& board, bool player);
	Piece(Point pt, Board& board);
	~Piece();
	Piece& operator=(Piece& piece);
	virtual int isValidMove(std::string dst);
protected:
	Point _pt;
	Board& _board;
	bool _player;
	char _sign;
};

