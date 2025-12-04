#include "LinkedList.h"


LinkedList::LinkedList() : head(nullptr) {}
LinkedList::~LinkedList() {
	Node* current = head;
	Node* next;
	while (current != nullptr) {
		next = current->next;
		delete current;
		current = next;
	}
}

// method to insert a new node at the end
void LinkedList::insert(int val) {
	Node* newNode = new Node(val);
	if (head == nullptr) {
		head = newNode;
		return;
	}
	Node* temp = head;
	while (temp->next != nullptr) {
		temp = temp->next;
	}
	temp->next = newNode;
}

void LinkedList::print(Node* node) {
	Node* temp = node;
	while (temp != nullptr) {
		std::cout << temp->data << " ";
		temp = temp->next;
	}
}


