#include<iostream>
#include"sales.h"

using namespace std;
using namespace SALES;

int main()
{
	Sales s[2];
	double a[4] = { 1.1,3.3,3.4,11.4 };
	setSales(s[0], a, 4);
	setSales(s[1]);
	showSales(s[0]);
	showSales(s[1]);
	return 0;
}