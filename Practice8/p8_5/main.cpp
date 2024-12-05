#include<iostream>
using namespace std;


template<typename T>

T max5(T a[])
{
	T max = a[0];
	for (int i = 0; i < 5; i++)
		if (a[i] > max) max = a[i];
	return max;
}

int main()
{
	int x[5] = { 3,5,6,2,7 };
	double y[5] = { 42.234,2345.546,2435.543,345.234,114.514 };
	cout << max5(x) << " " << max5(y) << endl;
}