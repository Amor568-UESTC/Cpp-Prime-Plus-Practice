#include<iostream>
#include "golf.h"
using namespace std;

golf::golf(const char* name, int hc)
{
	for (int i = 0; i < 40; i++)
		fullname[i] = name[i];
	handicap_ = hc;
}

void golf::setgolf()
{
	char tempfullname[Len];
	int	temphandicap_;
	cout << "Enter name:";
	cin.getline(tempfullname, 40);
	cout << "Enter hc:";
	cin >> temphandicap_;
	cin.ignore();
	golf temp = { tempfullname,temphandicap_ };
	*this = temp;
}

void golf::handicap(int hc)
{
	handicap_ = hc;
}

void golf::showgolf()
{
	cout << "name:" << fullname << endl;
	cout << "hc:" << handicap_ << endl;
}