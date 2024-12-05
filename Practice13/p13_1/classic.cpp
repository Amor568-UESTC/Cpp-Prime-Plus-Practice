#include"classic.h"
#include"cd.h"
#include<iostream>
using std::cout;
using std::endl;

Classic::Classic(const char* s1, const char* s2, const char* s3, int n, double x):Cd(s1,s2,n,x)
{
	for (int i = 0; i < 30; i++) mainwork[i] = s3[i];
}

Classic::Classic(const Cd& c, const char* s3):Cd(c)
{
	for (int i = 0; i < 30; i++) mainwork[i] = s3[i];
}

Classic::Classic():Cd()
{
	mainwork[0] = '\0';
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
	for (int i = 0; i < 30; i++) mainwork[i] = d.mainwork[i];
	return *this;
}
