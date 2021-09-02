#include <iostream>
using namespace std;
int ways(int i, int j, int dp[][100]) {
	// base case
	if (i == 0 and j == 0) {
		return dp[i][j] = 1;
	}
	if (i < 0 || j < 0) {
		return 0;
	}
	if (dp[i][j] != 0) {
		return dp[i][j];
	}

	// recursive case
	return dp[i][j] = ways(i - 1, j, dp) + ways(i, j - 1, dp);

}

int bottomUp(int n, int m) {
	int dp[100][100] = {0};

	for (int i = 0 ; i <= n ; i ++) {
		for (int j = 0 ; j <= m ; j++) {
			if (i == 0 || j == 0) {
				dp[i][j] = 1;
			}
			else {
				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			}
		}
	}
	for (int i = 0 ; i <= n ; i ++) {
		for (int j = 0 ; j <= m ; j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	return dp[n][m];
}

int main() {

	int i, j;
	int dp[100][100] = {0};
	cin >> i >> j;
	int n = i, m = j;
	cout << ways(i, j, dp) << endl;
	for (int i = 0 ; i <= n ; i ++) {
		for (int j = 0 ; j <= m ; j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	cout << bottomUp(i, j) << endl;

	return 0;
}
















