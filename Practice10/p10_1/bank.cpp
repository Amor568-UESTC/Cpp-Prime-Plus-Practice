#include<iostream>
#include<string>
#include"bank.h"

using std::cout;
using std::cin;

bank::bank(std::string name_, std::string zh_, double mn_)
{
	name = name_;
	zh = zh_;
	mn = mn_;
}

void bank::setbank()
{
	cout << "Enter name:";
	std::getline(cin, name);
	cout << "Enter zh:";
	cin >> zh;
	cout << "Enter money:";
	cin >> mn;
}

void bank::showbank() const
{
	cout << "Name:" << name << "\n"
		<< "ZhangHu:" << zh << "\n"
		<< "Money:" << mn << "\n";
}

void bank::ipmn(double m)
{
	mn += m;
}

void bank::opmn(double m)
{
	mn -= m;
}