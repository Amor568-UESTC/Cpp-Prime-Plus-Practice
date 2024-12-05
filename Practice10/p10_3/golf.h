#pragma once

class golf
{
private:
	enum{Len=40};
	char fullname[Len];
	int handicap_;
public:
	golf(const char* name="no name", int hc=0);
	void setgolf();
	void handicap(int hc);
	void showgolf();
};