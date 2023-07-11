#pragma once

template <class T>
class NodeStack
{
public:
	explicit NodeStack(T initData, NodeStack<T> *initPNext);

	T data;
	NodeStack<T>* pNext;
};

