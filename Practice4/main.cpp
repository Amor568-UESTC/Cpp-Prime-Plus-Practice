#include<iostream>
#include<string>
#include<cstring>
#include<array>
using namespace std;

void p4_1()
{
	char fn[10], ln[15], grade;
	int age;
	cout << "What is your first name?";
	cin.getline(fn, 10);
	cout << "What is your last name?";
	cin.getline(ln, 15);
	cout << "What letter grade do you deserve?";
	cin >> grade;
	cout << "What is your age?";
	cin >> age;
	cout << "Name:" << ln << "," << fn<<endl;
	cout << "Grade:" << char(grade + 1) << endl;
	cout << "Age:" << age;
}

void p4_2()
{
	string name,dessert;
	cout << "Enter your name:\n";
	cin >> name;
	cout << "Enter your favorite dessert:\n";
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << " for you," << name << ".\n";
}

void p4_3()
{
	cout << "Enter your first name:";
	char fn[10],ln[15];
	cin >> fn;
	cout << "Enter your last name:";
	cin >> ln;
	char name[25];
	strcpy_s(name, fn);
	strcat_s(name, " ,");
	strcat_s(name, ln);
	cout << "Here's the information in a single string:" << name;
}

void p4_4()
{
	cout << "Enter your first name:";
	string fn, ln, name;
	cin >> fn;
	cout << "Enter your last name:";
	cin >> ln;
	name = fn + " ," + ln;
	cout << "Here's the information in a single string:" << name;
}

void p4_5()
{
	struct CandyBar
	{
		string brand;
		double weight;
		int energy;
	}snack;

	snack = { "Mocha Munch",2.3,350 };
}

void p4_6()
{
	struct CandyBar
	{
		string brand;
		double weight;
		int energy;
	}snack[3];

	snack[0] = { "Mocha Munch",2.3,350 };
	snack[1] = { "wang",3.4,250 };
	snack[2] = { "jet",1.14,514 };
	int i;
	for (i = 0; i < 3; i++)
	{
		cout << snack[i].brand<<endl;
		cout << snack[i].weight<<endl;
		cout << snack[i].energy<<endl;
	}
}

void p4_7()
{
	struct Pizza
	{
		char company[20];
		double d;
		double w;
	}pz;

	cin.getline(pz.company,20);
	cin >> pz.d;
	cin >> pz.w;
	cout << pz.company << endl;
	cout << pz.d << endl;
	cout << pz.w << endl;
}

void p4_8()
{
	char* company = new char[20];
	double* d = new double;
	double* w = new double;
	cin >> *d;
	cin.get();
	cin.getline(company, 20);
	cin >> *w;
	cout << company<< endl;
	cout << *d<< endl;
	cout << *w<< endl;
}

void p4_9()
{
	string* brand = new string[3];
	double* w = new double[3];
	int* e = new int[3];
	brand[0] = "Mocha Munch";
	w[0] = 2.3;
	e[0] = 350;
	cout << w[0];
}

void p4_10()
{
	array<double, 3> grade;
	int i;
	for (i = 0; i < 3; i++)
	{
		cin >> grade[i];
	}
	for (i = 0; i < 3; i++)
	{
		cout << grade[i] << endl;
	}
}

int main()
{
	//p4_1();
	//p4_2();
	//p4_3();
	//p4_4();
	//p4_5();
	//p4_6();
	//p4_7();
	//p4_8();
	//p4_9();
	//p4_10();
	return 0;
}