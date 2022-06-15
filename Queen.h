#pragma once
#include "Piece.h"
class Queen :
    public Piece
{

public:
	Queen(PieceColor color);
	virtual bool canMoveTo(int row, int col);
};

