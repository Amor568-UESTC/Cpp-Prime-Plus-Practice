#include"cd.h"
#include<iostream>
#include<cstring>
using namespace std;

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
	performers = new char[strlen(s1) + 1];
	strcpy_s(performers, strlen(s1) + 1, s1);
	label = new char[strlen(s2) + 1];
	strcpy_s(label, strlen(s2) + 1, s2);
	select = n;
	playtime = x;
}

Cd::Cd(const Cd& d)
{
	performers = new char[strlen(d.performers) + 1];
	strcpy_s(performers, strlen(d.performers) + 1, d.performers);
	label = new char[strlen(d.label) + 1];
	strcpy_s(label, strlen(d.label) + 1, d.label);
	select = d.select;
	playtime = d.playtime;
}

Cd::Cd()
{
	label = performers = new char;
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

Cd::~Cd()
{
	delete[] performers;
	delete[] label;
}

Cd& Cd::operator=(const Cd& d)
{
	if (this == &d) return *this;
	delete[] performers;
	delete[] label;
	performers = new char[strlen(d.performers) + 1];
	strcpy_s(performers, strlen(d.performers) + 1, d.performers);
	label = new char[strlen(d.performers) + 1];
	strcpy_s(label, strlen(d.performers) + 1, d.label);
	select = d.select;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(const char* s1, const char* s2, const char* s3, int n, double x) :Cd(s1, s2, n, x)
{
	mainwork = new char[strlen(s3) + 1];
	strcpy_s(mainwork, strlen(s3) + 1, s3);
}

Classic::Classic(const Cd& c, const char* s3) :Cd(c)
{
	mainwork = new char[strlen(s3) + 1];
	strcpy_s(mainwork, strlen(s3) + 1, s3);
}

Classic::Classic() :Cd()
{
	mainwork = new char;
	mainwork[0] = '\0';
}

Classic::~Classic()
{
	delete[] mainwork;
}

void Classic::Report() const
{
	cout << "mainwork:" << mainwork << endl;
	Cd::Report();
}


Classic& Classic::operator=(const Classic& d)
{
	if (this == &d) return *this;
	Cd::operator=(d);
	delete[] mainwork;
	mainwork = new char[strlen(d.mainwork) + 1];
	strcpy_s(mainwork, strlen(d.mainwork) + 1,d.mainwork);
	return *this;
}
