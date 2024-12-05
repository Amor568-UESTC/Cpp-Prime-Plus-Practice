#include<iostream>
using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void display(box bo)
{
	cout << bo.maker << endl;
	cout << bo.height << ' ' << bo.length << ' ' << bo.width << ' ' << endl;
	cout << bo.volume << endl;
}

void cal(box* bo)
{
	bo->volume = bo->height * bo->width * bo->length;
}

int main()
{
	box bo1;
	//½º½º
}