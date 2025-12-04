#include <iostream>
#include "LinkedList.h"
#include "ThreeListIterator.h"


int main() {

	LinkedList* list1 = new LinkedList();
	LinkedList* list2 = new LinkedList();
	LinkedList* list3 = new LinkedList();

	//list 1, values 1,8,15,16,35
	list1->insert(1);
	list1->insert(8);
	list1->insert(15);
	list1->insert(16);
	list1->insert(35);
	std::cout << "The linked list 1 is: ";
	list1->print(list1->getHead());


	//list 2 , values 2,7,12,63
	list2->insert(2);
	list2->insert(7);
	list2->insert(12);
	list2->insert(63);
	std::cout << "\nThe linked list 2 is: ";
	list2->print(list2->getHead());

	//list3, values 10, 13, 14, 42
	list3->insert(10);
	list3->insert(13);
	list3->insert(14);
	list3->insert(42);
	std::cout << "\nThe linked list 3 is: ";
	list3->print(list3->getHead());
	std::cout << std::endl;
	std::cout << std::endl;

	ThreeListIterator iterator(list1, list2, list3);
	
	std::cout << "\Iterated output: " << std::endl;

	while (iterator.hasNext()) {
		iterator.getNext();
	}

	delete list1;
	delete list2;
	delete list3;



	return 1;
}