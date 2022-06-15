
#include "Rook.h"

Rook::Rook(PieceColor color)
{
	color_ = color;
	type_ = PieceType::Rook;
}

bool Rook::canMoveTo(int row, int col)
{
	return false;
}