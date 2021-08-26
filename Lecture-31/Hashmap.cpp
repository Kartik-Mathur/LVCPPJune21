// Hashmap.cpp
#include <iostream>
#include "node.h"
using namespace std;

// class node {
// public:
// 	int data;
// 	string key;
// 	node* next;

// 	node(string s, int k) {
// 		key = s;
// 		data = k;
// 		next = NULL;
// 	}
// };

class hashmap {
	node** a;
	int ts;
	int cs;

	int hash_function(string key) {
		int ans = 0;
		int mul = 1;
		for (int i = 0 ; i < key.length() ; i++) {
			ans = (ans % ts + ((key[i] % ts) * (mul % ts)) % ts) % ts;
			mul *= 7;
			mul %= ts;
		}
		return ans;
	}

	void rehashing() {
		node** olda = a;
		int oldts = ts;
		ts = 2 * ts;
		a = new node*[ts];
		cs = 0;
		for (int i = 0 ; i < oldts ; i++) {
			node* head = olda[i];
			while (head) {
				insert(head->key, head->value);
				head = head->next;
			}
		}
		delete[] olda;
	}

public:
	hashmap(int s = 7) {
		ts = s;
		a = new node*[ts];
		for (int i = 0 ; i < ts; i++) {
			a[i] = NULL;
		}
		cs = 0;
	}

	void insert(string key, int value) {
		int indx = hash_function(key);
		node* n = new node(key, value);
		n->next = a[indx];
		a[indx] = n;
		cs++;
		double load_factor = cs / (ts * 1.0);
		if (load_factor > 0.6) {
			rehashing();
		}
	}

	void print() {
		for (int i = 0 ; i < ts ; i++) {
			node* head = a[i];
			cout << i << "--> ";
			while (head) {
				cout << "(" << head->key << "," << head->value << ") ";
				head = head->next;
			}
			cout << endl;
		}
	}

	node* search(string key) {
		int indx = hash_function(key);
		node* head = a[indx];
		while (head) {
			if (head->key == key) {
				return head;
			}
			head = head->next;
		}
		return NULL;
	}

	int& operator[](string key) {
		node* x = search(key);
		if (x == NULL) {
			// Key is not present
			int garbage;
			insert(key, garbage);
			x = search(key);
			return x->value;
		}
		else {
			// Key is present
			return x->value;
		}
	}

	void delete(string key) {
		node* x = search(key);
		if (x == NULL) {
			return;
		}
		else {

		}
	}

};

int main() {

	hashmap h;
	h.insert("Mango", 100);
	h.insert("Apple", 120);
	h.insert("Kiwi", 50);
	h.insert("Orange", 40);
	h.insert("Litch", 30);


	// h.search("Apple");
	h["Pineapple"] = 60; // Insertion
	h["Pineapple"] = 600; // Updation
	cout << h["Pineapple"] << endl; // Searching
	h.print();

	return 0;
}























