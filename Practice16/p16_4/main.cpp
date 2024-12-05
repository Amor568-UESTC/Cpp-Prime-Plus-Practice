#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;

int reduce(long ar[], int n)
{
	sort(ar, ar + n);
	int res = unique(ar, ar + 8) - ar;
	return res;
}

int main()
{
	long a[9] = { 1,1,2,3,4,5,6,6,7 };
	cout << reduce(a, 9) << endl;
	for (int i = 0; i < 6; i++)
		cout << a[i] << ' ';
	return 0;
}