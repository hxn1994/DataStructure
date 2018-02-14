#pragma once
#ifndef AQUEUE_H_
#define AQUEUE_H_

#include "Queue.h"

template <typename T>
class AQueue :
	public Queue<T>
{
private:
	T * aq;
	int maxsize;
	int front;
	int tail;
public:
	AQueue(int size);
	~AQueue();

	void clear();

	void enqueue(const T& item);

	T dequeue();

	const T& frontvalue() const;

	int length() const;

	void print();
};

#endif // !AQUEUE_H_


