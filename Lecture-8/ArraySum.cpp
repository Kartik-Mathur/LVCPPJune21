// ArraySum.cpp
#include <iostream>
using namespace std;

void ArraySum(int a[], int n) {
	int sum = 0;
	for (int i = 0 ; i < n ; i++) {
		sum += a[i];
	}
	cout << "Sum: " << sum << endl;
}

int FindSum(int a[], int n) {
	int sum = 0;
	for (int i = 0 ; i < n ; i++) {
		sum += a[i];
	}

	return sum;
}

int main() {
	int a[] = {5, 4, 2, 3, 1, 0};
	int n = sizeof(a) / sizeof(int);

	ArraySum(a, n);
	// cout << FindSum(a, n) << endl;
	int ans = FindSum(a, n);
	cout << ans << endl;
	return 0;
}
















