#pragma once
#include<iostream>
#include<string>
#include<valarray>

using std::string;
typedef std::valarray<int> ArrayInt;

template<class T1, class T2>
class Pair
{
private:
	T1 a;
	T2 b;
public:
	T1& first();
	T2& second();
	T1 first() const { return a; }
	T2 second() const { return b; }
	Pair(const T1& aval, const T2& bval) : a(aval), b(bval) {}
	Pair() {}
};

class Wine:private Pair<ArrayInt,ArrayInt>,private string
{
private:
	int year_nums;
public:
	Wine(const char* l, int y, const int yr[], const int bot[]) :
		string(l), year_nums(y), Pair<ArrayInt, ArrayInt>(ArrayInt(yr, y), ArrayInt(bot, y)) {}
	Wine(const char* l, int y) :
		string(l), year_nums(y), Pair<ArrayInt, ArrayInt>() {}
	const string& Label() const { return (const string&)*this; }
	void GetBottles();
	void Show();
	int sum();
};