// LinkedList.cpp
#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;

	node(int d) {
		data = d;
		next = NULL;
	}
};

int lengthLL(node* head) {
	int count = 0;
	while (head != NULL) {
		count++;
		head = head->next;
	}
	return count;
}

void InsertAtFront(node* &head, node* &tail, int d) {
	node* n = new node(d);
	if (head == NULL) {
		head = tail = n;
	}
	else {
		n->next = head;
		head = n;
	}
}

void InsertAtEnd(node* &head, node* &tail, int d) {
	node* n = new node(d);
	if (head == NULL) {
		head = tail = n;
	}
	else {
		tail->next = n;
		tail = n;
	}
}

void InsertAtMid(node* &head, node* &tail, int pos, int data) {
	if (pos == 0) {
		InsertAtFront(head, tail, data);
	}
	else if (pos >= lengthLL(head)) {
		InsertAtEnd(head, tail, data);
	}
	else {
		int i = 1;
		node* t = head;
		while (i <= pos - 1) {
			t = t->next;
			i++;
		}

		node* n = new node(data);
		n->next = t->next;
		t->next = n;
	}
}

void PrintLL(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL" << endl;
}


int main() {
	node* head, *tail;
	head = tail = NULL;

	// InsertAtFront(head, tail, 1);
	// InsertAtFront(head, tail, 2);
	// InsertAtFront(head, tail, 3);
	// InsertAtFront(head, tail, 4);
	// InsertAtFront(head, tail, 5);
	InsertAtEnd(head, tail, 1); //0
	InsertAtEnd(head, tail, 2); //1
	InsertAtEnd(head, tail, 3); //2
	InsertAtEnd(head, tail, 4); //3
	InsertAtEnd(head, tail, 5); //4
	InsertAtEnd(head, tail, 6); //5
	PrintLL(head);
	InsertAtMid(head, tail, 4, 7);
	PrintLL(head);
	// PrintLL(head);

	return 0;
}
















