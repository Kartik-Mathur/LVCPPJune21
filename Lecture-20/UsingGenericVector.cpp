// UsingGenericVector.cpp
#include <iostream>
#include "GenericVector.h"
using namespace std;

int main() {

	Vector<int> v;
	v.push_back('A');
	v.push_back('B');
	v.push_back('C');
	v.push_back('D');
	v.push_back('E');
	// v.push_back(1);
	// v.push_back(2);
	// v.push_back(3);
	// v.push_back(4);
	// v.push_back(5);
	v.pop_back();
	for (int i = 0 ; i < v.size() ; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	cout << "capacity: " << v.capacity() << endl;
	cout << "size: " << v.size() << endl;

	return 0;
}
















