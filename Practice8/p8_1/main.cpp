#include<iostream>
#include<string>
using namespace std;

int cnt = 0;
void output(string str, unsigned int n=0)
{
	cnt++;
	if (n == 0)
		cout << str << endl;
	else
		for (int i = 0; i < cnt; i++)
			cout << str << endl;
}

int main()
{
	string s = "fuck!";
	output(s, 3);
	cout << endl;
	output(s);
	cout << endl;
	output(s, 4);
}