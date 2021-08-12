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

void deleteAtFront(node* &head, node* &tail) {
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

void deleteAtEnd(node* &head, node* &tail) {
	if (head == NULL) {
		return;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* t = head;
		while (t->next != tail) {
			t = t->next;
		}

		delete tail;
		tail = t;
		t->next = NULL;
	}
}

void deleteAtMid(node* &head, node* &tail, int pos) {
	if (pos == 0) {
		deleteAtFront(head, tail);
	}
	else if (pos < lengthLL(head)) {
		node* temp = head;
		for (int i = 1 ; i < pos ; i++) {
			temp = temp->next;
		}

		node* n = temp->next;
		temp->next = n->next;
		delete n;
	}
}

void PrintLL(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL" << endl;
}

void SearchLL(node* head, int key) {
	bool isFound = false;
	while (head != NULL) {
		if (head->data == key) {
			cout << "Found" << endl;
			isFound = true;
			break;
		}
		head = head->next;
	}
	if (isFound == false) {
		cout << "Not Found" << endl;
	}
}

void searchLLRec(node* head, int key) {
	// base case
	if (head == NULL) {
		cout << "Not Found" << endl;
		return;
	}

	// recursive case
	if (head->data == key) {
		cout << "Found" << endl;
	}
	else {
		searchLLRec(head->next, key);
	}
}

void ReverseLL(node* &head, node* &tail) {
	node* c = head;
	node* p = NULL, *n;
	while (c != NULL) {
		n = c->next;
		c->next = p;
		p = c;
		c = n;
	}
	swap(head, tail);// or
	// tail=head;
	// head = p;
}

node* mid(node* head) {
	if (head == NULL) {
		return NULL;
	}

	node* s = head;
	node* f = head->next;
	while (f != NULL and f->next != NULL) {
		f = f->next->next;
		s = s->next;
	}
	return s;
}

void BubbleSortLL(node* &head) {
	for (int i = 0 ; i < lengthLL(head) - 1 ; i ++) {
		node* c = head;
		node* p = NULL;
		while (c != NULL and c->next != NULL) {
			node* n = c -> next;
			if (c->data > n->data) {
				// swapping hogi
				if (p == NULL) {
					// if p == NULL, head change hoga
					c->next = n->next;
					n->next = c;
					p = head = n;
				}
				else {
					// Head change nhi hoga
					p->next = c->next;
					c->next = n->next;
					n->next = c;
					p = n;
				}
			}
			else {
				// swapping nahi hogi
				p = c;
				c = n;
			}
		}
	}
}

node* merge(node* h1, node* h2) {
	// base case
	if (h1 == NULL) {
		return h2;
	}
	if (h2 == NULL) {
		return h1;
	}
	// recursive case
	node* nH = NULL;
	if (h1->data < h2->data) {
		nH = h1;
		nH->next = merge(h1->next, h2);
	}
	else {
		nH = h2;
		nH->next = merge(h1, h2->next);
	}
	return nH;
}

node* mergeSort(node* head) {
	// if (head == NULL) {
	// 	return head;
	// }
	// if (head->next == NULL) {
	// 	return head;
	// }
	if (head == NULL || head->next == NULL) {
		return head;
	}

	// 1. Divide
	node* m = mid(head);
	node* a = head;
	node* b = m->next;
	m->next = NULL;

	// 2. Sort
	a = mergeSort(a);
	b = mergeSort(b);

	// 3. Merge
	node* newHead = merge(a, b);
	return newHead;
}

int main() {
	node* head, *tail, *h1, *t1;
	head = tail = h1 = t1 = NULL;


	// InsertAtEnd(head, tail, 1);
	// InsertAtEnd(head, tail, 3); //1
	// InsertAtEnd(head, tail, 4); //2
	// InsertAtEnd(head, tail, 5); //3
	// InsertAtEnd(head, tail, 7); //4
	// InsertAtEnd(head, tail, 9); //5

	// InsertAtEnd(h1, t1, 2);
	// InsertAtEnd(h1, t1, 6);
	// InsertAtEnd(h1, t1, 8);
	// InsertAtEnd(h1, t1, 10);
	// InsertAtEnd(h1, t1, 11);

	// PrintLL(head);
	// PrintLL(h1);

	// node* newHead = merge(head, h1);
	InsertAtEnd(head, tail, 5);
	InsertAtEnd(head, tail, 2);
	InsertAtEnd(head, tail, 1);
	InsertAtEnd(head, tail, 7);
	InsertAtEnd(head, tail, 6);
	InsertAtEnd(head, tail, 3);
	PrintLL(head);
	head = mergeSort(head);
	PrintLL(head);



	// InsertAtEnd(head, tail, 1); //0
	// InsertAtEnd(head, tail, 2); //1
	// InsertAtEnd(head, tail, 3); //2
	// InsertAtEnd(head, tail, 4); //3
	// InsertAtEnd(head, tail, 5); //4
	// InsertAtEnd(head, tail, 6); //5
	// PrintLL(head);
	// node* ans = mid(head);
	// if (ans == NULL) {
	// 	cout << "Mid doesnot exist" << endl;
	// }
	// else {
	// 	cout << "Mid element is " << ans->data << endl;
	// }
	// ReverseLL(head, tail);
	// PrintLL(head);
	// BubbleSortLL(head);
	// PrintLL(head);
	// InsertAtMid(head, tail, 4, 7);
	// deleteAtFront(head, tail);
	// deleteAtEnd(head, tail);
	// deleteAtEnd(head, tail);
	// deleteAtMid(head, tail, 6);
	// PrintLL(head);
	// SearchLL(head, 16);
	// searchLLRec(head, 5);
	// ReverseLL(head, tail);
	// PrintLL(head);
	// ReverseLL(head, tail);
	// PrintLL(head);

	return 0;
}
















