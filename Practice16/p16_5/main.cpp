#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<string>
using namespace std;

template<class T>
int reduce(T ar[], int n)
{
	sort(ar, ar + n);
	int res = unique(ar, ar + n) - ar;
	return res;
}

int main()
{
	long a[9] = { 1,1,2,3,4,5,6,6,7 };
	int as = reduce(a, 9);
	string b[6] = { "abandon","abandon","bool","char","dick","dick" };
	int bs = reduce(b, 6);
	for (int i = 0; i < as; i++)
		cout << a[i] << ' ';
	for (int i = 0; i < bs; i++)
		cout << b[i] << ' ';
	return 0;
}