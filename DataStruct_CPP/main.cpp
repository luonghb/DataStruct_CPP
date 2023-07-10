#include <iostream>
#include "LinkedList.h"

int main(int argc, char* argv[]) {
	LinkedList<int> list;
	list.Insert(0, list.Zeroth());
	NodeLinkedList<int>* p = list.First();
	for (int i = 1; i <= 10; ++i)
	{
		list.Insert(i, p);
		p = p->pNext;
	}
	std::cout << "printing original list" << std::endl;
	list.Print();
	for (int i = 0; i <= 10; ++i)
	{
		if (i % 2 == 0)
			list.Remove(i);
	}
	std::cout << "printing odd number list" << std::endl;
	list.Print();
	LinkedList<int> list2;
	list2 = list;
	std::cout << "printing copy constructed list" << std::endl;
	list2.Print();
	LinkedList<int> list3;
	list3 = list;
	std::cout << "printing assigned list" << std::endl;
	list3.Print();
	list.MakeEmpty();
	std::cout << "printing emptied list" << std::endl;
	list.Print();
	for (int i = 0; i <= 10; ++i) {
		if (i % 2 == 0) {
			if (list2.Find(i) == NULL)
				std::cout << "could not find element " << i << std::endl;
		}
		else {
			if (list2.Find(i) != NULL)
				std::cout << "found element " << i << std::endl;
		}
	}
	return 0;
}