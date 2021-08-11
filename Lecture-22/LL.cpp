#include <iostream>
using namespace std;
// jis class ke andar ussi ka pointer hota hai
// we call that class as self referential class

class node {
public:
	int data;
	node* next;

	node(int d) {
		data = d;
		next = NULL;
	}
};


int main() {
	node a(1);
	// a.data = 1;
	// a.next = NULL;
	node b(2);
	node c(3);

	a.next = &b;
	b.next = &c;

	cout << a.data << "-->" << a.next->data << "-->" << a.next->next->data << "-->" << "NULL" << endl;

	return 0;
}
















