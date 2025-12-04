#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_
#include <iostream>

class LinkedList {
	private:
		struct Node;
		Node* head;
public:
	LinkedList();
	~LinkedList();
	Node* getHead();
	//insert at end
	void insert(int val);
	void print(Node* node);
};

inline LinkedList::Node* LinkedList::getHead() {
	return head;
}

#endif  //_LINKEDLIST_H_