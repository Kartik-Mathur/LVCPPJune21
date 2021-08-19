// CircularQueue.cpp
#include <iostream>
using namespace std;

class Queue {
private:
	int *a;
	int n;
	int cs;
	int f, r;
public:
	Queue(int s = 5) {
		a = new int[s];
		n = s;
		cs = 0;
		f = 0;
		r = n - 1;
	}

	void push(int data) {
		if (cs < n) {
			r = (r + 1) % n;
			a[r] = data;
			cs++;
		}
		else {
			cout << "Overflow" << endl;
		}
	}

	void pop() {
		if (cs > 0) {
			f = (f + 1) % n;
			cs--;
		}
		else {
			cout << "Underflow" << endl;
		}
	}

	int front() {
		return a[f];
	}

	bool empty() {
		return cs == 0;
	}
};

int main() {
	Queue q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;

	q.pop();


	return 0;
}
















