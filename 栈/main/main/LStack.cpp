#include "stdafx.h"
#include "LStack.h"
#include <iostream>

using namespace std;

template <typename T>
LStack<T>::LStack()
{
	top = nullptr;
	size = 0;
}

template <typename T>
LStack<T>::~LStack()
{
	clear();
}

template <typename T>
void LStack<T>::clear()
{
	while (top != nullptr)
	{
		Link<T> * p = top;
		top = top->next;
		delete p;
	}

	size = 0;
}

template<typename T>
void LStack<T>::push(const T & item)
{
	top = new Link<T>(item, top);
	size++;
}

template<typename T>
T LStack<T>::pop()
{
	assert(top != nullptr);
	T item = top->data;
	Link<T> * temp = top->next;
	delete top;
	top = temp;
	size--;
	return item;
}

template<typename T>
const T & LStack<T>::topvalue() const
{
	assert(top != 0);
	return top->data; // TODO: 在此处插入 return 语句
}

template<typename T>
void LStack<T>::print()
{
	Link<T> * p = top;
	for (int i = 0; i < size; i++)
	{
		cout << p->data << ' ';
		p = p->next;
	}
}
