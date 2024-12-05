#include<iostream>
#include"mtime.h"

int main()
{
	using std::cout;
	using std::endl;
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;
	cout << aida << endl;
	cout << tosca << endl;
	cout << aida + tosca << endl;
	cout << aida - tosca << endl;
	cout << aida * 5 << endl;
	cout << 6 * tosca << endl;
	return 0;
}