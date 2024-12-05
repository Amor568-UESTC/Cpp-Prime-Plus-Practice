#include<iostream>
#include<string>

using namespace std;

struct CandyBar
{
	string brand;
	double weight;
	int reliang;
};

void ini(CandyBar& CB, string bra="Millennium Munch", double wei=2.85, int rl=350)
{
	CB.brand = bra;
	CB.weight = wei;
	CB.reliang = rl;
}

void display(const CandyBar & cb)
{
	cout << cb.brand << endl;
	cout << cb.weight << endl;
	cout << cb.reliang << endl;
}

int main()
{
	CandyBar cc;
	ini(cc);
	display(cc);
	return 0;
}