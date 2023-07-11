#include "NodeStack.h"

template <class T>
NodeStack<T>::NodeStack(T initData, NodeStack<T>* initPNext) {
	data = initData;
	pNext = initPNext;
}

template class NodeStack<int>;