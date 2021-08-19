// LinkedListQueue.cpp
#include <iostream>
using namespace std;
class node {
public:
	int data;
	node *next;

	node(int d): data(d), next(NULL) {}
};

class Queue {
private:
	node* head;
	node* tail;
public:

	Queue() {
		head = tail = NULL;
	}

	void push(int data) {
		node* n = new node(data);
		if (head == NULL) {
			head = tail = n;
		}
		else {
			tail->next = n;
			tail = n;
		}
	}

	void pop() {
		if (head == NULL) {
			return;
		}
		else if (head->next == NULL) {
			delete head;
			head = tail = NULL;
		}
		else {
			node* temp = head;
			head = head->next;
			delete temp;
		}
	}

	bool empty() {
		return head == NULL;
	}

	int front() {
		return head->data;
	}
};

int main() {
	Queue q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	q.push(7);
	q.push(8);
	q.push(9);



	return 0;
}
















