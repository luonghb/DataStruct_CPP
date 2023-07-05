#pragma once

#include "NodeLinkedList.h"

template<class T>
class LinkedList
{
	public:
		explicit NodeLinkedList();
		explicit NodeLinkedList(NodeLinkedList<T> *new_p_head);
		~NodeLinkedList();

		void Clear();
		T& At(int pos);
		void Reverse();

		void InsertHead(NodeLinkedList<T> *new_node_head);
		void InsertTail(NodeLinkedList<T> *new_node_tail);
		void InsertAt(NodeLinkedList<T> *new_node, int pos);

		void InsertHead(T new_data_head);
		void InsertTail(T new_data_tail);
		void InsertAt(NodeLinkedList<T>* new_node, int pos);

		void RemoveHead();
		void RemoveTail();
		void RemoveAt(int pos);

		void set_p_head(NodeLinkedList<T> *new_p_head);
		void set_p_head(T new_data_head);
		NodeLinkedList<T>* get_p_head() const;

		int get_size() const;

	private:
		NodeLinkedList<T>* p_head_;
		int size;
};

