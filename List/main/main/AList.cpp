#include "stdafx.h"
#include "AList.h"
#include <cassert>

template <typename T>
AList<T>::AList(int size )
{
	cout << "Constructor has been called.\n";
	maxsize = size;
	ArrList = new T[maxsize];
	for (int i = 0; i < maxsize; i++)
		ArrList[i] = 0;
	length = 0; 
	curr = 0;
}

template <typename T>
AList<T>::~AList()
{
	delete[]ArrList;
}

template <typename T>
void AList<T>::clear()
{
	delete[] ArrList;
	length = curr = 0;
	ArrList = new T[maxsize];
}

template<typename T>
void AList<T>::insert(const T & item)
{
	assert(length < maxsize);
	for (int i = length; i > curr; i--)
		ArrList[i] = ArrList[i - 1];
	ArrList[curr] = item;
	length++;
}

template<typename T>
void AList<T>::append(const T & item)
{
	assert(length < maxsize);
	ArrList[length++] = item;
}

template<typename T>
T AList<T>::remove()
{
	assert((curr >= 0) && (curr < length));
	T item = ArrList[curr];
	for (int i = curr; i < length - 1; i++)
		ArrList[i] = ArrList[i + 1];
	length--;
	return item;
}

template<typename T>
void AList<T>::moveToStart()
{
	curr = 0;
}

template<typename T>
void AList<T>::moveToEnd()
{
	curr = length;
}

template<typename T>
void AList<T>::prev()
{
	if(curr != 0)
		curr--;
}

template<typename T>
void AList<T>::next()
{
	if(curr < length)
		curr++;
}

template<typename T>
void AList<T>::moveToPos(int pos)
{
	assert((curr >= 0) && (curr <= length));
	curr = pos - 1;
}

template<typename T>
const T & AList<T>::GetValue() const
{
	assert((curr >= 0) && (curr < length));
	return ArrList[curr]; // TODO: 在此处插入 return 语句
}

