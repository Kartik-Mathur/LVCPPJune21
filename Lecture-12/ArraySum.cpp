// ArraySum.cpp
#include <iostream>
using namespace std;

int sum(int *a, int n) {
	// base case
	if (n == 0) {
		return 0;
	}

	// recursive case
	return a[0] + sum(a + 1, n - 1);
}

int sum1(int *a, int n, int i) {
	// base case
	if (i == n) {
		return 0;
	}

	// recursive case
	return a[i] + sum1(a, n, i + 1);
}

int sum2(int *a, int n) {
	// base case
	if (n == 0) {
		return 0;
	}

	// recursive case
	return sum2(a, n - 1) + a[n - 1];
}

int main() {

	int a[] = { 1, 4, 5, 4, 6, 10};
	int n = sizeof(a) / sizeof(int);

	cout << sum(a, n) << endl;
	cout << sum1(a, n, 0) << endl;
	cout << sum2(a, n) << endl;
	return 0;
}
















