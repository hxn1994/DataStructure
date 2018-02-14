#pragma once
#ifndef CIRCULARQUEUE_H_
#define CIRCULARQUEUE_H_

#include "Queue.h"

template <typename T>
class CircularQueue :
	public Queue<T>
{
private:
	T * queue;
	int front;
	int rear;
	int maxsize;
public:
	CircularQueue(int size = 10);
	~CircularQueue();

	void clear();

	void enqueue(const T&);

	T dequeue();

	const T& frontvalue() const;

	int length() const;

	void print();
};

#endif // !CIRCULARQUEUE_H_



