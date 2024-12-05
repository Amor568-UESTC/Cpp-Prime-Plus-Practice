#pragma once
#include<iostream>
#include<stdexcept>
#include<string>
using namespace std;

class bad_mean :public logic_error
{
protected:
	double a;
	double b;
public:
	bad_mean(double x, double y) :a(x), b(y),logic_error("") {}
	virtual void mesg() = 0;
};



class bad_hmean :public bad_mean
{
public:
	bad_hmean(double x = 0, double y = 0) :bad_mean(x, y) {}
	virtual void mesg();
};

inline void bad_hmean::mesg()
{
	cout << "hmean(" << a << "," << b << "): "
		<< "invalid arguments:a=-b\n";
}


class bad_gmean :public bad_mean
{
public:
	bad_gmean(double x = 0, double y = 0) :bad_mean(x, y) {}
	virtual void mesg();
};

inline void bad_gmean::mesg()
{
	cout << "gmean(" << a << "," << b << "):"
		<< "invalid argumenets:should be >=0\n";
}

