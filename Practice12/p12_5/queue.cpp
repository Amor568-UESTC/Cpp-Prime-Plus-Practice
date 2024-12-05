#include"queue.h"
#include<cstdlib>

Queue::Queue(int qs):qsize(qs)
{
	front = rear = NULL;
	items = 0;
}

Queue::~Queue()
{
	Node* temp;
	while (front != NULL)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

bool Queue::isempty() const
{
	return items == 0;
}

bool Queue::isfull() const
{
	return items == qsize;
}

int Queue::queuecount() const
{
	return items;
}

bool Queue::enqueue(const Item& item)
{
	if (isfull()) return 0;
	Node* add = new Node;
	add->item = item;
	add->next = NULL;
	items++;
	if (front == NULL)	front = add;
	else rear->next = add;
	rear = add;
	return 1;
}

bool Queue::dequeue(Item& item)
{
	if (front == NULL) return 0;
	item = front->item;
	items--;
	Node* temp = front;
	front = front->next;
	delete temp;
	if(items == 0) rear = NULL;
	return 1;
}

void Customer::set(long when)
{
	protime = std::rand() % 3 + 1;
	arrive = when;
}