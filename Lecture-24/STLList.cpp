// STLList.cpp
#include <iostream>
#include <list>
using namespace std;

ostream& operator<<(ostream& os, list<int> &l) {
	for (auto x : l) {
		cout << x << "-->";
	}
	return os;
}

int main() {
	// Creating a linkedlist
	list<int> l;
	l.push_front(1);
	l.push_back(2);
	l.push_back(2);
	l.push_back(2);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	l.push_back(6);
	// l.push_front(7);

	// Print the linked list using foreach loop
	// for (auto x : l) {
	// 	cout << x << "-->";
	// }
	// cout << "NULL" << endl;
	cout << l << endl;
	l.reverse();
	// Printing linked list way 2, using iterator
	for (auto it = l.begin() ; it != l.end() ; it++) {
		cout << *it << "-->";
	}
	cout << "NULL" << endl;
	// insert at some position pos
	int pos = 5;
	list<int>::iterator it;
	it = l.begin();
	for (int i = 0 ; i < pos ; i++) {
		it++;
	}
	// it++;
	// it++;
	l.insert(it, 10);
	cout << l << endl;
	// l.erase(10);
	int key = 2;
	cout << "After removing 2: ";
	// l.remove(key);
	for (auto it = l.begin() ; it != l.end() ; it++) {
		if (*it == key) {
			l.erase(it);
			// break;
		}
	}
	cout << l << endl;
	l.pop_front();
	cout << l << endl;
	// l.pop_back();
	l.sort();
	cout << l << endl;


	// Linked List initialization
	// list<int> l1{1, 2, 3, 4};


	return 0;
}
















