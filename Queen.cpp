#include "Queen.h"

Queen::Queen(PieceColor color)
{
	color_ = color;
	type_ = PieceType::Queen;
}

bool Queen::canMoveTo(int row, int col)
{
	return false;
}