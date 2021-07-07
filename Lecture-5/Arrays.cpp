#include <iostream>
using namespace std;

int main() {

	// Create an array
	// int a[5];

	// Provide values to the buckets
	// a[0] = 10;
	// a[1] = 6;
	// a[2] = 5;
	// a[3] = 4;

// Initialization
	// int a[50] = {10, 2, 5, 4, 6};
	int a[] = {10, 2, 5, 4, 6};
	int n = sizeof(a) / sizeof(int);

	// Print
	for (int i = 0 ; i < n ; i ++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
















