#include<iostream>
#include"golf.h"
using namespace std;

int main()
{
	golf gg;
	//setgolf(gg);
	//showgolf(gg);
	//handicap(gg, 114514);
	//showgolf(gg);
	int rt = setgolf(gg);
	while (rt)
	{
		rt = setgolf(gg);
		showgolf(gg);
	}
	return 0;
}