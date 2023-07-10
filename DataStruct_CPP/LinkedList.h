#pragma once

#include "NodeLinkedList.h"

template<class T>
class LinkedList
{
	public:
		explicit LinkedList();
		~LinkedList();

		bool IsEmpty();
		void MakeEmpty();

		NodeLinkedList<T>* Zeroth();
		NodeLinkedList<T>* First();

		void Insert(T newData, NodeLinkedList<T>* p) {

		}

		void Remove(T data);

	private:
		NodeLinkedList<T>* dummyHead;
};
