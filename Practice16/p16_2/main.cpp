#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>

using namespace std;

bool is_palindrome(string& s)
{
	string temp = s;
	for (int i = 0; i < temp.size(); i++)
	{
		temp[i]=tolower(temp[i]);
		if (!isalnum(temp[i]))
		{
			temp.erase(temp.begin() + i);
			i--;
		}	
	}
	string temp2 = temp;
	reverse(temp.begin(), temp.end());
	return temp == temp2;
}

int main()
{
	string s;
	getline(cin,s);
	cout << is_palindrome(s);
	return 0;
}