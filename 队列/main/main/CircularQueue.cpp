#include "stdafx.h"
#include "CircularQueue.h"
#include <cassert>

template<typename T>
CircularQueue<T>::CircularQueue(int size)
{
	maxsize = size;
	front = rear = 0;
	queue = new T[maxsize];
}

template<typename T>
CircularQueue<T>::~CircularQueue()
{
	delete[] queue;
}

template<typename T>
void CircularQueue<T>::clear()
{
	delete[] queue;
	queue = new T[maxsize];
	front = rear = 0;
}

template<typename T>
void CircularQueue<T>::enqueue(const T & item)
{
	if ((rear + 1) % maxsize == front)
		return;
	queue[rear] = item;
	rear = (rear + 1) % maxsize;
}

template<typename T>
T CircularQueue<T>::dequeue()
{
	assert((rear - front + maxsize) % maxsize == maxsize);
	T e = queue[front];
	front = (front + 1) % maxsize;
	return e;
}

template<typename T>
const T & CircularQueue<T>::frontvalue() const
{
	return queue[front];// TODO: 在此处插入 return 语句
}

template<typename T>
int CircularQueue<T>::length() const
{
	return (rear - front + maxsize) % maxsize;
}

template<typename T>
void CircularQueue<T>::print()
{
	for (int i = front; i < rear; i++)
		cout << queue[i] << " ";
}
