#include<iostream>
#include<string>
using namespace std;
const int SLEN = 30;
struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cin.getline((pa + i)->fullname, SLEN);
		if ((pa + i)->fullname != "\n")	cnt++;
		else break;
	}
	return cnt;
}

void display1(student st)
{
	cout << st.fullname << endl;
}

void display2(student* ps)
{
	cout << ps->fullname << endl;
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
		cout << (pa + i)->fullname;
}

int main()
{
	cout << "Enter calss size:";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')	continue;

	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Done\n";
	return 0;
}