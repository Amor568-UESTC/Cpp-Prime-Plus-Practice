#pragma once

class bank
{
private:
	std::string name;
	std::string zh;
	double mn;
public:
	bank(std::string name_, std::string zh_, double mn_);
	void setbank();
	void showbank() const;
	void ipmn(double m);
	void opmn(double m);
};