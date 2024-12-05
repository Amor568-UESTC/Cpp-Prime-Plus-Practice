#include<iostream>
#include<string>
#include"person.h"

using std::cout;
using std::cin;
using std::string;

Person::Person(const string& ln, const char* fn)
{
	lname = ln;
	for (int i = 0; i < LIMIT; i++)
		fname[i] = fn[i];
}

void Person::Show() const
{
	cout << fname << " " << lname << std::endl;
}

void Person::FormalShow() const
{
	cout << lname << ',' << fname << std::endl;
}