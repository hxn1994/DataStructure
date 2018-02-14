#include "stdafx.h"
#include "LQueue.h"
#include <cassert>

template <typename T>
LQueue<T>::LQueue()
{
	front = rear = new Link<T>;
	size = 0;
}


template <typename T>
LQueue<T>::~LQueue()
{
	clear();
	delete front;
}

template<typename T>
void LQueue<T>::clear()
{
	while (front->next != nullptr)
	{
		rear = front;
		front = front->next;
		delete rear;
	}
	rear = front;
	size = 0;
}

template<typename T>
void LQueue<T>::enqueue(const T &item)
{
	rear->next = new Link<T>(item, nullptr);
	rear = rear->next;
	size++;
}

template<typename T>
T LQueue<T>::dequeue()
{
	assert(front == rear);
	Link<T> * p = new Link<T>;
	p = front->next;
	T e = front->next->data;
	front->next = p->next;
	delete p;
	if (rear == p)
		rear = front;
	size--;
	return e;
}

template<typename T>
const T & LQueue<T>::frontvalue() const
{
	return front->next->data;// TODO: 在此处插入 return 语句
}

template<typename T>
int LQueue<T>::length() const
{
	return size;
}

template<typename T>
void LQueue<T>::print()
{
	Link<T> * p = new Link<T>;
	p = front->next;
	while (p != nullptr)
	{
		cout << p->data << " ";
		p = p->next;
	}
}
