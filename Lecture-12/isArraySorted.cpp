// isArraySorted.cpp
#include <iostream>
using namespace std;

bool isSorted(int *a, int n) {
	// base case
	if (n == 1 || n == 0) {
		return true;
	}

	// recursive case
	bool ChotaSortedHai = isSorted(a + 1, n - 1); // Pure assumption
	if (ChotaSortedHai == true and a[0] <= a[1]) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int a[] = { 1, 4, 5, 6, 8 , 17};
	int n = sizeof(a) / sizeof(int);

	bool ans = isSorted(a, n);
	if (ans == true) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}

