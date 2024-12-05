#include"person.h"
#include<iostream>
using namespace std;
const int SIZE = 5;

int main()
{
	Person* lolas[SIZE];
	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Enter the category:\n"
			<< "g:gunslinger  p:pokerplayer  "
			<< "b:baddude  q:quit\n";
		cin >> choice;
		while (strchr("gpbq", choice) == NULL)
		{
			cout << "Please enter right word:";
			cin >> choice;
		}
		if (choice == 'q') break;
		switch (choice)
		{
		case 'g':lolas[ct]=new Gunslinger();
			break;
		case 'p':lolas[ct]=new PokerPlayer();
			break;
		case 'b':lolas[ct]=new PokerPlayer();
			break;
		}
		cin.get();
		//lolas[ct]->Set(); 不想写Set了🆒
	}
	cout << "\nHere is your staff:\n";
	for (int i = 0; i < ct; i++)
	{
		cout << endl;
		lolas[i]->Show();
	}
	cout << "Bye!" << endl;
	return 0;
}