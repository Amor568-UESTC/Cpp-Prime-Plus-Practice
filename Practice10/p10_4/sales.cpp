#include<iostream>
#include"sales.h"

using namespace std;
using namespace SALES;

namespace SALES
{
	Sales::Sales(double d[], int n)
	{
		for (int i = 0; i < n; i++)
			sales[i] = d[i];
		max = sales[0];
		min = sales[0];
		double sum = 0;
		for (int i = 0; i < n; i++)
		{
			if (max < d[i]) max = d[i];
			if (min > d[i]) min = d[i];
			sum += d[i];
		}
		ave = sum / n;
	}

	void Sales::setSales(Sales& s)
	{
		double sale[4];
		cout << "Enter numbers(4):";
		for (int i = 0; i < 4; i++)
			cin >> sale[i];
		s=Sales(sale, 4);
		*this = s;
	}

	void Sales::showSales()
	{
		for (int i = 0; i < 4; i++)
			cout << sales[i] << ' ';
		cout << endl;
		cout << "max:" << max << endl;
		cout << "min:" << min << endl;
		cout << "ave:" << ave << endl;
	}
}