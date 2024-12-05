#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool is_huiwen(string& s)
{
	string temp = s;
	reverse(temp.begin(), temp.end());
	return s == temp;
}



int main()
{
	string a;
	cin >> a;
	bool huiwen = is_huiwen(a);
	cout << huiwen;
	return 0;
}