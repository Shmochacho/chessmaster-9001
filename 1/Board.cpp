#include "Board.h"

Board::Board()
{
	int i = 0;
	std::string startPositions = "rnbkqbnrpppppppp################################PPPPPPPPRNBKQBNR1";

	for (i = 0; i < 64; i++)
	{
		int row = 0;
		int col = 0;
		Piece* piece;
		bool thisPlayer = (isupper(startPositions[i]) ? false : true);

		if (i % 8 == 0 && i > 0)
		{
			col++;
		}
		if (row == 8)
		{
			row = 0;
		}

		Point p(col, row);
		switch ((int)tolower(startPositions[i]))
		{
			case KingType:
			{
				piece = new King(p, *this, thisPlayer);
				_pieces[col][row] = piece;
				break;
			}
			case PawnType:
			{
				piece = new Pawn(p, *this, thisPlayer);
				_pieces[col][row] = piece;
				break;
			}
			case QueenType:
			{
				//TODO Queen
				break;
			}
			case NullPieceType:
			{
				piece = new NullPiece(p, *this);
				_pieces[col][row] = piece;
				break;
			}
			case RookType:
			{
				break;
				//TODO ROOK U DUMBASS
			}
			case BishopType:
			{
				//TODO Bishop
				break;
			}
			case KnightType:
			{
				//TODO Knight
				break;
			}
		}
		row++;
	}
}

Board::~Board()
{
	delete[] _pieces;
}

bool Board::isMate()
{
	return false;
}

int Board::Move(std::string dst, std::string src)
{
	return 0;
}
