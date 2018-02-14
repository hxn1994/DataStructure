#pragma once
#ifndef ALIST_H_
#define ALIST_H_

#include "List.h"

template<typename T>
class AList
	:public List<T>
{
private:
	int maxsize; // maximum size of list

	int length; // the number of elements in list

	T * ArrList; // list storing elements

	int curr; // current position of list

public:
	AList(int size); // constructor

	~AList(); // deconstructor

	void clear(); // clear the contents of the list

	void insert(const T &item); // insert the item to the current position

	void append(const T &item); // append an element at the end of the list

	T remove(); // remove and return the current value

	void moveToStart(); // set the current position to the start of the list

	void moveToEnd(); // set the current position to the end of the list

	void prev(); // move the position one step left

	void next(); // move the position one step right

	int L() const { return length; } // return the number of elements

	int currPos() const { return curr; } // return the current element's position

	void moveToPos(int pos); // set current position

	const T& GetValue() const; // return the current value

	T * GetTheList() { return ArrList; } // Get the list

};

#endif // !ALIST_H_


