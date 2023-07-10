#pragma once

template <class T>
class NodeLinkedList
{
public:
	explicit NodeLinkedList();
	explicit NodeLinkedList(T initData);
	explicit NodeLinkedList(T initData, NodeLinkedList<T> *initPNext);
	T data;
	NodeLinkedList<T>* pNext;
};

