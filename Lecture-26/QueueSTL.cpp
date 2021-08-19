// QueueSTL.cpp
#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue<int> q) {
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
}

int main() {

	queue<int> q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	printQueue(q);
	printQueue(q);

	return 0;
}
















