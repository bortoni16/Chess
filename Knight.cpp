
#include "Knight.h"

Knight::Knight(PieceColor color)
{
	color_ = color;
	type_ = PieceType::Knight;
}

bool Knight::canMoveTo(int row, int col)
{
	return false;
}