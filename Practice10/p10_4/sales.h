#pragma once
namespace SALES
{
	class Sales
	{
	private:
		enum{QUA=4};
		double sales[QUA];
		double ave;
		double max;
		double min;
	public:
		Sales(double d[] = {0}, int n = 0);
		void setSales(Sales&);
		void showSales();
	};
}