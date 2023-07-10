#pragma once
template <class T>
class NodeLinkedList
{
	public:
		explicit NodeLinkedList();
		explicit NodeLinkedList(T newData);
		explicit NodeLinkedList(T newData, NodeLinkedList<T>* newPNext);
		~NodeLinkedList();

		void DeletePNext();
		
		T data;
		NodeLinkedList<T>* pNext;
};