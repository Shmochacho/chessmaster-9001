#pragma once
#include "stdafx.h"
#include <iostream>
#include "Point.h"
#include "Player.h"
#include "Board.h"
class Piece
{
public:
	Piece();
	Piece(Point pt, Board& board, Player& player);
	~Piece();
	virtual int isValidMove(std::string dst);
protected:
	Point _pt;
	Board& _board;
	Player& _player;
	const char _sign;
};

