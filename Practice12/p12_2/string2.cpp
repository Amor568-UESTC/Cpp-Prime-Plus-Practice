#include"string2.h"
#include<cstring>
#include<cctype>
using namespace std;

//不安全问题？
String::String(const char* s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	num++;
}

String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num++;
}

String::String(const String& st)
{
	num++;
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
}

String::~String()
{
	num--;
	delete[] str;
}

int String::lenth() const
{
	return len;
}

void String::Stringlow()
{
	for (int i = 0; i < len + 1; i++)
		tolower(str[i]);
}

void String::Stringup()
{
	for (int i = 0; i < len + 1; i++)
		toupper(str[i]);
}

int String::charnum(const char c) const
{
	int n = 0;
	for (int i = 0; i < len + 1; i++)
		if (str[i] == c) n++;
	return n;
}

String& String::operator=(const String& st)
{
	if (this == &st)	return *this;
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
	return *this;
}

String& String::operator=(const char* s)
{
	delete[]str;
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	return *this;
}

char& String::operator[](int i)
{
	return str[i];
}

const char& String::operator[](int i) const
{
	return str[i];
}

String& operator+(const String& s1, const String& s2)
{
	String temp;
	temp.len = s1.len + s2.len;
	temp.str = new char[temp.len + 1];
	for (int i = 0; i < s1.len; i++)	temp.str[i] = s1.str[i];
	for (int i = 0; i < s2.len + 1; i++)	temp.str[s1.len + i] = s2.str[i];
	return temp;
}

bool operator<(const String& st1, const String& st2)
{
	return (strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String& st1, const String& st2)
{
	return strcmp(st1.str, st2.str);
}

bool operator==(const String& st1, const String& st2)
{
	return (strcmp(st1.str, st2.str) == 0);
}

ostream& operator<<(ostream& os, const String& st)
{
	os << st.str;
	return os;
}

istream& operator>>(istream& is, const String& st)
{
	char temp[String::LIM];
	is.get(temp, String::LIM);
	if (is)
		strcpy(st.str, temp);
	while (is && is.get() != '\n')
		continue;
	return is;
}

int String::HowMany()
{
	return num;
}