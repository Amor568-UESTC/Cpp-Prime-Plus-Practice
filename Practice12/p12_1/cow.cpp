#include"cow.h"
#include<cstring>
#include<iostream>
using namespace std;

Cow::Cow()
{
	name[0] = '\0';
	hobby = new char;
	*hobby = '\0';
	weight = 0;
}

Cow::Cow(const char* nm, const char* ho, double wt)
{
	for (int i = 0; i < 20; i++)	name[i] = nm[i];
	hobby = new char[strlen(ho)+1];
	for (int i = 0; i < strlen(ho) + 1; i++)
		hobby[i] = ho[i];
	weight = wt;
}

Cow::Cow(const Cow& c)
{
	for (int i = 0; i < 20; i++)	name[i] = c.name[i];
	hobby=new char[strlen(c.hobby) + 1];
	for (int i = 0; i < strlen(c.hobby) + 1; i++)
		hobby[i] = c.hobby[i];
	weight = c.weight;
}

Cow::~Cow()
{
	//delete [] hobby;	C++会自己处理?
	cout << name << " done." << endl;
}

Cow& Cow::operator=(const Cow& c)
{
	for (int i = 0; i < 20; i++)	name[i] = c.name[i];
	hobby = new char[strlen(c.hobby) + 1];
	for (int i = 0; i < strlen(c.hobby) + 1; i++)
		hobby[i] = c.hobby[i];
	weight = c.weight;
	return *this;
}

void Cow::ShowCow() const
{
	cout << "name:" << name << endl;
	cout << "hobby:" << hobby << endl;
	cout << "weight:" << weight << endl << endl;
}