#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> lotto(int o_nums, int slt_nums)
{
	vector<int> temp;
	for (int i = 1; i <= o_nums; i++)
		temp.push_back(i);
	random_shuffle(temp.begin(), temp.end());
	vector<int> res;
	for (int i = 0; i < slt_nums; i++)
		res.push_back(temp[i]);
	return res;
}

int main()
{
	vector<int> cai=lotto(51, 6);
	for (int i = 0; i < 6; i++)
		cout << cai[i] << ' ';
	cout << endl;
	vector<int> a = lotto(51, 6);
	for (int i = 0; i < 6; i++)
		cout << a[i] << ' ';
	return 0;
}