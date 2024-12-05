#pragma once
#include<iostream>

class complex
{
private:
	double r;
	double i;
public:
	complex(double a = 0, double b = 0);
	complex operator~() const { return complex(r, -i); }

	friend complex operator+(const complex& c1, const complex& c2);
	friend complex operator-(const complex& c1, const complex& c2);
	friend complex operator*(const complex& c1, const complex& c2);
	friend std::ostream& operator<<(std::ostream& os, const complex& c);
	friend std::ostream& operator>>(std::ostream& os, const complex& c);
};

complex operator+(const complex& c1, const complex& c2);
complex operator-(const complex& c1, const complex& c2);
complex operator*(const complex& c1, const complex& c2);
std::ostream& operator<<(std::ostream& os, const complex& c);
std::istream& operator>>(std::istream& is, complex& c);