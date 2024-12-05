#include<iostream>
using namespace std;

double probability(int num, int pick)
{
	double res=1;
	for (int n = num, p = pick; p > 0; n--, p--)
		res = res * n / p;
	return res;
}

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	double pro = probability(a, b) * probability(c, d);
	cout << pro;
	return 0;
}