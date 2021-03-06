// main.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "generator.h"
#include "List.h"
#include "AList.h"
#include "AList.cpp"
#include "LList.h"
#include "LList.cpp"

using namespace std;

int main()
{
	int n = 10;

	cout << "Now we construct an array-based list:\n";
	AList<int> AL(n);

	AL.insert(5);
	AL.insert(6);
	AL.insert(3);
	AL.insert(9);

	cout << "After inserting, the list:\n";
	generator::Print(AL.GetTheList(), n);

	cout << endl;

	AL.insert(32);
	AL.insert(89);
	AL.insert(95);
	AL.insert(934);
	AL.insert(45678);
	AL.insert(7541);

	cout << "After inserting, the list:\n";
	generator::Print(AL.GetTheList(), n);

	AL.remove();

	cout << "After removing, the list:\n";
	generator::Print(AL.GetTheList(), n);

	cout << endl;

	AL.append(201);
	cout << "After appending, the list:\n";
	generator::Print(AL.GetTheList(), n);

	cout << endl;

	AL.moveToPos(5);
	cout << "The current is " << AL.GetValue() << endl;
	cout << "After changing, the current is "<< AL.currPos() << endl;

	cout << endl;

	cout << "The length is " << AL.L() << endl;

	AL.prev();
	cout << "The previous is " << AL.GetValue() << endl;

	AL.next();
	cout << "The next is " << AL.GetValue() << endl;

	cout << "The list:\n";
	generator::Print(AL.GetTheList(), n);

	cout << endl;

	LList<int> A;
	A.insert(10);
	A.insert(25);

	cout << "Current value: \n";
	cout << A.GetValue();

	cout << endl;

	cout << "Print the linked list:\n";
	A.Print();

	cout << endl;

	A.append(50);

	cout << "Print the linked list:\n";
	A.Print();
	
	cout << endl;

	A.clear();
	A.insert(852);
	A.insert(900);
	A.insert(954);
	A.insert(753);

	cout << "Print the linked list:\n";
	A.Print();
	cout << endl;

	A.remove();

	cout << "After deleting:\n";
	A.Print();

	cout << endl;

    return 0;
}

