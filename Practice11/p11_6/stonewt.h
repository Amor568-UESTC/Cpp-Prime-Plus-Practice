#pragma once

class Stonewt
{
private:
	enum{Lbs_per_stn=14};
	int stone;
	double pds_left;
	double pounds;
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt();
	//����д��
};