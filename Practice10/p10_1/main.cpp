#include<iostream>
#include<string>
#include"bank.h"

using namespace std;
int main()
{
	bank a = { "man!","115",234.4635 };
	a.showbank();
	a.setbank();
	a.showbank();
	a.ipmn(114.514);
	a.showbank();
}