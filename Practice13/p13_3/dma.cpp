#include"dma.h"
#include<cstring>
using namespace std;

DMA::DMA(const char* l, int r)
{
	label = new char[strlen(l) + 1];
	strcpy_s(label, strlen(l) + 1, l);
	rating = r;
}

DMA::DMA(const DMA& d)
{
	label = new char[strlen(d.label) + 1];
	strcpy_s(label, strlen(d.label) + 1, d.label);
	rating = d.rating;
}

baseDMA& baseDMA::operator=(const baseDMA& rs)
{
	if (this == &rs) return *this;
	delete[] label;
	label = new char[strlen(rs.label) + 1];
	strcpy_s(label, strlen(rs.label) + 1, rs.label);
	rating = rs.rating;
	return *this;
}

void baseDMA::View() const
{
	cout << label << endl;
	cout << rating << endl;
}

lacksDMA::lacksDMA(const char* c, const char* l, int r) :DMA(l, r)
{
	strncpy(color, c, 39);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const char* c, const baseDMA& rs) :DMA(rs)
{
	strncpy(color, c, COL_LEN - 1);
	color[COL_LEN - 1] = '\0';
}

void lacksDMA::View() const 
{
	cout << label << endl;
	cout << rating << endl;
	for (int i = 0; i < COL_LEN; i++) cout << color[i];
	cout << endl;
}

hasDMA::hasDMA(const char* s, const char* l, int r) :DMA(l, r)
{
	style = new char[strlen(s) + 1];
	strcpy_s(style, strlen(s) + 1, s);
}

hasDMA::hasDMA(const char*s,const baseDMA& rs):DMA(rs)
{
	style = new char[strlen(s) + 1];
	strcpy_s(style, strlen(s) + 1, s);
}

hasDMA::hasDMA(const hasDMA& hs) :DMA(hs)
{
	style = new char[strlen(hs.style) + 1];
	strcpy_s(style, strlen(hs.style) + 1, hs.style);
}

hasDMA::~hasDMA()
{
	delete[] style;
}

hasDMA& hasDMA::operator=(const hasDMA& hs)
{
	if (this == &hs) return *this;
	DMA::operator=(hs);
	delete[] style;
	style = new char[strlen(hs.style) + 1];
	strcpy(style, hs.style);
	return *this;
}

void hasDMA:: View() const
{
	cout << label << endl;
	cout << rating << endl;
	cout << style << endl;
}