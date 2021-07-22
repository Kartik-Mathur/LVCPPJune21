// BinarySearch.cpp
#include <iostream>
using namespace std;

int BinarySearch(int *a, int s, int e, int key) {
	// base case
	if (s > e) {
		return -1;
	}

	// recursive case
	int mid = (s + e) / 2;
	if (a[mid] == key) {
		return mid;
	}
	else if (a[mid] < key) {
		return BinarySearch(a, mid + 1, e, key);
	}
	else {
		return BinarySearch(a, s, mid - 1, key);
	}
}

int main() {

	int a[] = {1, 4, 6, 8, 9, 10};
	int n = sizeof(a) / sizeof(int);

	int ans = BinarySearch(a, 0, n - 1, 60);
	if (ans == -1) {
		cout << "Key not found" << endl;
	}
	else {
		cout << "Key Found at : " << ans << endl;
	}

	return 0;
}
















