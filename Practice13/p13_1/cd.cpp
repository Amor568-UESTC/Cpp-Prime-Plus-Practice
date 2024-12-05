#include"cd.h"
#include<iostream>
using std::cout;
using std::endl;

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
	for (int i = 0; i < 50; i++) performers[i] = s1[i];
	for (int i = 0; i < 20; i++) label[i] = s2[i];
	select = n;
	playtime = x;
}

Cd::Cd(const Cd& d)
{
	for (int i = 0; i < 50; i++) performers[i] = d.performers[i];
	for (int i = 0; i < 20; i++) label[i] = d.label[i];
	select = d.select;
	playtime = d.playtime;
}

Cd::Cd()
{
	label[0] = performers[0] = '\0';
	select = 0;
	playtime = 0;
}

void Cd::Report() const
{
	cout << "performers:" << performers << endl;
	cout << "label:" << label << endl;
	cout << "select:" << select << endl;
	cout << "playtime:" << playtime << endl << endl;
}

Cd& Cd::operator=(const Cd& d)
{
	for (int i = 0; i < 50; i++) performers[i] = d.performers[i];
	for (int i = 0; i < 20; i++) label[i] = d.label[i];
	select = d.select;
	playtime = d.playtime;
	return *this;
}