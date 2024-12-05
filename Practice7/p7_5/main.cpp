#include<iostream>
using namespace std;

long face(int i)
{
	if (i <= 1) return 1;
	else return i * face(i - 1);
}

int main()
{
	while (1)
	{
		int a;
		cin >> a;
		cout << face(a) <<endl;
	}
	return 0;
}