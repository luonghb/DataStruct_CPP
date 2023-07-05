#pragma once
template <class T>
class NodeLinkedList
{
	public:
		explicit NodeLinkedList();
		explicit NodeLinkedList(T new_data);
		~NodeLinkedList();

		void Clear();

		void set_p_next(NodeLinkedList<T>* new_p_next);
		NodeLinkedList<T>* get_p_next() const;

		void set_data(T new_data);
		T get_data() const;


	private:
		T data_;
		NodeLinkedList<T>* p_next_;
};