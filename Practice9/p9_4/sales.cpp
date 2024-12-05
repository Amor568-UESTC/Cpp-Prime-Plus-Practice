#include<iostream>
#include"sales.h"

using namespace std;
using namespace SALES;

namespace SALES
{
	void setSales(Sales& s, const double d[], int n)
	{
		for (int i = 0; i < n; i++)
			s.sales[i] = d[i];
		s.max = d[0];
		s.min = d[0];
		double sum = 0;
		for (int i = 0; i < n; i++)
		{
			if (s.max < d[i]) s.max = d[i];
			if (s.min > d[i]) s.min = d[i];
			sum += d[i];
		}
		s.ave = sum / n;
	}

	void setSales(Sales& s)
	{
		double sale[4];
		cout << "Enter numbers(4):";
		for (int i = 0; i < 4; i++)
			cin >> sale[i];
		for (int i = 0; i < 4; i++)
			s.sales[i] = sale[i];
		s.max = sale[0];
		s.min = sale[0];
		double sum = 0;
		for (int i = 0; i < 4; i++)
		{
			if (s.max < sale[i]) s.max = sale[i];
			if (s.min > sale[i]) s.min = sale[i];
			sum += sale[i];
		}
		s.ave = sum / 4;
	}

	void showSales(const Sales& s)
	{
		for (int i = 0; i < 4; i++)
			cout << s.sales[i] << ' ';
		cout << endl;
		cout << "max:" << s.max << endl;
		cout << "min:" << s.min << endl;
		cout << "ave:" << s.ave << endl;
	}
}
