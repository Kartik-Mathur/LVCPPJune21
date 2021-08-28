// Fibonacci.cpp
#include <iostream>
using namespace std;

int topDown(int n, int *dp) {
	// base case
	if (n == 0 || n == 1) {
		dp[n] = n; // before returing the answer, we need to store it
		return n;
	}
	// Its important to check agar already calculated hai toh neeche nhi jaana
	if (dp[n] != -1) {
		return dp[n];
	}

	// recursive case
	// int ans = fibo1(n - 1, dp) + fibo1(n - 2, dp);
	// dp[n] = ans;
	// return ans;
	return dp[n] = topDown(n - 1, dp) + topDown(n - 2, dp);
}

int bottomUp(int n) {
	int dp[10000];

	// Initialize
	dp[0] = 0;
	dp[1] = 1;

	for	(int i = 2 ; i <= n ; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	return dp[n];
}

int fibo(int n) {
	// base case
	if (n == 0 || n == 1) {
		return n;
	}
	// recursive case
	return fibo(n - 1) + fibo(n - 2);
}

int main() {

	int n;
	cin >> n;

	int dp[10000];
	for (int i = 0 ; i <= n ; i++) {
		dp[i] = -1;
	}
	cout << topDown(n, dp) << endl;
	// for (int i = 0 ; i <= n ; i++) cout << dp[i] << " ";
	// cout << endl;
	cout << bottomUp(n) << endl;
	cout << fibo(n) << endl;

	return 0;
}
















