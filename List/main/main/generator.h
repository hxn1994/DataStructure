#pragma once
#ifndef GENERATOR_H_
#define GENERATOR_H_

#include <iostream>
#include <ctime>
#include <cassert>

using namespace std;

namespace generator
{
	template <typename T>
	T * Generator(int n, int rangel, int ranger)
	{
		assert(rangel <= ranger);

		T * arr = new int[n];
		srand(time(0));
		for (int i = 0; i < n; i++)
			arr[i] = rand() % (rangel - ranger + 1) + rangel;
		return arr;
	}

	template <typename T>
	void Print(T * arr, int n)
	{
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
}

#endif // !Generator

