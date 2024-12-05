#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<cmath>


using namespace std;

int main()
{
	ifstream file1, file2;
	ofstream file3;
	file1.open("file1.txt");
	file2.open("file2.txt");
	file3.open("file3.txt");

	string temp1, temp2;
	while (!file1.eof() && !file2.eof())
	{
		getline(file1, temp1);
		file3 << temp1 << ' ';
		getline(file2, temp2);
		file3 << temp2 << '\n';
	}
	while (!file1.eof())
	{
		getline(file1, temp1);
		file3 << temp1 << '\n';
	}
	while (!file2.eof())
	{
		getline(file2, temp2);
		file3 << temp2 << '\n';
	}

	file1.close();
	file2.close();
	file3.close();
	return 0;
}