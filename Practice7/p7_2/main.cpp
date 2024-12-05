#include<iostream>
using namespace std;

void input(double grade[],int *num)
{
	for (int i = 0; i < 10; i++)
	{
		cin >> grade[i];
		if (grade[i] >= 0)	(*num)++;
		else break;
	}
}

double ave(double grade[],int num)
{
	double sum = 0;
	for (int i = 0; i < 10; i++)
	{
		if (grade[i] >= 0)	sum += grade[i];
		else break;
	}
	return sum / num;
}

void display(double grade[],int num)
{
	for (int i = 0; i < num; i++)	cout << grade[i] << " ";
	cout << endl;
}

int main()
{
	double grade[10] = { 0 };
	int num = 0;
	input(grade,&num);
	display(grade,num);
	cout << ave(grade, num);
	return 0;
}