// NStairs.cpp
#include <iostream>
using namespace std;

int topDown(int n, int k, int *dp) {
	if (n == 0) {
		return dp[n] = 1;
	}
	if (n < 0) {
		return 0;
	}

	if (dp[n] != 0) {
		return dp[n];
	}

	int ans = 0;

	for (int i = 1 ; i <= k ; i++) {
		ans += topDown(n - i, k, dp);
	}
	return dp[n] = ans;
}

int bottomUp(int n, int k) {
	int dp[100] = {0};

	dp[0] = 1;
	for (int i = 1; i <= n ; i++) {
		for (int j = 1 ; i - j >= 0 and j <= k ; j++) {
			dp[i] += dp[i - j];
		}
	}
	return dp[n];
}

int fastStairs(int n, int k) {
	int dp[100] = {0};

	dp[0] = dp[1] = 1;
	for (int i = 2; i <= n ; i++) {
		// if (i - 1 - k >= 0 ) {
		// 	dp[i] = 2 * dp[i - 1] -  dp[i - 1 - k];
		// }
		// else {
		// 	dp[i] = 2 * dp[i - 1];
		// }
		dp[i] = 2 * dp[i - 1] -  (i - 1 - k >= 0 ? dp[i - 1 - k] : 0);
	}
	for (int i = 0 ; i <= n ; i++) {
		cout << dp[i] << " ";
	}
	cout << endl;
	return dp[n];
}

int main() {

	int n = 10, k = 3;
	int dp[1000] = {0};
	cout << topDown(n, k, dp) << endl;
	cout << bottomUp(n, k) << endl;
	cout << fastStairs(n, k) << endl;

	return 0;
}
















