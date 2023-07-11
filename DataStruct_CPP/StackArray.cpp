#include "StackArray.h"

template<class T>
StackArray<T>::StackArray()
{
	item = new T[MAX_STACK];
	top = 0;
}

template <class T>
StackArray<T>::~StackArray() {
	delete[] item;
	item = nullptr;
}

template<class T>
bool StackArray<T>::isEmpty() const
{
	return top < 0;
}

template<class T>
void StackArray<T>::push(const T& newItem)
{
	if (top < MAX_STACK) {
		item[++top] = newItem;
	}
}

template<class T>
void StackArray<T>::pop()
{
	if (top > 0) {
		--top;
	}
}

template<class T>
void StackArray<T>::topAndPop(T& stackTop)
{
	if (!isEmpty()) {
		stackTop = item[top--];
	}
}

template<class T>
void StackArray<T>::getTop(T& stackTop) const
{
	if (!isEmpty()) {
		stackTop = item[top];
	}
}

template class StackArray<int>;