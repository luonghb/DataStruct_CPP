#include "LinkedList.h"

template<class T>
inline LinkedList<T>::LinkedList()
{
	dummyHead = new NodeLinkedList<T>(T(), nullptr);
}

template<class T>
LinkedList<T>::~LinkedList()
{
	MakeEmpty();
	delete dummyHead;
	dummyHead = nullptr;
}

template<class T>
bool LinkedList<T>::IsEmpty()
{
	return First() == nullptr;
}

template<class T>
void LinkedList<T>::MakeEmpty()
{
	dummyHead->DeletePNext();
}

template<class T>
NodeLinkedList<T>* LinkedList<T>::Zeroth()
{
	return dummyHead;
}

template<class T>
NodeLinkedList<T>* LinkedList<T>::First()
{
	return dummyHead->pNext;
}

