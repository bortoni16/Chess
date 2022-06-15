#pragma once
#include "PieceColor.h"
#include "PieceType.h"

class Piece
{
protected:
	PieceColor color_;
	PieceType type_;
public:
	PieceColor getColor();
	virtual PieceType getType();
	virtual bool canMoveTo(int row, int col) = 0;
};

