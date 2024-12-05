#include<iostream>
#include<string>

using namespace std;

void strcnt(string str)
{
	static int total = 0;
	total += str.length();
	cout << str.length() << endl;
	cout << total << endl;
}

int main()
{
	string input;
	char next;
	cout << "Enter:\n";
	getline(cin, input);
	while (input != "")
	{
		strcnt(input);
		cout << "Enter:\n";
		getline(cin, input);
	}
	return 0;
}