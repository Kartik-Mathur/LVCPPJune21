// MissingNumber.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 4, 2, 3, 1};// 0<=a[i]<=n
	int n = sizeof(a) / sizeof(int);

	// 1st Way
	int tsum = n * (n + 1) / 2;
	int sum = 0;
	for (int i = 0 ; i < n ; i++) {
		sum += a[i];
	}

	cout << "Missing Element " << tsum - sum << endl;

	// 2nd way
	int ans = 0;
	for (int i = 0 ; i < n ; i++) {
		ans ^= a[i];
	}
	for (int i = 0 ; i <= n ; i++) {
		ans ^= i;
	}

	cout << "Missing Element " << ans << endl;


	return 0;
}
















