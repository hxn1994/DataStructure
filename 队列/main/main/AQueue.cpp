#include "stdafx.h"
#include "AQueue.h"
#include <iostream>
#include <cassert>

using namespace std;

template <typename T>
AQueue<T>::AQueue(int size)
{
	maxsize = size;
	aq = new T[size];
	front = 0;
	tail = 0;
}

template <typename T>
AQueue<T>::~AQueue()
{
	delete[] aq;
}

template<typename T>
void AQueue<T>::clear()
{
	delete[] aq;
	aq = new T[maxsize];
	front = 0;
	tail = 0;
}

template<typename T>
void AQueue<T>::enqueue(const T & item)
{
	if (tail - front == maxsize)
		return;
	aq[tail%maxsize] = item;
	tail++;
}

template<typename T>
T AQueue<T>::dequeue()
{
	assert(front != tail);
	T e = aq[front];
	front = (front + 1) % maxsize;
	return e;
}

template<typename T>
const T & AQueue<T>::frontvalue() const
{
	assert(length() != 0);
	return aq[front];
	// TODO: 在此处插入 return 语句
}

template<typename T>
int AQueue<T>::length() const
{
	return (tail - front);
}

template<typename T>
void AQueue<T>::print()
{
	for (int i = 0; i < length(); i++)
		cout << aq[i] << " ";

}


