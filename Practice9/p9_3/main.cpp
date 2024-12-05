#include<iostream>
#include<cstring>
#include<new>
using namespace std;



struct chaff
{
	char dross[20];
	int slag;
};

int main()
{
	chaff* p = new chaff[2];
	int i;
	for (i = 0; i < 2; i++)
	{
		cin.get((p + i)->dross, 20);
		cin >> (p + i)->slag;
		cin.ignore();
	}
	for (i = 0; i < 2; i++)
		cout << (p + i)->dross << "  " << (p + i)->slag << endl;
	return 0;
}