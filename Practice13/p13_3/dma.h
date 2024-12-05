#pragma once
#include<iostream>

class DMA
{
protected:
	char* label;
	int rating;
public:
	//char* Label() { return label; }
	//int Rating() { return rating; }
	DMA(const char* l = "null", int r = 0);
	DMA(const DMA& d);
	virtual ~DMA() { delete[] label; }
	virtual void View() const = 0;
};

class baseDMA:public DMA
{
public:
	baseDMA(const char* l = "null", int r = 0) :DMA(l, r) {}
	baseDMA(const baseDMA& rs) :DMA(rs) {}
	baseDMA& operator=(const baseDMA& rs);
	virtual void View() const;
};

class lacksDMA :public DMA
{
private:
	enum{COL_LEN=40};
	char color[COL_LEN];
public:
	lacksDMA(const char* c = "blank", const char* l = "null", int r = 0);
	lacksDMA(const char* c, const baseDMA& rs);
	virtual void View() const;
};

class hasDMA :public DMA
{
private:
	char* style;
public:
	hasDMA(const char* s = "none", const char* l = "null", int r = 0);
	hasDMA(const char* s, const baseDMA& rs);
	hasDMA(const hasDMA& hs);
	~hasDMA();
	hasDMA& operator=(const hasDMA& rs);
	virtual void View() const;
};