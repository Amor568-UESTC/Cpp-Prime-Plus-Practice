#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

vector<string> fri()
{
	vector<string> res;
	cout << "Enter your friend's name(.to quit): ";
	string temp;
	cin >> temp;
	res.push_back(temp);
	while (temp != ".")
	{
		cin >> temp;
		res.push_back(temp);
	}
	return res;
}


int main()
{
	vector<string> Mat_f = fri()
		, Pat_f = fri();
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
	for (int i = 0; i < it-t_f.begin(); i++)
		cout << t_f[i] << ' ';
	return 0;
}