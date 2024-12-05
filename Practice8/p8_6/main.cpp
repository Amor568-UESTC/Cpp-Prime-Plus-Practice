#include<iostream>
#include<string>

using namespace std;

template<typename T>
T maxn(T a[], int n)
{
	T max = a[0];
	for (int i = 0; i < n; i++)
		if (max < a[i]) max = a[i];
	return max;
}

string* maxn(string a[], int n)
{
	string* max = a;
	int max_len = a[0].length();
	for(int i=0;i<n;i++)
		if (max_len < a[i].length())
		{
			max_len= a[i].length();
			max=&a[i];
		}
	return max;
}
//模板为啥不能具体化？

int main()
{
	int x[6] = { 1,1,4,5,1,4 };
	double y[4] = { 1.32,2.45,3.56,3 };
	string z[5] = {"man","what","can","i","say?"};
	cout << maxn(x, 6) << endl;
	cout << maxn(y, 4) << endl;
	cout << &z[0] << endl;
	cout << maxn(z, 5);
}