s#pragma once
#ifndef LLIST_H_
#define LLIST_H_

#include "List.h"
template <typename T>
class Link {
public:
	T data;
	Link * next;
	//constructor
	Link (const T& elemval, Link * nextval = nullptr)
	{
		element = elemval; next = nextval;
	}

	Link(Link * nextval = nullptr) { next = nextval; }
};

template <typename T>
class LList :
	public List<T>
{
private:
	Link<T> * head; // head pointer
	Link<T> * tail; // tail pointer
	Link<T> * curr; // current pointer
	int cnt; // list size

	void init(); // create and initialise the list

	void removeall(); // clear the list
public:
	LList() { init(); } // constructor

	~LList() { removeall(); } // deconstructor

	void clear() { removeall(); init(); } // empty the list

	void insert(const T & item); // insert the element

	void append(const T & item); // append the item to the end of the list

	T remove(); // remove current node

	void moveToStart() { curr = head; } // set the current position to the start of the list

	void moveToEnd() { curr = tail; } // set the current position to the end of the list

	void prev(); // move the position one step left

	void next() { if(curr != tail) curr = curr->next; } // move the position one step right

	int L() const { return cnt; } // return the number of elements

	int currPos() const; // return the current element's position

	void moveToPos(int pos); // set current position

	const T& GetValue() const;// return the current value

	void Print(); // print the linked list
};

#endif // !LLIST_H_


