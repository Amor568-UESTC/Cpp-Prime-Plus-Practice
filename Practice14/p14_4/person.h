#pragma once
#include<string>
#include<random>
using namespace std;

int RandInt(int min, int max);

class Person
{
private:
	string firstname;
	string lastname;
public:
	Person(const string& fn="none", const string& ln="none") :
		firstname(fn), lastname(ln) {}
	Person(const Person& p) :
		firstname(p.firstname), lastname(p.lastname) {}
	virtual void Show() const;
};

class Gunslinger :virtual public Person
{
private:
	int scars;
	double gun_time;
public:
	Gunslinger(const string& fn="none", const string& ln="none", const int s = 0, const double gt = 0) :
		Person(fn, ln), scars(s), gun_time(gt) {}
	Gunslinger(const Person& p, const int s, const double gt) :
		Person(p), scars(s), gun_time(gt) {}
	Gunslinger(const Gunslinger& gs) :Person(gs), scars(gs.scars), gun_time(gs.gun_time) {}
	double Draw() const { return gun_time; }
	void Show() const;
};

class PokerPlayer :virtual public Person
{
protected:
	class Card
	{
	private:
		static string suits[4];
		static string nums[14];
		string suit;
		string num;
	public:
		Card() :suit(suits[RandInt(0,3)]), num(nums[RandInt(0,13)]) {}
	}my_card;
public:
	PokerPlayer(const string& fn="none", const string& ln="none") :
		Person(fn, ln) {}
	PokerPlayer(const Person& p) :Person(p) {}
};

class BadDude :public Gunslinger, public PokerPlayer
{
public:
	BadDude(const string& fn="none", const string& ln="none", const int s=0, const double gt=0) :
		Person(fn, ln), Gunslinger(fn, ln, s, gt), PokerPlayer(fn, ln) {}
	double Gdraw() const;
	Card Cdraw() const;
	void Show() const;
};
