#pragma once

const int MAX_STACK = 100;

template <class T>
class StackArray
{
public:
	explicit StackArray(); 
	~StackArray();
	bool isEmpty() const; 
	void push(const T& newItem);
	void pop(); 
	void topAndPop(T& stackTop);
	void getTop(T& stackTop) const;
private:
	T *item;
	int top;
};
