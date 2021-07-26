// NStairCase.cpp
#include <iostream>
using namespace std;

int stairs(int n) {
	// base case
	if (n == 0) {
		return 1;
	}

	if (n < 0) {
		return 0;
	}

	// recursive case
	return stairs(n - 1) + stairs(n - 2) + stairs(n - 3);
}

int NStairs(int n, int k) { // Given, k<=n
	// base case
	if (n == 0) {
		return 1;
	}

	if (n < 0) {
		return 0;
	}

	// recursive case
	int ans = 0;

	// ans = NStairs(n-1)+NStairs(n-2)+NStairs(n-3)+NStairs(n-4)+ .... + NStairs(n-k);
	for (int i = 1 ; i <= k ; i++) {
		ans += NStairs(n - i, k);
	}

	return ans;
}

int main() {

	int n, k;
	cin >> n >> k;

	for (int i = 0 ; i <= n ; i++) {
		cout << i << "th Stair ways: " << stairs(i) << endl;
	}
	// cout << NStairs(n, k) << endl;

	return 0;
}
















