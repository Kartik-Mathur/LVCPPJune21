// TopKElements.cpp
#include <iostream>
#include <queue>
using namespace std;

void printQueue(priority_queue<int, vector<int>, greater<int> > q) {
	while (!q.empty()) {
		cout << q.top() << " ";
		q.pop();
	}
	cout << endl;
}




int main() {
	priority_queue<int, vector<int>, greater<int> > q;
	int k = 3, no;
	while (1) {
		cin >> no;
		if (no == -1) {
			// Print the entire heap
			printQueue(q);
		}
		else {
			if (q.size() < k) {
				q.push(no);
			}
			else { // q.size() == k
				if (q.top() < no) {
					q.pop();
					q.push(no);
				}
			}
		}
	}

	return 0;
}
