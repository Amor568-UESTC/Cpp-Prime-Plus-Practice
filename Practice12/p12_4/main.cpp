#include<iostream>
#include"Stack.h"
using namespace std;

int main()
{
	Stack s1;
	Stack s2 = 6;
	Stack s3 = s1;
	Item a = 0;
	s1.push(1);
	s2.push(14);
	s2.pop(a);
	cout << a;
	return 0;
}