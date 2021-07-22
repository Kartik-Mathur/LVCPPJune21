// BubbleSort.cpp
#include <iostream>
using namespace std;

void BubbleSort(int *a, int n, int i) {
	// base case
	if (i == n - 1) {
		return;
	}

	// recursive case
	for (int j = 0 ; j < n - 1 - i ; j++) {
		if (a[j] > a[j + 1]) {
			swap(a[j], a[j + 1]);
		}
	}

	BubbleSort(a, n, i + 1);
}

void BubbleSort1(int *a, int n, int i, int j) {
	// base case
	if (i == n - 1) {
		return;
	}

	// recursive case
	if (j < n - 1 - i) {
		if (a[j] > a[j + 1]) {
			swap(a[j], a[j + 1]);
		}
		BubbleSort1(a, n, i, j + 1);
	}
	else {
		BubbleSort1(a, n, i + 1, 0);
	}
}

int main() {
	int a[] = {1, 4, 3, 7, 6, 0, 2, -1};
	int n = sizeof(a) / sizeof(int);

	BubbleSort1(a, n, 0, 0);
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
















