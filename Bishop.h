#pragma once
#include "Piece.h"
class Bishop :
    public Piece
{

public:
	Bishop(PieceColor color);
	virtual bool canMoveTo(int row, int col);
};

