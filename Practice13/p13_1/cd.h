#pragma once
class Cd
{
private:
	char performers[50];
	char label[20];
	int select;
	double playtime;
public:
	Cd(const char* s1, const char* s2, int n, double x);
	Cd(const Cd& d);
	Cd();
	virtual void Report() const;
	Cd& operator=(const Cd& d);
};