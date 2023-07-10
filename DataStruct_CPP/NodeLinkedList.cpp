#include "NodeLinkedList.h"

template<class T>
NodeLinkedList<T>::NodeLinkedList() {
	data = T();
	pNext = nullptr;
}

template<class T>
NodeLinkedList<T>::NodeLinkedList(T newData) {
	data = newData;
	pNext = nullptr;
}

template<class T>
NodeLinkedList<T>::NodeLinkedList(T newData, NodeLinkedList<T>* newPNext)
{
	data = newData;
	pNext = newPNext;
}

template<class T>
NodeLinkedList<T>::~NodeLinkedList()
{
	DeletePNext();
}

template<class T>
void NodeLinkedList<T>::DeletePNext()
{
	if (pNext != nullptr) {
		delete pNext;
		pNext = nullptr;
	}
}

template class NodeLinkedList<int>;