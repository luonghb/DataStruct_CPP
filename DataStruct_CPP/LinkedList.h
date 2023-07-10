#pragma once

#include <iostream>
#include "NodeLinkedList.h"

template <class T>
class LinkedList
{
public:
	explicit LinkedList();
	explicit LinkedList(const LinkedList& list);
	~LinkedList();

	NodeLinkedList<T>* Zeroth();
	NodeLinkedList<T>* First();
	const NodeLinkedList<T>* First() const;

	bool IsEmpty() const;

	NodeLinkedList<T>* Find(T data);
	NodeLinkedList<T>* FindPrevious(T data);

	void Insert(T data, NodeLinkedList<T>* p);
	void Remove(T data);

	void MakeEmpty();

	void Print() const;

	LinkedList<T>& operator=(const LinkedList<T>& rhs);
private:
	NodeLinkedList<T>* dummyHead;
};

