#pragma once
namespace SALES
{
	const int QUA = 4;
	struct Sales
	{
		double sales[QUA];
		double ave;
		double max;
		double min;
	};
	void setSales(Sales& s, const double[], int n);
	void setSales(Sales& s);
	void showSales(const Sales& s);
}