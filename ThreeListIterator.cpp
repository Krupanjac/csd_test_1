#include "ThreeListIterator.h"
#include <climits> // for INT_MAX (2147483647)


bool ThreeListIterator::hasNext() {

return (list1->getHead() != nullptr) ||
		(list2->getHead() != nullptr) ||
		(list3->getHead() != nullptr);
}

void ThreeListIterator::getNext() {
	if (!hasNext()) {
		throw std::runtime_error("No more elements in the lists.");

	}

	LinkedList::Node* toDelete = nullptr;

	// Use max int for empty lists to exclude them from comparison
	int val1 = list1->getHead() ? list1->getHead()->data : INT_MAX;
	int val2 = list2->getHead() ? list2->getHead()->data : INT_MAX;
	int val3 = list3->getHead() ? list3->getHead()->data : INT_MAX;

	if(val1 < val2 && val1 < val3) {
		toDelete = list1->getHead();
		list1->setHead(list1->getHead()->next);
		std::cout << val1 << " ";
	} else if(val2 < val1 && val2 < val3) {
		toDelete = list2->getHead();
		list2->setHead(list2->getHead()->next);
		std::cout << val2 << " ";
	} else {
		toDelete = list3->getHead();
		list3->setHead(list3->getHead()->next);
		std::cout << val3 << " ";
	}

	delete toDelete;  // Prevent memory leak
}

void ThreeListIterator::executeAll() {
	while (hasNext()) {
		getNext();
	}
}


