// StackUsingLL.cpp
#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d): data(d), next(NULL) {}
};

class Stack {
private:
	node* head;
public:
	Stack() {
		head = NULL;
	}

	void push(int d) {
		// Insert at front
		if (head == NULL) {
			head = new node(d);
		}
		else {
			node* n = new node(d);
			n->next = head;
			head = n;
		}
	}

	void pop() {
		// Delete at front
		if (head == NULL) {
			return;
		}
		else if (head->next == NULL) {
			delete head;
			head = NULL;
		}
		else {
			node* temp = head;
			head = head->next;
			delete temp;
		}
	}

	bool empty() {
		// head == NULL
		return head == NULL;
	}

	int top() {
		// Data at head
		return head->data;
	}
};

int main() {
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}

	return 0;
}
















