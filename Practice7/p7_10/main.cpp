#include<iostream>

using namespace std;


double calculate(double x, double y, double (*cal)(double,double))
{
	return cal(x, y);
}

double add(double x, double y)
{
	return x + y;
}

double cheng(double x, double y)
{
	return x * y;
}

int main()
{
	//¾ÍÕâÑù°É
}