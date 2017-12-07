#include "Piece.h"

Piece::Piece(Point pt, Board & board, bool player) : _pt(pt), _board(board), _player(player)
{
}
Piece::~Piece()
{
}


int Piece::isValidMove(std::string dst)
{
	return 0;
}

Piece::Piece(Point pt, Board& board) : _board(board)
{
	_pt = pt;
}

Piece & Piece::operator=(Piece & piece)
{
	Piece p(piece._pt, piece._board, piece._player);
	return p;
}
