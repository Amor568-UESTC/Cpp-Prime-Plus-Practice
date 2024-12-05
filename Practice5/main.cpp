#include<iostream>
#include<cstring>
#include<string>
#include<array>
#include<climits>
using namespace std;

void p5_1()
{
	int a, b;
	cin >> a;
	cin >> b;
	int sum = 0;
	for (int i = a; i < b+1; i++)
		sum += i;
	cout << sum;
}

void p5_2()
{
	array<long double, 101> num;
	num[0] = num[1] = 1;
	for (int i = 2; i < 101; i++)
		num[i] = num[i - 1] * i;
	for (int i = 0; i < 101; i++)
		cout << i << "!=" << num[i] << endl;
}

void p5_3()
{
	cout << "Enter:" << endl;
	int num;
	int sum = 0;
	cin >> num;
	while (num!=0)
	{
		sum += num;
		cout << sum << endl;
		cin >> num;
	}
}

void p5_4()
{
	double d = 100, c = 100;
	int y;
	for (y = 1; c <= d; y++)
	{
		d += 10;
		c *= 1.05;
	}
	cout << d << endl << c << endl << y;
}

void p5_5()
{
	string  mon[12] = { "Jan","Feb","Mar","Apr","May","Jun","July","Aug","Sept","Oct","Nov","Dec" };
	int num[12], sum = 0, max = 0, min = INT_MAX;
	for (int i = 0; i < 12; i++)
	{
		cout << mon[i];
		cin >> num[i];
		sum += num[i];
		if (num[i] >= max)
			max = num[i];
		if (num[i] <= min)
			min = num[i];
	}
	cout << sum << endl << max << endl << min << endl;
}

void p5_6()
{
	string  mon[12] = { "Jan","Feb","Mar","Apr","May","Jun","July","Aug","Sept","Oct","Nov","Dec" };
	int num[3][12], sum[3]={ 0 }, summ = 0;
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << " year"<<endl;
		for (int j = 0; j < 12; j++)
		{
			cout << mon[j];
			cin >> num[i][j];
			sum[i] += num[i][j];
		}
		summ += sum[i];
	}
	cout << sum[0] << endl << sum[1] << endl << sum[2] << endl << summ;
}

void p5_7()
{
	struct car
	{
		string brand;
		int year;
	};

	cout << "How many cars do you wish to catalog?";
	int i,num;
	cin >> i;
	car* c = new car[i];
	string* inf = new string[i];
	for (int j = 0; j < i; j++)
	{
		cout << "Car #" << j+1 << ":" << endl;
		cout << "Please enter the make:";
		cin.get();
		getline(cin, c[j].brand);	
		cout << "Please enter the year made:";
		cin >> c[j].year;
		inf[j] = to_string(c[j].year) + ' ' + c[j].brand;
	}
	cout << "Here is your collection:" << endl;
	for (int k = 0; k < i; k++)
		cout << *(inf + k) << endl;
	delete [] c;
	delete [] inf;
}

void test()
{
	int i;
	cin >> i;
	string* inf = new string [i];
	cin.get();
	getline(cin, inf[0]);
	cout << inf[0];
}

void p5_8()
{
	cout << "Enter the words(to stop,type the word done):" << endl;
	int cnt = 0;
	char a[15];
	cin >> a;
	for (cnt = 0; strcmp(a,"done")!=0 ; cnt++)
		cin >> a;
	cout << "You entered a total of " << cnt << " words.";
}

void p5_9()
{
	cout << "Enter the words(to stop,type the word done):" << endl;
	int cnt = 0;
	string a;
	cin >> a;
	for (cnt = 0; a != "done"; cnt++)
		cin >> a;
	cout << "You entered a total of " << cnt << " words.";
}

void p5_10()
{
	int num;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		for (int j = num-i ; j > 0; j--)
			cout << '.';
		for (int k = 1; k < i+1; k++)
			cout << '*';
		cout << endl;
	}
}

int main()
{
	//test();
	//p5_1();
	//p5_2();
	//p5_3();
	//p5_4();
	//p5_5();
	//p5_6();
	//p5_7();
	//p5_8();
	//p5_9();
	//p5_10();
	return 0;
}