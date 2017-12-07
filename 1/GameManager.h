#pragma once
#include "Board.h"
#include "Piece.h"
class GameManager
{
protected:
	Board _board;
	bool _previousPlayer;
public:
	GameManager(Board board);
	void HandleError(int errorCode);
	void StartGame();
	~GameManager();
};

