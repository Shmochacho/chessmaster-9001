#pragma once
#include "stdafx.h"
#include <iostream>
#include "Piece.h"

class Board
{
public:
	Board();
	~Board();
	bool isMate();
	int Move(std::string dst, std::string src);
protected:
	Piece _pieces[7][7];

};

