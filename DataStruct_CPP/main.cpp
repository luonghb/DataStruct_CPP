#include <iostream>
#include "SmartPointer.h"

int main() {
	int* p = new int(20);
	SmartPointer<int*> i(&p);

	std::cout << i.get_p();
	return 0;
}