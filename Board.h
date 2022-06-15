#pragma once

#include "Piece.h"

class Board
{
	Piece *square_[8][8];
public:
	Board();
	void setupNewGame();
	Piece *getPiece(int row, int col) const;
};

