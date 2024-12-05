#include<iostream>
#include"plorg.h"

using std::cout;

plorg::plorg(const char* name, int CI)
{
	for (int i = 0; i < 20; i++)
		name_[i] = name[i];
	CI_ = CI;
}

void plorg::setCI(int CI)
{
	CI_ = CI;
}

void plorg::show()
{
	cout << this << ":\n";
	cout << "name:" << name_ <<
		'\t' << "CI:" << CI_;
	cout << '\n';
}