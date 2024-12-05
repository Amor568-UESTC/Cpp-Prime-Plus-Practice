#include<iostream>
#include<cctype>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;


void p6_1()
{
	string in;
	getline(cin, in);
	string out;
	for (int j = 0;in[j]!='@'; j++)
	{
		if (islower(in[j]))
			out += toupper(in[j]);
		if (isupper(in[j]))
			out += tolower(in[j]);
	}
	cout << out;
}

void p6_2()
{
	double dona[10],sum=0;
	int i = 0;
	while (i<10 && cin >> dona[i])
	{
		sum += dona[i];
		i++;
	}
	double ave = sum / i;
	int up = 0;
	for (int j = 0; j < i; j++)
	{
		if (dona[j] > ave)
			up++;
	}
	cout << ave << endl << up;
}

void p6_3()
{
	cout << "Please enter one of the following choices:" << endl;
	cout << "a)carnivore" << "\t" << "b)pianist" << endl;
	cout << "c)tree" << "\t" <<"\t" << "d)game" << endl;
	cout << "Please enter a,b,c or d:";
	char choice;
	cin >> choice;
	while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd')
	{
		cout << "Please enter a,b,c or d:";
		cin >> choice;
	}
		switch (choice)
		{
		case 'a':cout << "man!"; break;
		case 'b':cout << "what can i say?"; break;
		case 'c':cout << "manba"; break;
		case 'd':cout << "out!"; break;
		}
}

void p6_4()
{
	struct bop
	{
		char fullname[20];
		char title[10];
		char bopname[10];
		int preference;
	};
	//²»ÏëÐ´ÁË
}

void p6_5()
{
	double tvarp;
	while (cin >> tvarp)
	{
		if (tvarp < 0) break;
		double tax;
		if (tvarp <= 5000) tax = 0;
		else if (tvarp <= 15000) tax = (tvarp - 5000) * 0.1;
		else if (tvarp <= 35000) tax = 10000 * 0.1 + (tvarp - 15000) * 0.15;
		else tax = 10000 * 0.1 + 20000 * 0.15 + (tvarp - 35000) * 0.2;
		cout << tax << endl;
	}
}

void p6_6()
{
	struct dona
	{
		string name;
		double money;
	};
	int num;
	cin >> num;
	dona* p = new dona [num];
	int i;
	for (i = 0; i < num; i++)
	{
		cin >> (p + i)->name;
		cin >> (p + i)->money;
	}
//	for (i = 0; i < num; i++)
//	{
//		cout << (p + i)->name << " " << (p + i)->money << endl;
//	} 
	int cnt1 = 0, cnt2 = 0;
	for (i = 0; i < num; i++)
	{
		if ((p + i)->money > 10000) cnt1++;
		else cnt2++;
	}
	string* GP = new string [cnt1];
	string* P = new string [cnt2];
	int j = 0, k = 0;
	for (i = 0; i < num; i++)
	{
		if ((p + i)->money > 10000)
		{
			*(GP + j) = (p + i)->name;
			j++;
		}
		else
		{
			*(P + k) = (p + i)->name;
			k++;
		}
	}
	cout << "Grand Patrons" << endl;
	for (i = 0; i < cnt1; i++)
		cout << *(GP + i) << endl;
	if (cnt1 == 0) cout << "none" << endl;
	cout << "Patrons" << endl;
	for (i = 0; i < cnt2; i++)
		cout << *(P + i) << endl;
	if (cnt2 == 0) cout << "none" << endl;
	delete[]p;
	delete[]GP;
	delete[]P;
}

void p6_7()
{
	cout << "Enter words (q to quit):" << endl;
	int vo = 0, con = 0, oth = 0;
	string word;
	cin >> word;
	while (word != "q")
	{
		if (isalpha(word[0]))
		{
			switch (word[0])
			{
			case 'a':vo++; break;
			case 'e':vo++; break;
			case 'i':vo++; break;
			case 'o':vo++; break;
			case 'u':vo++; break;
			default:con++;
			}
		}
		else oth++;
		cin >> word;
	}
	cout << vo << " words beginning with vowels" << endl;
	cout << con << " words beginning with consonants" << endl;
	cout << oth << " others" << endl;
}

void p6_8()
{
	ifstream inFile;
	inFile.open("read.txt");
	if (!inFile.is_open())
	{
		cout << "Could not open the file" << endl;
		exit(EXIT_FAILURE);
	}
	int cnt = 0;
	char ch;
	inFile >> ch;
	while (inFile.good())
	{
		cnt++;
		inFile >> ch;
	}
	inFile.close();
	cout << cnt;
}

void p6_9()
{
	struct dona
	{
		string name;
		double money;
	};
	int num, i = 0;
	ifstream File;
	File.open("patrons.txt");
	if (!File.is_open())
	{
		cout << "Could not open the file" << endl;
		exit(EXIT_FAILURE);
	}
	string tem;
	getline(File, tem);
	num = stoi(tem);
	dona* p = new dona[num];
	int cnt1 = 0, cnt2 = 0;
	for (i = 0; i < num; i++)
	{
		getline(File, (p + i)->name);
		//cout << money << endl;
		getline(File, tem);
		(p + i)->money = stod(tem);
		if ((p + i)->money > 10000) cnt1++;
		else cnt2++;
	}
	File.close();
	string* GP = new string[cnt1];
	string* P = new string[cnt2];
	int j = 0, k = 0;
	for (i = 0; i < num; i++)
	{
		if ((p + i)->money > 10000)
		{
			*(GP + j) = (p + i)->name;
			j++;
		}
		else
		{
			*(P + k) = (p + i)->name;
			k++;
		}
	}
	cout << "Grand Patrons" << endl;
	for (i = 0; i < cnt1; i++)
		cout << *(GP + i) << endl;
	if (cnt1 == 0) cout << "none" << endl;
	cout << "Patrons" << endl;
	for (i = 0; i < cnt2; i++)
		cout << *(P + i) << endl;
	if (cnt2 == 0) cout << "none" << endl;
	delete[]p;
	delete[]GP;
	delete[]P;
}

int main()
{
	//p6_1();
	//p6_2();
	//p6_3();
	//p6_4();
	//p6_5();
	//p6_6();
	//p6_7();
	//p6_8();
	//p6_9();
	return 0;
}