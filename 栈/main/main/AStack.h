#pragma once
#ifndef ASTACK_H_
#define ASTACK_H_

#include "Stack.h"

template <typename T>
class AStack :
	public Stack<T>
{
private:
	int maxsize;
	int top;
	T * astack;

public:
	AStack(int size = 10);
	~AStack();

	void clear();

	void push(const T &item);

	T pop();

	const T& topvalue() const { return astack[top - 1]; }

	int length() const { return top; }

	void print();
};


#endif // !ASTACK_H_


