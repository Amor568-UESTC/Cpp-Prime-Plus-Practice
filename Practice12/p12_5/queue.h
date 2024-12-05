#pragma once

class Customer
{
private:
	long arrive;
	int protime;
public:
	Customer() { arrive = protime = 0; }
	void set(long when);
	long when() const { return arrive; }
	int ptime() const { return protime; }
};

typedef Customer Item;

class Queue
{
private:
	enum{Q_SIZE=10};
	struct Node { Item item; struct Node* next; };
	Node* front;
	Node* rear;
	int items;
	const int qsize;
	Queue(const Queue& q) :qsize(0) {}
	Queue& operator=(const Queue& q) { return *this; }
public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const Item& item);
	bool dequeue(Item& item);
};