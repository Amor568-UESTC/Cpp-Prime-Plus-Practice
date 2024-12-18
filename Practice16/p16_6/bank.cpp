#include<queue>
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
const int MIN_PER_HOUR = 60;

class Customer
{
private:
	long arrive;
	int processtime;
public:
	Customer() { arrive = processtime = 0; }
	void set(long when);
	long when() const { return arrive; }
	int ptime() const { return processtime; }
};

void Customer::set(long when)
{
	processtime = rand() % 3 + 1;
	arrive = when;
}




bool newcustomer(double x)
{
	return (rand() * x / RAND_MAX < 1);
}

int main()
{
	srand(time(0));
	cout << "Case Study: Bank of Heather Automatic Teller\n";
	cout << "Enter max size of queue: ";
	int qs;
	cin >> qs;
	queue<Customer> line;
	cout << "Enter the num of simulation hours: ";
	int  hours;
	cin >> hours;
	long cyclelimit = MIN_PER_HOUR * hours;

	cout << "Enter the ave num of simulation hours: "; 
	double perhour;
	cin >> perhour;
	double min_per_cust = MIN_PER_HOUR;

	Customer temp;
	long turnaways = 0;
	long customers = 0;
	long served = 0;
	long sum_line = 0;
	int wait_time = 0;
	long line_wait = 0;

	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (line.size()==qs)
			turnaways++;
		else
		{
			customers++;
			temp.set(cycle);
			line.push(temp);
		}
		if (wait_time < 0 && !line.empty())
		{
			temp = line.back();
			wait_time = temp.ptime();
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time > 0) wait_time--;
		sum_line += line.size();
	}

	if (customers > 0)
	{
		cout << "customers accepted: " << customers << endl;
		cout << " customers served: " << served << endl;
		cout << " turnaways: " << turnaways << endl;
		cout << "ave queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double)sum_line / cyclelimit << endl;
		cout << "ave wait time: "
			<< (double)line_wait / served << "minutes\n";
	}
	else
		cout << "No customers!\n";
	cout << "Done!\n";
	return 0;
}