#include"mtime.h"

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}
void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

Time operator+(const Time& t1, const Time& t2)
{
	Time sum = t1;
	sum.AddHr(t2.hours);
	sum.AddMin(t2.minutes);
	return sum;
}

Time operator-(const Time& t1, const Time& t2)
{
	Time dif;
	int tol1 = t1.hours * 60 + t1.minutes;
	int tol2 = t2.hours * 60 + t2.minutes;
	dif.hours = (tol1 - tol2) / 60;
	dif.minutes = (tol1 - tol2) % 60;
	return dif;
}

Time operator*(double m, const Time& t)
{
	Time result;
	long total = m * t.hours * 60 + m * t.minutes;
	result.hours = total / 60;
	result.minutes = total % 60;
	return result;
}

Time operator*(const Time& t, double m)
{
	Time result;
	long total = m * t.hours * 60 + m * t.minutes;
	result.hours = total / 60;
	result.minutes = total % 60;
	return result;
}

std::ostream& operator<<(std::ostream& os, const Time& t)
{
	os << t.hours << " hours, " << t.minutes << " minutes";
	return os;
}