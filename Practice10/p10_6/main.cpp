#include<iostream>
#include"move.h"

int main()
{
	Move ps1, ps2 = {1,1};
	ps1.showmove();
	ps2.showmove();
	ps2 = ps1.Moveadd(ps2);
	ps2.showmove();
}