#pragma once
#include"cd.h"

class Classic :public Cd
{
private:
	char mainwork[30];
public:
	Classic(const char* s1,const char* s2,const char* s3, int n, double x);
	Classic(const Cd& c,const char* s3);
	Classic();
	void Report() const;
	Classic& operator=(const Classic& d);
};