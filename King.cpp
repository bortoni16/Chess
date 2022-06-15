#include "King.h"

King::King(PieceColor color)
{
	color_ = color;
	type_ = PieceType::King;
}

bool King::canMoveTo(int row, int col)
{
	return false;
}