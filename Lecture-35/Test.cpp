#include <iostream>
using namespace std;

int topDown(int i, int j, int dp[][100]) {
	if (i == 0 and j == 0) {
		return dp[i][j] = 1;
	}
	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	int ans = 0;
	for (int k = 0 ; k <= i - 1 ; k++) {
		ans += topDown(k, j, dp);
	}
	for (int k = 0 ; k <= j - 1 ; k++) {
		ans += topDown(i, k, dp);
	}

	return dp[i][j] = ans;
}

int bottomUp(int n, int m) {
	int dp[100][100] = {0};

	for (int i = 0; i <= n ; i++) {
		for (int j = 0; j <= m ; j++) {
			if (i == 0 and j == 0) {
				dp[i][j] = 1;
			}
			else {
				int ans = 0;
				for (int k = 0 ; k <= i - 1 ; k++) {
					ans += dp[k][j];
				}
				for (int k = 0 ; k <= j - 1 ; k++) {
					ans += dp[i][k];
				}
				dp[i][j] = ans;
			}
		}
	}

	for (int i = 0; i <= n ; i++) {
		for (int j = 0; j <= m ; j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	return dp[n][m];
}

int main() {

	int i, j;
	cin >> i >> j;

	int dp[100][100];
	memset(dp, -1, sizeof(dp));

	cout << topDown(i, j, dp) << endl;
	cout << bottomUp(i, j) << endl;


	return 0;
}
