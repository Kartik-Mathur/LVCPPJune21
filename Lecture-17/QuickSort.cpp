// QuickSort.cpp
#include <iostream>
using namespace std;

int CreatePartition(int *a, int s, int e) {
	int i = s - 1;
	for (int j = s ; j <= e - 1 ; j++) {
		if (a[e] >= a[j]) {
			i++;
			swap(a[j], a[i]);
		}
	}
	swap(a[i + 1], a[e]);
	return i + 1;
}

void QuickSort(int *a, int s, int e) {
	// base case
	if (s >= e) {
		return;
	}
	int p = CreatePartition(a, s, e);
	QuickSort(a, s, p - 1);
	QuickSort(a, p + 1, e);
}

int main() {

	int a[] = {2, 8, 7, 1, 5, 3, 4};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	QuickSort(a, 0, n - 1);
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
















