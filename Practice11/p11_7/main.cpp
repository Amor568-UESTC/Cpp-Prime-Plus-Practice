#include"complex0.h"

using namespace std;

int main()
{
	complex a(3, 4);
	complex c;
	cout << "Enter(q):" << endl;
	while (cin >> c)
	{
		cout << c << endl;
		cout << a << endl;
		cout << a + c << endl;
		cout << a * c << endl;
		cout << 2 * c << endl;
		cout << "Enter(q):" << endl;
	}
	cout << "Done!" << endl;
	return 0;
}