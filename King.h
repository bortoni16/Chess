#pragma once
#include "Piece.h"
class King :
    public Piece
{

public:
	King(PieceColor color);
	virtual bool canMoveTo(int row, int col);
};

