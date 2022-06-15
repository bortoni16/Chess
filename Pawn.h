#pragma once
#include "Piece.h"
class Pawn :
    public Piece
{

public:
	Pawn(PieceColor color);
	virtual bool canMoveTo(int row, int col);
};

