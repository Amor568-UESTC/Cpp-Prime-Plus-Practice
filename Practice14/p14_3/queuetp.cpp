#include"queuetp.h"
#include<iostream>

using namespace std;

Worker::~Worker() {}

void Worker::Data() const
{
	cout << "Name:" << fullname << endl;
	cout << "ID:" << id << endl;
}

void Worker::Get()
{
	getline(cin, fullname);
	cout << "Enter ID:";
	cin >> id;
	while (cin.get() != '\n') continue;
}

void Waiter::Set()
{
	cout << "Enter name:";
	Worker::Get();
	Get();
}

void Waiter::Show() const
{
	cout << "Category:waiter\n";
	Worker::Data();
	Data();
}

void Waiter::Data() const
{
	cout << "Panache rating:" << panache << endl;
}

void Waiter::Get()
{
	cout << "Enter panache rating:";
	cin >> panache;
	while (cin.get() != '\n') continue;
}

string Singer::pv[Singer::Vtypes] = { "other","alto","contralto","soprano","bass","baritone","tenor" };

void Singer::Set()
{
	cout << "Enter name:";
	Worker::Get();
	Get();
}

void Singer::Show() const
{
	cout << "Category:singer\n";
	Worker::Data();
	Data();
}

void Singer::Data() const
{
	cout << "vocal range:" << pv[voice] << endl;
}

void Singer::Get()
{
	cout << "Enter number for vocal range:\n";
	int i;
	for(i = 0; i < Vtypes; i++)
	{
		cout << i << ":" << pv[i] << "	";
		if (i % 4 == 3) cout << endl;
	}
	if (i % 4 != 0) cout << endl;
	cin >> voice;
	while (cin.get() != '\n') continue;
}

void SingingWaiter::Data() const
{
	Singer::Data();
	Waiter::Data();
}

void SingingWaiter::Get()
{
	Waiter::Get();
	Singer::Get();
}

void SingingWaiter::Set()
{
	cout << "Enter name:";
	Worker::Get();
	Get();
}

void SingingWaiter::Show() const
{
	cout << "Category:singing waiter\n";
	Worker::Data();
	Data();
}

template<class T>
QueueTp<T>::QueueTp(int qs):qsize(qs)
{
	front = rear = nullptr;
	nums = 0;
}

template<class T>
QueueTp<T>::~QueueTp()
{
	Node* temp;
	while (front != nullptr)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

template<class T>
bool QueueTp<T>::isempty() const
{
	return nums == 0;
}

template<class T>
bool QueueTp<T>::isfull() const
{
	return nums == qsize;
}

template<class T>
int QueueTp<T>::cnt() const
{
	return nums;
}


template<class T>
bool QueueTp<T>::enqueue(const T& item)
{
	if (isfull()) return 0;
	Node* add = new Node;
	add->item = item;
	add->next = nullptr;
	nums++;
	if (front == nullptr) front = add;
	else rear->next = add;
	return 1;
}

template<class T>
bool QueueTp<T>::dequeue(T& item)
{
	if (front == nullptr) return 0;
	item = front->item;
	nums--;
	Node* temp = front;
	front = front->next;
	delete temp;
	if (nums == 0) rear = nullptr;
	return 1;
}

