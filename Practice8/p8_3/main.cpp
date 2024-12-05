#include<iostream>
#include<string>
#include<cctype>

using namespace std;

void up(string& str)
{
	int cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	for (int i = 0; i < cnt; i++)
		str[i]=toupper(str[i]);
}

int main()
{
	string str;
	cout << "Enter a string (q to quit):";
	getline(cin, str);
	while (str != "q")
	{
		up(str);
		cout << str << endl;
		cout << "Enter a string (q to quit):";
		getline(cin, str);
	}
	cout << "Bye." << endl;
	return 0;
}