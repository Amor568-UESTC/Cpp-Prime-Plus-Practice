#pragma once
#include<iostream>
#include<string>
#include<valarray>

using std::string;

template<class T1,class T2>
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

class Wine
{
private:
	typedef std::valarray<int> ArrayInt;
	typedef Pair<ArrayInt, ArrayInt> PairArray;
	string label;
	int year_nums;
	PairArray pa;
public:
	Wine(const char* l, int y, const int yr[], const int bot[]) :
		label(l), year_nums(y), pa(ArrayInt(yr, y), ArrayInt(bot, y)) {}
	Wine(const char* l, int y) :
		label(l), year_nums(y), pa() {}
	string& Label() { return label; }
	void GetBottles();
	void Show();
	int sum();
};