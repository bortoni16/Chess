#include "Pawn.h"

Pawn::Pawn(PieceColor color)
{
	color_ = color;
	type_ = PieceType::Pawn;
}


bool Pawn::canMoveTo(int row, int col)
{
	return false;
}
