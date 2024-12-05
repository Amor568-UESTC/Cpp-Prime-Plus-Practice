#include<iostream>
#include"sales.h"

using namespace std;
using namespace SALES;

int main()
{
	double a[4] = { 1.1,3.3,3.4,11.4 };
	Sales s[2] = {
		Sales (a,4),
	};
	Sales temp;
	s[1].setSales(temp);
	s[0].showSales();
	s[1].showSales();
	return 0;
}