#include<iostream>
#include<string>
#include"dma.h"
using namespace std;

int main()
{
	DMA* p_dma[4];
	char* t_label;
	int t_rating;
	char* t_style;
	char t_color[40];
	char kind;

	for (int i = 0; i < 4; i++)
	{
		cout << "Enter 1,2 or 3 for base,lacks or hasDMA:";
		cin >> kind;
		if (kind == '1')
		{
			cout << "Enter label:";
			cin >> t_label;
			cout << "Enter rating:";
			cin >> t_rating;
			p_dma[i] = new baseDMA(t_label, t_rating);
		}
		else if (kind == '2')
		{
			cout << "Enter label:";
			//getline(cin, t_label);
			cout << "Enter rating:";
			cin >> t_rating;
			cout << "Enter colors:";
			cin >> t_color;
			p_dma[i] = new lacksDMA(t_color, t_label, t_rating);
		}
		else if (kind == '3')
		{
			cout << "Enter label:";
			//getline(cin, t_label);
			cout << "Enter rating:";
			cin >> t_rating;
			cout << "Enter style:";
			//getline(cin, t_style);
			p_dma[i] = new hasDMA(t_style, t_label, t_rating);
		}
		else cout << "Error!";
		cout << endl;
	}

	for (int i = 0; i < 4; i++)
		p_dma[i]->View();

	for (int i = 0; i < 4; i++)
		delete p_dma[i];
	cout << "Done." << endl;
	return 0;
}