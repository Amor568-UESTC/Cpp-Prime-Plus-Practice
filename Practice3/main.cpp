#include<iostream>
using namespace std;

void p3_1()
{
	const int turn = 12;
	int inch;
	cout << "_";
	cin >> inch;
	int foot = inch / turn;
	int inch2 = inch % turn;
	cout << foot << "feet" << inch2 << "inches";
}

void p3_2()
{
	int foot;
	cin >> foot;
	int inch;
	cin >> inch;
	int wei;
	cin >> wei;
	const float tt1=0.0254;
	const int tt2 = 12;
	const float wt = 2.2;
	float meter = (foot * tt2 + inch) * tt1;
	float kg = wei / wt;
	float BMI = kg / (meter * meter);
	cout << meter << endl << kg << endl << BMI;
}

void p3_3()
{
	cout << "Enter a latitude in degrees,minutes,and seconds:" << endl << "First,enter the degrees:";
	int d;
	cin >> d;
	cout << "Next,enter the minutes of arc:";
	int m;
	cin >> m;
	cout << "Finanlly,enter the seconds of arc:";
	int s;
	cin >> s;
	double dd = d + m / 60.0 + s / (60.0 * 60.0);
	cout << d << " degrees," << m << " minutes," << s << " seconds=" << dd << " degrees";
}

void p3_4()
{
	cout << "Enter the number of seconds:";
	long ss;
	cin >> ss;
	int d = ss / (24 * 3600);
	int h = (ss - d * 24 * 3600) / 3600;
	int m = (ss - d * 24 * 3600 - h * 3600) / 60;
	int s = (ss - d * 24 * 3600 - h * 3600) % 60;
	cout << ss << " seconds=" << d << "days," << h << "hours," << m << "minutes," << s << "seconds";
}

void p3_5()
{
	//²»ÏëÐ´ÁË
}

int main()
{
	//p3_1();
	//p3_2();
	//p3_3();
	//p3_4();
	//p3_5();
	//p3_6();
	//p3_7();
	return 0;
}