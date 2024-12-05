#include<iostream>
using namespace std;

int main()
{
	int num = 0;
	char ch, ch1;
	cout << "Enter a phrase:";
	while (cin.peek() != '$')
	{
		cin.get(ch);
		num++;
	}
	cin >> ch1;
	cout << num << endl << ch1;
	return 0;
}