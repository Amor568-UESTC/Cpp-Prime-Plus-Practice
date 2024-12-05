#pragma once
#include<iostream>
#include<stdexcept>
#include<string>
using namespace std;

class bad_hmean:public logic_error
{
public:
	bad_hmean(double a = 0, double b = 0) :
		logic_error("hmean:("+to_string(a)+","+to_string(b)+"):"+"\ninvalid arguments : a = -b\n") {}
};


class bad_gmean:public logic_error
{
public:
	bad_gmean(double a = 0, double b = 0) :logic_error("gmean() arguments should be >= 0\n") {}
};
