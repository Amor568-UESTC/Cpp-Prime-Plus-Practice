#include"cow.h"

int main()
{
	Cow c1 = { "fuck","eat",11.4 };
	c1.ShowCow();
	Cow c2;
	c2.ShowCow();
	Cow c3 = c1;
	c3.ShowCow();
	Cow c4 = c2;
	c4.ShowCow();
	c1.ShowCow();
	return 0;
}