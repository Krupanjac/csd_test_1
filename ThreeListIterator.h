#ifndef _THREELISTITERATOR_H_
#define _THREELISTITERATOR_H_
#include "LinkedList.h"

class ThreeListIterator {
	private:
		LinkedList* list1;
		LinkedList* list2;
		LinkedList* list3;
public:

	ThreeListIterator(LinkedList* l1, LinkedList* l2, LinkedList* l3)
			: list1(l1), list2(l2), list3(l3) {}
	

	bool hasNext();
	void getNext();

};


#endif // _THREELISTITERATOR_H_