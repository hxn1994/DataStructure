// main.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "Stack.h"
#include "AStack.h"
#include "LStack.h"
#include "AStack.cpp"
#include "LStack.cpp"

using namespace std;


int main()
{
	AStack<int> p(10);
	p.push(10);
	p.push(9);
	p.push(852);

	cout << "After pushing:\n";
	p.print();

	cout << endl;

	cout << "This item popped out\n";
	cout << p.pop();
	cout << endl;

	cout << "After popping:\n";
	p.print();
	cout << endl;

	cout << "The top value is:\n";
	cout << p.topvalue();
	cout << endl;

	p.clear();

	cout << "The new astack:\n";
	p.print();
	cout << endl;

	LStack<int> ls;
	ls.push(10);
	ls.push(98);
	ls.push(753);

	cout << "The lstack:\n";
	ls.print();
	cout << endl;

	cout << "This item popped out\n";
	cout << ls.pop();
	cout << endl;

	cout << "After popping:\n";
	ls.print();
	cout << endl;   

	cout << "The top value is:\n";
	cout << ls.topvalue();
	cout << endl;
	  
	return 0;
}

