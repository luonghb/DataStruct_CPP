#include "LinkedList.h"

template<class T>
inline LinkedList<T>::LinkedList()
{
	dummyHead = new NodeLinkedList<T>(T(), nullptr);
}

template<class T>
LinkedList<T>::LinkedList(const LinkedList& list)
{
	*this = list;
}

template<class T>
LinkedList<T>::~LinkedList()
{
	MakeEmpty();
	delete dummyHead;
	dummyHead = nullptr;
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

template<class T>
const NodeLinkedList<T>* LinkedList<T>::First() const
{
	return dummyHead->pNext;
}

template<class T>
bool LinkedList<T>::IsEmpty() const
{
	return First() == nullptr;
}

template<class T>
NodeLinkedList<T>* LinkedList<T>::Find(T data)
{
	NodeLinkedList<T>* p = First();
	while (p != nullptr) {
		if (p->data == data) {
			return p;
		}
		p = p->pNext;
	}
	return nullptr;
}

template<class T>
NodeLinkedList<T>* LinkedList<T>::FindPrevious(T data)
{
	NodeLinkedList<T>* p = Zeroth();
	
	while (p->pNext != nullptr) {
		if (p->pNext->data == data) {
			return p;
		}
		p = p->pNext;
	}
	return nullptr;
}

template<class T>
void LinkedList<T>::Insert(T data, NodeLinkedList<T>* p)
{
	NodeLinkedList<T>* n = new NodeLinkedList<T>(data, p->pNext);
	p->pNext = n;
}

template<class T>
void LinkedList<T>::Remove(T data)
{
	NodeLinkedList<T>* p = FindPrevious(data);
	if (p != nullptr) {
		NodeLinkedList<T>* tmp = p->pNext;
		p->pNext = tmp->pNext;
		delete tmp;
		tmp = nullptr;
	}
}

template<class T>
void LinkedList<T>::MakeEmpty()
{
	while (!IsEmpty()) {
		Remove(First()->data);
	}
}

template<class T>
void LinkedList<T>::Print() const
{
	const NodeLinkedList<T>* p = First();
	while (p != nullptr) {
		std::cout << p->data << "-->";
		p = p->pNext;
	}
	std::cout << "null" << std::endl;
}

template<class T>
LinkedList<T>& LinkedList<T>::operator=(const LinkedList<T>& rhs)
{
	if (this != &rhs) {
		MakeEmpty();
		const NodeLinkedList<T>* r = rhs.First();
		NodeLinkedList<T>* p = Zeroth();
		while (r != nullptr) {
			Insert(r->data, p);
			r = r->pNext;
			p = p->pNext;
		}
	}
	return *this;
}

template class LinkedList<int>;