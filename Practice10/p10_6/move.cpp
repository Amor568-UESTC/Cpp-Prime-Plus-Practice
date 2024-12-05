#include<iostream>
#include"move.h"

using std::cout;

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	cout << "x:" << x << "\t" << "y:" << y;
	cout << "\n";
}

Move Move::Moveadd(const Move& m) const
{
	double x1 = x + m.x;
	double y1 = y + m.y;
	return Move(x1, y1);
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}