#include "stdafx.h"
#include "AStack.h"
#include <cassert>
#include <iostream>

using namespace std;

template <typename T>
AStack<T>::AStack(int size)
{
	astack = new T[size];
	top = 0;
	maxsize = size;
}

template <typename T>
AStack<T>::~AStack()
{
	delete[] astack;
}

template<typename T>
void AStack<T>::clear()
{
	delete[] astack;
	astack = new T[maxsize];
	top = 0;
}

template<typename T>
void AStack<T>::push(const T & item)
{
	///assert(top != maxsize);
	if (top == maxsize)
		return;
	astack[top++] = item;
}

template<typename T>
T AStack<T>::pop()
{
	assert(top != 0);
	return astack[--top];
}

template<typename T>
void AStack<T>::print()
{
	for (int i = 0; i < top; i++)
		cout << astack[i] << ' ';
}
