
#include "Piece.h"
class Knight :
    public Piece
{

public:
	Knight(PieceColor color);
	virtual bool canMoveTo(int row, int col);
};
