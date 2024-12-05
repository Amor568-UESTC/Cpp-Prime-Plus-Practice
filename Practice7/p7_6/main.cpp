#include<iostream>

using namespace std;

int Fill_array(double array[], int size)
{
	int cnt = 0;
	while (cin >> array[cnt] && cnt < size)	cnt++;
	cout << cnt << endl;
	return cnt;
}

void Show_array(double array[], int size)
{
	for (int i = 0; i < size; i++)	cout << array[i] << ' ';
	cout << endl;
}

void Reverse_array(double array[],int size)
{
	double temp;
	for (int i = 0; i <= size / 2; i++)
	{
		temp = array[i];
		array[i] = array[size - i - 1];
		array[size - i - 1] = temp;
	}
}

int main()
{
	double array[10];
	int rl=Fill_array(array, 10);
	double temp[10];
	for (int i = 0; i < 10; i++) temp[i] = array[i];
	Show_array(array,rl);
	Reverse_array(array, rl);
	Show_array(array, rl);
	//Õ¨²»¶àµÄßÖ
	return 0;
}