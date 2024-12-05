#include"wine.h"
using namespace std;

template<class T1, class T2>
T1& Pair<T1, T2>::first()
{
	return a;
}

template<class T1, class T2>
T2& Pair<T1, T2>::second()
{
	return b;
}

void Wine::GetBottles()
{
	cout << "Enter years(" << year_nums << "):";
	ArrayInt t_yr(year_nums), t_bot(year_nums);
	for (int i = 0; i < year_nums; i++)
		cin >> t_yr[i];
	cout << "Enter bottles(" << year_nums << "):";
	for (int i = 0; i < year_nums; i++)
		cin >> t_bot[i];
	pa=PairArray(t_yr, t_bot);
}

void Wine::Show()
{
	cout << "Label:" << label << endl;
	cout << "year:";
	for (int i = 0; i < year_nums; i++)
		cout << pa.first()[i] << ',';
	cout << endl << "bottles:";
	for (int i = 0; i < year_nums; i++)
		cout << pa.second()[i] << ',';
	cout << endl;
}

int Wine::sum()
{
	return pa.second().sum();
}