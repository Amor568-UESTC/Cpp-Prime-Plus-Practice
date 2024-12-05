#include"port.h"
#include<cstring>

Port::Port(const char* br , const char* st , int b )
{
	brand = new char[strlen(br) + 1];
	strcpy_s(brand, strlen(br) + 1, br);
	for (int i = 0; i < 20; i++) style[i] = st[i];
	bottles = b;
}

Port::Port(const Port& p)
{
	brand = new char[strlen(p.brand) + 1];
	strcpy_s(brand, strlen(p.brand) + 1, p.brand);
	for (int i = 0; i < 20; i++) style[i] = p.style[i];
	bottles = p.bottles;
}

Port& Port::operator=(const Port& p)
{
	if (this == &p) return *this;
	delete[] brand;
	brand = new char[strlen(p.brand) + 1];
	strcpy_s(brand, strlen(p.brand) + 1, p.brand);
	for (int i = 0; i < 20; i++) style[i] = p.style[i];
	bottles = p.bottles;
	return *this;
}

Port& Port::operator += (const int b)
{
	bottles += b;
	return *this;
}

Port& Port::operator -=(const int b)
{
	bottles -= b;
	return *this;
}


void Port::Show() const
{
	cout << "Brand:" << brand << endl << "Kind:" << style;
	cout << endl << "Bottles:" << bottles << endl;
}

ostream& operator<<(ostream& os, const Port& p)
{
	os << p.brand << ", ";
	os << p.style;
	os << ", " << p.bottles;
	return os;
}

VintagePort::VintagePort():Port("none","vintage",0)
{
	nickname = new char;
	nickname[0] = '\0';
	year = 0;
}

VintagePort::VintagePort(const char* br, int b, const char* nn, int y):Port(br,"vintage", b)
{
	nickname = new char[strlen(nn) + 1];
	strcpy_s(nickname, strlen(nn) + 1, nn);
	year = y;
}

VintagePort::VintagePort(const VintagePort& vp):Port(vp)
{
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy_s(nickname, strlen(vp.nickname) + 1, vp.nickname);
	year = vp.year;
}

VintagePort& VintagePort::operator=(const VintagePort& vp)
{
	if (this == &vp) return *this;
	Port::operator=(vp);
	delete[] nickname;
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy_s(nickname, strlen(vp.nickname) + 1, vp.nickname);
	year = vp.year;
	return *this;
}

void VintagePort::Show() const
{
	Port::Show();
	cout << "Nickname:" << nickname << endl;
	cout << "Year:" << year << endl;
}

ostream& operator<<(ostream& os, const VintagePort& vp)
{
	operator<<(os, (Port&)vp);
	os << ", " << vp.nickname << ", " << vp.year;
	return os;
}