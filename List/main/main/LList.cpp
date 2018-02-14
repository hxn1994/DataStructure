#include "stdafx.h"
#include "LList.h"
#include <cassert>


template<typename T>
void LList<T>::init()
{
	curr = head = tail = new Link<T>;
	cnt = 0;
}

template<typename T>
void LList<T>::removeall()
{
	while (head != nullptr)
	{
		curr = head;
		head = head->next;
		delete curr;
	}
}
template<typename T>
void LList<T>::insert(const T& item)
{
	Link<T> * s = new Link<T>;
	s->data = item;
	s->next = curr->next;
	curr->next = s;
	if (curr == tail)
		tail = curr->next;
	cnt++;
}

template<typename T>
void LList<T>::append(const T & item)
{
	Link<T> * s = new Link<T>;
	s->data = item;
	s->next = nullptr;
	tail->next = s;
	cnt++;
}

template<typename T>
T LList<T>::remove()
{
	assert(curr->next != nullptr);
	T s;
	s = curr->next->data;
	Link<T> * p = new Link<T>;
	p = curr->next;
	if (tail == curr)
		tail = curr;
	curr->next = curr->next->next;
	delete p;
	cnt--;
	return s;
}

template<typename T>
void LList<T>::prev()
{
	if (curr == head)
		return;
	Link<T> * p = new Link<T>;
	p = head;
	while (p->next != curr)
	{
		p = head->next;
	}
	curr = p;
}


template<typename T>
int LList<T>::currPos() const
{
	Link<T> * p = new Link<T>;
	p = head;
	int i;
	for (i = 0; curr != p; i++)
		p = p->next;
	return i;
}

template <typename T>
void LList<T>::moveToPos(int pos)
{
	assert((pos >= 0) && (pos <= cnt));
	curr = head;
	int i = 0;
	while (i < pos)
	{
		curr = curr->next;
		i++;
	}
}

template<typename T>
const T & LList<T>::GetValue() const
{
	assert(curr->next != nullptr);
	return curr->next->data;
	// TODO: 在此处插入 return 语句
}

template<typename T>
void LList<T>::Print()
{
	Link<T> * p = new Link<T>;
	curr = head->next;
	p = curr;
	int i = 0;

	while (p != nullptr)
	{
		cout << p->data << ' ';
		p = p->next;
	}

}
