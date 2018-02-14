#ifndef LIST_H_
#define LIST_H_

template<typename T>
class List
{
private:
	void operator=(List &L) {} // assignment

	List(const List &L) {} // copy constructor

public:
	List() {} // default constructor

	virtual ~List() {} // virtual deconstructor

	virtual void clear() = 0; // clear the contents from the list

	virtual void insert(const T &item) = 0; // insert an element at the current location

	virtual void append(const T &item) = 0; // append an element at the end of the list

	virtual T remove() = 0; // remove and return the current value

	virtual void moveToStart() = 0; // set the current position to the start of the list

	virtual void moveToEnd() = 0; // set the current position to the end of the list

	virtual void prev() = 0; // move the position one step left

	virtual void next() = 0; // move the position one step right

	virtual int L() const = 0; // return the number of elements

	virtual int currPos() const = 0; // return the current element's position

	virtual void moveToPos(int pos) = 0; // set current position

	virtual const T& GetValue() const = 0; // return the current value

};


#endif // !LIST_H_
