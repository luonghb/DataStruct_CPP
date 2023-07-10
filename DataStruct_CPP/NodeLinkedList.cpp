#include "NodeLinkedList.h"

template <class T>
NodeLinkedList<T>::NodeLinkedList()
{
	data = T();
	pNext = nullptr;
}

template<class T>
NodeLinkedList<T>::NodeLinkedList(T initData)
{
	data = initData;
	pNext = nullptr;
}

template<class T>
NodeLinkedList<T>::NodeLinkedList(T initData, NodeLinkedList<T>* initPNext)
{
	data = initData;
	pNext = initPNext;
}

template class NodeLinkedList<int>;
