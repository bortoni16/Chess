#pragma once
#include "Piece.h"
class Rook :
    public Piece
{

public:
	Rook(PieceColor color);
	virtual bool canMoveTo(int row, int col);
};

