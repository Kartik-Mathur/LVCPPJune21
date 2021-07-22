// Check7.cpp
#include <iostream>
using namespace std;

bool Check7(int *a, int n) {
	// base case
	if (n == 0) {
		return false;
	}

	// recursive case
	if (a[0] == 7) {
		return true;
	}

	bool ans = Check7(a + 1, n - 1);
	return ans;
}

int first7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return -1;
	}

	// recursive case
	if (a[i] == 7) {
		return i;
	}
	int ans = first7(a, n, i + 1);
	return ans;
}

void All7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return;
	}

	// recursive case
	if (a[i] == 7) {
		cout << i << " ";
		// return i;
	}
	All7(a, n, i + 1);
}

int first_7(int *a, int n) {
	// base case
	if (n == 0) {
		return -1;
	}

	// recursive case
	if (a[0] == 7) {
		return 0;
	}
	int ans = first_7(a + 1, n - 1);
	if (ans == -1) {
		return -1;
	}
	else {
		return ans + 1;
	}
}

int main() {

	int a[] = {1, 4, 3, 71, 7, 7, 7, 7, 7, 6};
	int n = sizeof(a) / sizeof(int);

	if (Check7(a, n)) {
		cout << "Hai Yaha 7" << endl;
	}
	else {
		cout << "Nahi Hai Yaha 7" << endl;
	}

	cout << first7(a, n, 0) << endl;
	cout << first_7(a, n) << endl;
	cout << "All 7: " << endl;
	All7(a, n, 0);
	return 0;
}
















