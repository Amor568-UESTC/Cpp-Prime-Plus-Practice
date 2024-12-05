#include"queuetp.h"
#include<iostream>
#include<cstring>
using namespace std;
const int SIZE = 5;

int main()
{
	QueueTp<Worker*> lolas(SIZE);
	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Enter the category:\n"
			<< "w:waiter  s:singer  "
			<< "t:singing waiter  q:quit\n";
		cin >> choice;
		while (strchr("wstq", choice) == NULL)
		{
			cout << "Please enter right word:";
			cin >> choice;
		}
		if (choice == 'q') break;
		switch (choice)
		{
		case 'w':lolas.enqueue(new Waiter);
			break;
		case 's':lolas.enqueue(new Singer);
			break;
		case 't':lolas.enqueue(new SingingWaiter);
			break;
		}
		cin.get();
		lolas.GetIndex(ct)->item->Set();
	}
	cout << "\nHere is your staff:\n";
	for (int i = 0; i < ct; i++)
	{
		cout << endl;
		lolas.GetIndex(i)->item->Show();
	}
	cout << "Bye!" << endl;
	return 0;
}