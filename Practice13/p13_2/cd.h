#pragma once
class Cd
{
private:
	char* performers;
	char* label;
	int select;
	double playtime;
public:
	Cd(const char* s1, const char* s2, int n, double x);
	Cd(const Cd& d);
	Cd();
	~Cd();
	virtual void Report() const;
	Cd& operator=(const Cd& d);
};

class Classic :public Cd
{
private:
	char* mainwork;
public:
	Classic(const char* s1, const char* s2, const char* s3, int n, double x);
	Classic(const Cd& c, const char* s3);
	Classic();
	~Classic();
	void Report() const;
	Classic& operator=(const Classic& d);
};