#include "Bishop.h"

Bishop::Bishop(PieceColor color)
{
	color_ = color;
	type_ = PieceType::Bishop;
}

bool Bishop::canMoveTo(int row, int col)
{
	return false;
}