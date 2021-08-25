// Heap.cpp
#include <iostream>
#include <queue>
using namespace std;

// class compare {
// public:
// 	bool operator()(int a, int b) {
// 		return a < b;
// 	}
// };

int main() {

	// priority_queue<int> q;
	// priority_queue<int, vector<int>, compare> q;
	priority_queue<int, vector<int>, greater<int> > q;

	q.push(10);
	q.push(1);
	q.push(11);
	q.push(2);
	q.push(3);
	q.push(5);

	while (!q.empty()) {
		cout << q.top() << " ";
		q.pop();
	}
	cout << endl;



	return 0;
}
















