#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<fstream>

using namespace std;

vector<string> fri(ifstream& fin)
{
	vector<string> res;
	string temp;
	while (!fin.eof())
	{
		getline(fin, temp);
		res.push_back(temp);
	}
	return res;
}

int main()
{
	ifstream mat, pat;
	ofstream matnpat;
	mat.open("mat.dat");
	pat.open("pat.dat");
	matnpat.open("matnpat.dat");
	vector<string> Mat_f = fri(mat), Pat_f = fri(pat);
	vector<string> t_f;

	sort(Mat_f.begin(), Mat_f.end());
	for (int i = 0; i < Mat_f.size(); i++)
	{
		cout << Mat_f[i] << ' ';
		t_f.push_back(Mat_f[i]);
	}
	cout << endl;

	sort(Pat_f.begin(), Pat_f.end());
	for (int i = 0; i < Pat_f.size(); i++)
	{
		cout << Pat_f[i] << ' ';
		t_f.push_back(Pat_f[i]);
	}
	cout << endl;

	sort(t_f.begin(), t_f.end());
	auto it = unique(t_f.begin(), t_f.end());
	for (int i = 0; i < it - t_f.begin(); i++)
		matnpat << t_f[i] << endl;

	mat.close();
	pat.close();
	matnpat.close();
	return 0;
}