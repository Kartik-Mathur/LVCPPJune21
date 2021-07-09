// InsertionSort.cpp
#include <iostream>
using namespace std;

int main() {

	// int a[] = {5, 1, 2, 13, 10, 0, 3, 4};
	// int n = sizeof(a) / sizeof(int), i , j;

	int a[100];
	int n, i , j;
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}

	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	for (i = 1 ; i < n ; i++) {
		int pc = a[i];
		// for (j = i - 1 ; j >= 0 ; j--) {
		// 	if (a[j] > pc) {
		// 		a[j + 1] = a[j];
		// 	}
		// 	else {
		// 		break;
		// 	}
		// }
		// a[j + 1] = pc; // or

		for (j = i - 1 ; j >= 0 && a[j] > pc ; j--) {
			a[j + 1] = a[j];
		}
		a[j + 1] = pc;
	}
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
















