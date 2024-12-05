#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	ofstream fout;
	cout << "Enter file name:";
	string fname;
	getline(cin, fname);
	fout.open(fname);
	cout << "Enter a sentence:";
	string stc;
	getline(cin,stc);
	fout << stc;
	fout.close();
	return 0;
}