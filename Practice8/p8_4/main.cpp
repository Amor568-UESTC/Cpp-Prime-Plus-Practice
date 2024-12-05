#include<iostream>
#include<cstring>
using namespace std;

struct stringy
{
	char* str;
	int ct;
};

void set(stringy& b, char* ts)
{
	int len = strlen(ts);
	b.ct = len;
	b.str = new char [len+1];
	for (int i = 0; i < len; i++)
		b.str[i] = ts[i];
}

void show(const stringy& b,unsigned int n=1)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < b.ct+1; j++)
			cout << b.str[j];
		cout << endl;
	}
}

void show(const char* s, unsigned int n = 1)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < strlen(s); j++)
			cout << s[j];
		cout << endl;
	}
}

int main()
{
	stringy beany;
	char testing[] = "Reality isn't waht it used to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	return 0;
}