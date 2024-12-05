#include<iostream>

using namespace std;

double* fill_array(double* array, int size)
{
	double temp;
	int i;
	for (i = 0; i < size; i++)
	{
		cout << "Enter:";
		cin >> temp;
		if (!cin)
		{
			cin.clear(); while (cin.get() != '\n')
				continue;
			cout << "Error" << endl;
			break;
		}
		else if (temp < 0)	break;
		*(array + i) = temp;
	}
	return array + i;
}

void show_array(const double* array, double* posi)
{
	for (int i = 0; array + i < posi; i++)
		cout << *(array + i) << endl;
}

void revalue(double r, double* array, double* posi)
{
	for (int i = 0; array + i < posi; i++)
		*(array + i) = r;
}



int main()
{
	double ar[10];
	double* p = fill_array(ar, 10);
	show_array(ar, p);
	revalue(114.514, ar, p);
	show_array(ar, p);
	return 0;
}