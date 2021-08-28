// MinCoins.cpp
#include <iostream>
using namespace std;

int topDown(int *deno, int m, int n, int *dp) {
	// base case
	if (n == 0) {
		return dp[n] = 0;
	}
	if (dp[n] != -1) {
		return dp[n];
	}
	// deno[] = {10,20,30}
	// n = 5
	int ans = INT_MAX;
	// recursive case
	for (int i = 0 ; i < m ; i++) {
		int sikka = deno[i];
		if (n - sikka >= 0) {
			int chotiAmt = n - sikka;
			int chotiAmtKeSikke = topDown(deno, m, chotiAmt, dp);
			if (chotiAmtKeSikke != INT_MAX) {
				ans = min(ans, chotiAmtKeSikke + 1);
			}
		}
	}

	return dp[n] = ans; // That it will return INT_MAX, if answer is not possible
}


int MinCoins(int *deno, int m, int n) {
	// base case
	if (n == 0) {
		return 0;
	}
	// deno[] = {10,20,30}
	// n = 5
	int ans = INT_MAX;
	// recursive case
	for (int i = 0 ; i < m ; i++) {
		int sikka = deno[i];
		if (n - sikka >= 0) {
			int chotiAmt = n - sikka;
			int chotiAmtKeSikke = MinCoins(deno, m, chotiAmt);
			if (chotiAmtKeSikke != INT_MAX) {
				ans = min(ans, chotiAmtKeSikke + 1);
			}
		}
	}

	return ans; // That it will return INT_MAX, if answer is not possible
}

int bottomUp(int n, int *deno, int m) {
	int dp[500000];
	for (int i = 0 ; i <= n ; i++) {
		dp[i] = INT_MAX;
	}
	dp[0] = 0;
	for (int i = 1 ; i <= n ; i++) {
		for (int j = 0 ; j < m ; j++) {
			int sikka = deno[j];
			int chotiAmt = i - sikka;
			if (chotiAmt >= 0 ) {
				if (dp[chotiAmt] != INT_MAX) {
					dp[i] = min(dp[i], dp[chotiAmt] + 1);
				}
			}
		}
	}
	return dp[n];
}

int main() {

	int deno[] = {1, 3, 7, 10, 13, 17, 18}; // 1034576
	int m = sizeof(deno) / sizeof(int);
	int n;
	cin >> n;
	int dp[500000];
	for (int i = 0 ; i <= n ; i++) {
		dp[i] = -1;
	}
	cout << topDown(deno, m, n, dp) << endl;
	cout << bottomUp(n, deno, m) << endl;
	cout << MinCoins(deno, m, n) << endl;


	return 0;
}
















