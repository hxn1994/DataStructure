#pragma once
#ifndef QUEUE_H_
#define QUEUE_H_

template <typename T>
class Queue
{
private:
	void operator=(const Queue &q) {}
	Queue(const Queue &) {}
public:
	Queue(){}
	virtual ~Queue() {}

	virtual  void clear() = 0;

	virtual void enqueue(const T&) = 0;

	virtual T dequeue() = 0;

	virtual const T& frontvalue() const = 0;

	virtual int length() const = 0;
};

#endif // !QUEUE_H_


