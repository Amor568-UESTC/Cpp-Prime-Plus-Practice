#include"person.h"
#include<iostream>

void Person::Show() const
{
	cout << "Firstname:" << firstname << endl;
	cout << "Lastname:" << lastname << endl;
}

void Gunslinger::Show() const
{
	Person::Show();
	cout << "Scars:" << scars << endl;
	cout << "gun_time" << gun_time << endl;
}

string PokerPlayer::Card::suits[4] = { "heart","spade","diamond","club" };
string PokerPlayer::Card::nums[14] = { "2","3","4","5","6","7","8","9","10","J","Q","K","A","Joker" };

double BadDude::Gdraw() const
{
	return Gunslinger::Draw();
}

PokerPlayer::Card BadDude::Cdraw() const
{
	return my_card;
}

void BadDude::Show() const
{
	Gunslinger::Show();
}

int RandInt(int min,int max)
{
	random_device seed;//Ӳ���������������
	ranlux48 engine(seed());//���������������������
	uniform_int_distribution<> distrib(min, max);//�����������Χ����Ϊ���ȷֲ�
	int random = distrib(engine);//�����
	return random;
}