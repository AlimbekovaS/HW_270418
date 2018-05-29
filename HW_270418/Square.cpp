#include "Square.h"



Square::Square()
{
	a = 0;
}

Square::Square(size_t a)
{
	this->a = a;

}
int Square::S()
{
	int S=a*a;
	return S;
}

