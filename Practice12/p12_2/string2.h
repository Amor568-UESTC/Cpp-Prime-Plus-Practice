#pragma once
#include<iostream>
using std::ostream;
using std::istream;

class String
{
private:
	char* str;
	int len;
	static int num;
	static const int LIM = 80;
public:
	String(const char* s);
	String();
	String(const String&);
	~String();
	int lenth() const;
	void Stringlow();
	void Stringup();
	int charnum(const char c) const;

	String& operator=(const String&);
	String& operator=(const char*);
	char& operator[](int i);
	const char& operator[](int i) const;

	friend String& operator+(const String& st1, const String& st2);
	friend bool operator<(const String& st1, const String& st2);
	friend bool operator>(const String& st1, const String& st2);
	friend bool operator==(const String& st1, const String& st2);
	friend ostream& operator<<(ostream& os, const String& st);
	friend istream& operator>>(istream& is, const String& st);

	static int HowMany();
};