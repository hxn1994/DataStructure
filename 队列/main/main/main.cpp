// main.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "Queue.h"
#include "AQueue.h"
#include "LQueue.h"
#include "CircularQueue.h"
#include "Queue.cpp"
#include "AQueue.cpp"
#include "LQueue.cpp"
#include "CircularQueue.cpp"

using namespace std;

int main()
{
	AQueue<int> aq(10);
	aq.enqueue(7);
	aq.enqueue(8);

	cout << "Print the queue:\n";
	aq.print();
	cout << endl;

	cout << aq.length();
	cout << endl;

	cout << "Print the queue:\n";
	aq.print();
	cout << endl;

	LQueue<int> lq;
	lq.enqueue(10);
	lq.enqueue(75);
	 
	cout << "Print the queue:\n";
	lq.print();
	cout << endl;

	CircularQueue<int> cq(10);
	cq.enqueue(10);
	cq.enqueue(38);

	cout << "Print the queue:\n";
	cq.print();
	cout << endl;

    return 0;
}

