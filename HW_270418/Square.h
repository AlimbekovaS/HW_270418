#pragma once
#include"library.h"
class Square
{
private:
	size_t a;
public:
	Square();
	Square(size_t a);
	int S();
	
	friend ostream &operator<<(ostream &os, const Square&square);
	//friend bool operator!=(const Square &sq);
	friend void ChangeA(Square &value);

};
inline void ChangeA(Square &value)
{
	value.a = -1;
}


/*inline bool operator!=(const Square & sq)
{
	
	return false;
}*/
class Rectangle
{
	size_t a;
	size_t b;
public:
	Rectangle()=default;
	Rectangle(int a, int b);
	

private:

};

Rectangle::Rectangle(int a, int b)
{
	this->a = a;
	this->b = b;
}

ostream & operator<<(ostream & os, const Square & square)
{
	os << square.a;
	return os;
}