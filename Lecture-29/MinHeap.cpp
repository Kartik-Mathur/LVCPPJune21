// MinHeap.cpp
#include <iostream>
#include <vector>
using namespace std;

class Minheap {
	vector<int> v;
	void heapify(int i) {
		int min = i;
		int left = 2 * i;
		int right = 2 * i + 1;

		if (left < v.size() and v[left] < v[min]) {
			min = left;
		}
		if (right < v.size() and v[right] < v[min]) {
			min = right;
		}

		if (min != i) {
			swap(v[i], v[min]);
			heapify(min);
		}
	}

public:
	Minheap() {
		v.push_back(-1);// To ignore the zeroth index
	}

	void push(int data) {
		v.push_back(data);
		int c = v.size() - 1;
		int p = c / 2;
		while (p >= 1 and v[c] < v[p]) {
			swap(v[c], v[p]);
			c = p;
			p /= 2;
		}
	}

	void pop() {
		swap(v[1], v[v.size() - 1]);
		v.pop_back();
		heapify(1);
	}

	int top() {
		return v[1];
	}

	bool empty() {
		return v.size() == 1;
	}
};

int main() {

	Minheap h;

	h.push(1);
	h.push(2);
	h.push(6);
	h.push(3);
	h.push(5);
	h.push(4);

	while (!h.empty()) {
		cout << h.top() << endl;
		h.pop();
	}


	return 0;
}
















