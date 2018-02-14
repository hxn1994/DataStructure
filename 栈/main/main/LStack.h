#pragma once
#ifndef LSTACK_H_
#define LSTACK_H_

#include "Stack.h"

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
class LStack :
	public Stack<T>
{
private:
	Link<T> * top;
	int size;

public:
	LStack();
	~LStack();

	void clear();

	void push(const T &item);

	T pop();

	const T& topvalue() const;

	int length() const { return size; }

	void print();
};

#endif // !LSTACK_H_

