#include "Piece.h"

Piece::Piece(Point pt, Board & board, Player & player) : _pt(pt), _board(board), _player(player)
{
}

Piece::~Piece()
{
}
