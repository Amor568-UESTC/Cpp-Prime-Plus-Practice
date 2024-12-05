#include<iostream>
#include<cmath>
#include<string>
#include"exc_mean.h"
using namespace std;

double hmean(double a, double b);
double gmean(double a, double b);

int main()
{
	double x, y, z;
	cout << "Enter 2 nums:";
	while (cin >> x >> y) {
		try {
			z = hmean(x, y);
			cout << "hmean of " << x << " and " << y
				<< " is " << z << endl;
			cout << "gmean of " << x << " and " << y
				<< " is " << gmean(x, y) << endl;
			cout << "Enter next<q to quit>:";
		}
		catch (bad_mean& bm)
		{
			bm.mesg();
			break;
		}
	}
	return 0;
}

double hmean(double a, double b)
{
	if (a == -b) throw bad_hmean(a, b);
	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
	if (a < 0 || b < 0) throw bad_gmean(a, b);
	return sqrt(a * b);
}