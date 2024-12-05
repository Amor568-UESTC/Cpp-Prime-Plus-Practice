#include"complex0.h"
using namespace std;

complex::complex(double x, double y)
{
	r = x;
	i = y;
}

complex operator+(const complex& c1, const complex& c2)
{
	complex sum;
	sum.r = c1.r + c2.r;
	sum.i = c1.i + c2.i;
	return sum;
}

complex operator-(const complex& c1, const complex& c2)
{
	complex dif;
	dif.r = c1.r - c2.r;
	dif.i = c1.i - c2.i;
	return dif;
}

complex operator*(const complex& c1, const complex& c2)
{
	complex prd;
	prd.r = c1.r * c2.r - c1.i * c2.i;
	prd.i = c1.r * c2.i + c1.i * c2.r;
	return prd;
}

std::ostream& operator<<(std::ostream& os, const complex& c)
{
	cout << "complex is (" << c.r << "," << c.i << ")";
	return os;
}

std::istream& operator>>(std::istream& is, complex& c)
{
	double r, i;
	cout << "real: ";
	cin >> r;
	cout << "imaginary: ";
	cin >> i;
	c = complex(r, i);
	return is;
}