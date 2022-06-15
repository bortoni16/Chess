#include "Board.h"
#include <iostream>


std::ostream &operator<<(std::ostream &os, const Board &board)
{
	Piece *piece;
	for (int i = 7; i >= 0; i--) {
		for (int j = 0; j < 8; j++) {
			piece = board.getPiece(i, j);
			if (piece == nullptr) {
				os << ". ";
				continue;
			}
			switch (piece->getType()) {
			case PieceType::Pawn:
				os << (piece->getColor() == PieceColor::White ? "p" : "P");
				break;
			case PieceType::Rook:
				os << (piece->getColor() == PieceColor::White ? "t" : "T");
				break;
			case PieceType::Bishop:
				os << (piece->getColor() == PieceColor::White ? "a" : "A");
				break;
			case PieceType::Knight:
				os << (piece->getColor() == PieceColor::White ? "c" : "C");
				break;
			case PieceType::King:
				os << (piece->getColor() == PieceColor::White ? "r" : "R");
				break;
			case PieceType::Queen:
				os << (piece->getColor() == PieceColor::White ? "d" : "D");
				break;
			}
		}
		os << std::endl;
	}
	return os;
}

int main() 
{
	Board board;

	board.setupNewGame();
	std::cout << board;
	return 8;

}