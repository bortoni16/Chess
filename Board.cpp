#include "Board.h"
#include "Pawn.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "King.h"
#include "Queen.h"

Board::Board()
{
	for (int row = 0; row < 8; row++)
		for (int col = 0; col < 8; col++)
			square_[row][col] = nullptr;
}

void Board::setupNewGame()
{
	static struct {
		int row;
		int col;
		PieceType type;
		PieceColor color;
	} setup[] = {
		{0, 0, PieceType::Rook, PieceColor::White},
		{0, 1, PieceType::Knight, PieceColor::White},
		{0, 2, PieceType::Bishop, PieceColor::White},
		{0, 3, PieceType::Queen, PieceColor::White},
		{0, 4, PieceType::King, PieceColor::White},
		{0, 5, PieceType::Bishop, PieceColor::White},
		{0, 6, PieceType::Knight, PieceColor::White},
		{0, 7, PieceType::Rook, PieceColor::White},
		{1, 0, PieceType::Pawn, PieceColor::White},
		{1, 1, PieceType::Pawn, PieceColor::White},
		{1, 2, PieceType::Pawn, PieceColor::White},
		{1, 3, PieceType::Pawn, PieceColor::White},
		{1, 4, PieceType::Pawn, PieceColor::White},
		{1, 5, PieceType::Pawn, PieceColor::White},
		{1, 6, PieceType::Pawn, PieceColor::White},
		{1, 7, PieceType::Pawn, PieceColor::White},
		{6, 0, PieceType::Pawn, PieceColor::Black},
		{6, 1, PieceType::Pawn, PieceColor::Black},
		{6, 2, PieceType::Pawn, PieceColor::Black},
		{6, 3, PieceType::Pawn, PieceColor::Black},
		{6, 4, PieceType::Pawn, PieceColor::Black},
		{6, 5, PieceType::Pawn, PieceColor::Black},
		{6, 6, PieceType::Pawn, PieceColor::Black},
		{6, 7, PieceType::Pawn, PieceColor::Black},
		{7, 0, PieceType::Rook, PieceColor::Black},
		{7, 1, PieceType::Knight, PieceColor::Black},
		{7, 2, PieceType::Bishop, PieceColor::Black},
		{7, 3, PieceType::Queen, PieceColor::Black},
		{7, 4, PieceType::King, PieceColor::Black},
		{7, 5, PieceType::Bishop, PieceColor::Black},
		{7, 6, PieceType::Knight, PieceColor::Black},
		{7, 7, PieceType::Rook, PieceColor::Black},
	};
	for (int i = 0; i < 32; i++) 
		switch (setup[i].type) {
		case PieceType::Pawn:
			square_[setup[i].row][setup[i].col] = new Pawn(setup[i].color);
			break;
		case PieceType::Rook:
			square_[setup[i].row][setup[i].col] = new Rook(setup[i].color);
			break;
		case PieceType::Knight:
			square_[setup[i].row][setup[i].col] = new Knight(setup[i].color);
			break;
		case PieceType::Bishop:
			square_[setup[i].row][setup[i].col] = new Bishop(setup[i].color);
			break;
		case PieceType::King:
			square_[setup[i].row][setup[i].col] = new King(setup[i].color);
			break;
		case PieceType::Queen:
			square_[setup[i].row][setup[i].col] = new Queen(setup[i].color);
			break;
		}
	
}

Piece *Board::getPiece(int row, int col) const
{
	if (0 <= row && row < 8 && 0 <= col && col < 8)
		return nullptr;
	return square_[row][col];

}
