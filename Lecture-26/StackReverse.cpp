// StackReverse.cpp
#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int topElement) {
	// base case
	if (s.empty()) {
		s.push(topElement);
		return;
	}

	// recursive case
	int top = s.top();
	s.pop();
	insertAtBottom(s, topElement);
	s.push(top);
}

void StackReverse(stack<int> &s) {
	// base case
	if (s.empty()) {
		return;
	}

	// recursive case
	int topElement = s.top();
	s.pop();
	StackReverse(s);
	insertAtBottom(s, topElement);
}

void printStack(stack<int> s) {
	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}


int main() {
	stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	printStack(s);
	StackReverse(s);
	printStack(s);

	return 0;
}
















