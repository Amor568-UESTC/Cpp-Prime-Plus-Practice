#include<iostream>

using namespace std;

double tiaohe(double a, double b)
{
	double c = 2 * a * b / (a + b);
	return c;
}


int main()
{
	double x, y;
	cin >> x;
	cin >> y;
	while (x != 0 && y != 0)
	{
		cout << tiaohe(x, y) << endl;
		cin >> x;
		cin >> y;
	}
	return 0;
}