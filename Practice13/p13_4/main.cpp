#include"port.h"
#include<cstring>
using namespace std;

int main()
{
	Port* p[3];
	int i = 0;
	p[0] = new Port();
	p[0]->Show();
	cout << *p[0];
	p[1] = new VintagePort();
	VintagePort vp;
	p[1]->Show();
	cout << *p[1] << endl;
	cout << vp << endl;
	return 0;
}