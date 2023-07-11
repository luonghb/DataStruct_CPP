#pragma once

#include "NodeStack.h"

template <class T>
class StackLinkedList
{
public:
	explicit StackLinkedList();
	bool isEmpty() const;
	void push(const T& newTop);
	void getTop(const T& stackTop);
	void topAndPop(T& stackTop);
	void pop();
private:
	NodeStack<T>* top;
};