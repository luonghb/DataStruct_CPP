#include "StackLinkedList.h"

template<class T>
StackLinkedList<T>::StackLinkedList()
{
	top = nullptr;
}

template<class T>
bool StackLinkedList<T>::isEmpty() const
{
	return top == nullptr;
}

template<class T>
void StackLinkedList<T>::push(const T& newTop)
{
	NodeStack<T>* p = new NodeStack<T>(newTop, top);
	top = p;
}

template<class T>
void StackLinkedList<T>::getTop(const T& stackTop)
{
	stackTop = top;
}

template<class T>
void StackLinkedList<T>::topAndPop(T& stackTop)
{
	stackTop = top;
	pop();
}

template<class T>
void StackLinkedList<T>::pop()
{
	NodeStack<T>* p = top;
	top = top->pNext;
	delete p;
	p = nullptr;
}


