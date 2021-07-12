// BinarySearch.cpp
#include <iostream>
using namespace std;

void PrintArray(int a[], int n) {
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int BinarySearch(int a[], int n, int key) {
	int s = 0, e = n - 1;

	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] == key) {
			// cout << "Key Found at " << mid << endl;
			return mid; // if key is found that index will be returned
		}
		else if (a[mid] < key) {
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
	}
	return -1; // If key is not found
}

int main() {
	int a[] = {1, 4, 5, 8, 9, 10};
	int n = sizeof(a) / sizeof(int);
	PrintArray(a, n);
	int key;
	cin >> key;
	int s = 0, e = n - 1;

	int ans = BinarySearch(a, n, key);
	if (ans != -1) {
		cout << "Key found at " << ans << endl;
	}
	else {
		cout << "Key Nahi Milli" << endl;
	}

	// while (s <= e) {
	// 	int mid = (s + e) / 2;
	// 	if (a[mid] == key) {
	// 		cout << "Key Found at " << mid << endl;
	// 		break;
	// 	}
	// 	else if (a[mid] < key) {
	// 		s = mid + 1;
	// 	}
	// 	else {
	// 		e = mid - 1;
	// 	}
	// }

	// if (s > e) {
	// 	cout << "Key Nahi Milli" << endl;
	// }

	return 0;
}
