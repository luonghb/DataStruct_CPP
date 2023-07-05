#include "NodeLinkedList.h"

template<class T>
NodeLinkedList<T>::NodeLinkedList() {
	data_ = T();
	p_next_ = nullptr;
}

template<class T>
NodeLinkedList<T>::NodeLinkedList(T new_data) {
	p_next_ = nullptr;
	data_ = new_data;
}

template<class T>
NodeLinkedList<T>::~NodeLinkedList()
{
	Clear();
}

template<class T>
void NodeLinkedList<T>::Clear() {
	if (p_next_ != nullptr) {
		delete p_next_;
		p_next_ = nullptr;
	}
}

template<class T>
void NodeLinkedList<T>::set_p_next(NodeLinkedList<T>* new_p_next) {
	p_next_ = new_p_next;
}

template<class T>
NodeLinkedList<T>* NodeLinkedList<T>::get_p_next() const {
	return p_next_;
}

template<class T>
void NodeLinkedList<T>::set_data(T new_data) {
	data_ = new_data;
}

template<class T>
T NodeLinkedList<T>::get_data() const {
	return data_;
}

template class NodeLinkedList<int>;