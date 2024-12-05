#include"Stack.h"

Stack::Stack(int n)
{
	size = n;
	top = 0;
	pitems = new Item[size];
}

Stack::Stack(const Stack& st)
{
	size = st.size;
	top = st.top;
	pitems = new Item[size];
	for (int i = 0; i < size; i++)	pitems[i] = st.pitems[i];
}

Stack::~Stack()
{
	delete[] pitems;
}

bool Stack::isempty() const
{
	return top == 0 ? 1 : 0;
}

bool Stack::isfull() const
{
	return top == size ? 1 : 0;
}

bool Stack::push(const Item& item)
{
	if (isfull()) return 0;
	else
	{
		pitems[top] = item;
		top++;
		return 1;
	}
}

bool Stack::pop(Item& item)
{
	if (isempty()) return 0;
	else
	{
		item=pitems[--top];
		return 0;
	}
}

Stack& Stack::operator=(const Stack& st)
{
	delete[] pitems;
	size = st.size;
	top = st.top;
	pitems = new Item[size];
	for (int i = 0; i < size; i++)	pitems[i] = st.pitems[i];
	return *this;
}