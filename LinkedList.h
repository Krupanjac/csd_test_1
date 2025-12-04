#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_
#include <iostream>

class LinkedList {
public:

	struct Node {
		int data;
		Node* next;
		Node(int val) : data(val), next(nullptr) {}
	};


	LinkedList();
	~LinkedList();
	Node* getHead();
	void setHead(Node*);
	void insert(int);
	void print(Node*);

private:
	Node* head;

};

inline LinkedList::Node* LinkedList::getHead() {
	return head;
}

inline void LinkedList::setHead(Node* node) {
	head = node;
}

#endif  //_LINKEDLIST_H_