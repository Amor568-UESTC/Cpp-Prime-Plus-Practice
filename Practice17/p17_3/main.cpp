#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	string file1name, file2name;
	ifstream file1;
	ofstream file2;
	string temp;
	cout << "Enter name of file1:";
	getline(cin, file1name);
	file1.open(file1name);
	if (!file1.is_open()) cout << "Error to open " << file1name << endl;
	else
	{
		cout << "Enter name of file2:";
		getline(cin, file2name);
		file2.open(file2name);
		while (getline(file1, temp))
			file2 << temp << "\n";
		file1.close();
		file2.close();
	}
	return 0;
}