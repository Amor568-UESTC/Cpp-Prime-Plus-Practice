#pragma once

class plorg
{
private:
	char name_[20];
	int CI_;
public:
	plorg(const char* name = "Plorga", int CI = 50);
	void setCI(int CI);
	void show();
};