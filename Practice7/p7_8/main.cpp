#include<iostream>

using namespace std;

void fill(double* exp, int n = 4)
{
	for (int i = 0; i < n; i++)
		cin >> *(exp + i);
}

void show(double* exp, int n = 4)
{
	double total = 0;
	for (int i = 0; i < n; i++)
	{
		cout << *(exp + i) << endl;
		total += *(exp + i);
	}
	cout << total << endl;
}

int main()
{
	const char* ss[4] = { "Spring","Summer","Fall","Winter" };
	double mn[4];
	fill(mn);
	show(mn);
	return 0;
}