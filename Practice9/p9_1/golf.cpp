#include<iostream>
#include "golf.h"
using namespace std;

void setgolf(golf& g, const char* name, int hc)
{
	for (int i = 0; i < 40; i++)
		g.fullname[i] = name[i];
	g.handicap = hc;
}

int setgolf(golf& g)
{
	int rt=1;
	cout << "Enter name:";
	cin.getline(g.fullname, 40);
	if (g.fullname[0] == '\0') rt = 0;
	cout << "Enter hc:";
	cin >> g.handicap;
	cin.ignore();
	return rt;
}

void handicap(golf& g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf& g)
{
	cout << "name:" << g.fullname << endl;
	cout << "hc:" << g.handicap << endl;
}