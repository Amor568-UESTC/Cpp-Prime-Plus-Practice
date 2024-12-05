#include<iostream>
#include"golf.h"
using namespace std;

int main()
{
	golf gg;
	gg.showgolf();
	gg.setgolf();
	gg.showgolf();
	gg.handicap(114514);
	gg.showgolf();
	return 0;
}