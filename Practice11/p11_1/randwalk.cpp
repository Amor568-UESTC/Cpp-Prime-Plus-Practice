#include<iostream>
#include<cstdlib>
#include<ctime>
#include"vector.h"
#include<fstream>

int main()
{
	using namespace std;
	srand(time(0));
	double direct;
	Vector step;
	Vector result(0, 0);
	unsigned long steps = 0;
	double target;
	double dstep;
	ofstream outFile;
	outFile.open("randwalk.txt");
	cout << "Enter target distance (q to quit):";
	while (cin >> target)
	{
		cout << "Enter step length:";
		if(!(cin >> dstep)) break;
		outFile << "Target Distance: " << target << ", " << "Step Size: " << dstep << endl;
		while (result.magval() < target)
		{
			outFile << steps << ": (x,y) = (" << step.xval() << ", " << step.yval() << ")\n";
			direct = rand() % 360;
			step.reset(dstep, direct, Vector::POL);
			result = result + step;
			steps++;
		}
		outFile << "After " << steps << " steps, the subject has the following location:\n";
		outFile << result << endl;
		result.polar_mode();
		outFile << "or \n" << result << endl;
		steps = 0;
		result.reset(0, 0);
		cout << "Enter target distance (q to quit):";
	}
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n') continue;
	outFile.close();
	return 0;
}