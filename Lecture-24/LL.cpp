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

void InsertAtFront(node* &head, int d) {
	node* n = new node(d);
	if (head == NULL) {
		head = n;
	}
	else {
		n->next = head;
		head = n;
	}
}

void PrintLL(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL" << endl;
}

void CreateCycle(node* head) {
	node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = head->next->next;
}

void breakTheCycle(node* fast, node* head) {
	// 1. set the prev behind fast
	node* prev = head;
	while (prev->next != fast) {
		prev = prev->next;
	}

	// 2. Break the cycle
	node* slow = head;
	while (fast != slow) {
		prev = fast;
		fast = fast->next;
		slow = slow->next;
	}
	prev->next = NULL;
}

bool isCyclic(node* head) {
	node* slow = head, *fast = head;
	while (fast != NULL and fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow) {
			breakTheCycle(fast, head);
			return true;
		}
	}
	return false;
}

int main() {
	node* head, *tail;
	head = NULL;

	InsertAtFront(head, 1);
	InsertAtFront(head, 2);
	InsertAtFront(head, 3);
	InsertAtFront(head, 4);
	InsertAtFront(head, 5);
	InsertAtFront(head, 6);
	InsertAtFront(head, 7);
	InsertAtFront(head, 8);
	InsertAtFront(head, 9);
	InsertAtFront(head, 10);
	InsertAtFront(head, 11);
	InsertAtFront(head, 12);
	CreateCycle(head);
	// PrintLL(head);
	if (isCyclic(head) == true) {
		cout << "Cycle is Present" << endl;
	}
	else {
		cout << "Cycle is Not Present" << endl;
	}

	PrintLL(head);

	return 0;
}
















