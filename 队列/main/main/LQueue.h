#pragma once
#ifndef LQUEUE_H_
#define LQUEUE_H_

#include "Queue.h"

template <typename T>
class Link {
public:
	T data;
	Link * next;
	//constructor
	Link(const T& elemval, Link * nextval = nullptr)
	{
		data = elemval; next = nextval;
	}

	Link(Link * nextval = nullptr) { next = nextval; }
};

template <typename T>
class LQueue :
	public Queue<T>
{
private:
	Link<T> * front;
	Link<T> * rear;
	int size;
public:
	LQueue();
	~LQueue();

	void clear();

	void enqueue(const T &item);

	T dequeue();

	const T& frontvalue() const;

	int length() const;

	void print();
};

#endif // !LQUEUE_H_


