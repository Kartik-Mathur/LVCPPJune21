// LCS.cpp
#include <iostream>
using namespace std;

int solve(char *s1, char *s2, int i, int j) {
	// base case
	if (s1[i] == '\0' || s2[j] == '\0') {
		return 0;
	}

	// recursive case
	if (s1[i] != s2[j]) {
		return max(solve(s1, s2, i + 1, j), solve(s1, s2, i, j + 1));
	}
	else {
		return 1 + solve(s1, s2, i + 1, j + 1);
	}

}

int topDown(char *s1, char *s2, int i, int j, int dp[][100]) {
	// base case
	if (s1[i] == '\0' || s2[j] == '\0') {
		return dp[i][j] = 0;
	}
	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	// recursive case
	if (s1[i] != s2[j]) {
		return dp[i][j] = max(topDown(s1, s2, i + 1, j, dp), topDown(s1, s2, i, j + 1, dp));
	}
	else {
		return dp[i][j] = 1 + topDown(s1, s2, i + 1, j + 1, dp);
	}
}

void printAllLCS(int len, char *s1, char *s2, int i, int j, char *ans, int dp[][100]) {
	if (len == 0) {
		cout << ans << endl;
		return;
	}

	if (s1[i - 1] == s2[j - 1]) {
		ans[len - 1] = s1[i - 1];
		printAllLCS(len - 1, s1, s2, i - 1, j - 1, ans, dp);
	}
	else {
		if (dp[i - 1][j] == dp[i][j - 1]) {
			printAllLCS(len, s1, s2, i - 1, j, ans, dp);
			printAllLCS(len, s1, s2, i, j - 1, ans, dp);
		}
		else if (dp[i - 1][j] > dp[i][j - 1]) {
			printAllLCS(len, s1, s2, i - 1, j, ans, dp);
		}
		else {
			printAllLCS(len, s1, s2, i, j - 1, ans, dp);
		}
	}
}

int bottomUp(char *s1, char *s2) {
	int dp[100][100] = {0};
	int n = strlen(s1);
	int m = strlen(s2);

	// Initialize karna hai DP ke array ko, 0th row and col will be 0
	for (int k = 0 ; k <= m ; k++) {
		dp[0][k] = 0;
	}
	for (int k = 0 ; k <= n ; k++) {
		dp[k][0] = 0;
	}

	for (int i = 1 ; i <= n ; i++) {
		for (int j = 1; j <= m; ++j)
		{
			if (s1[i - 1] != s2[j - 1]) {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
			else {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			}
		}
	}

	// for (int i = 0 ; i <= n ; i++) {
	// 	for (int j = 0; j <= m; ++j)
	// 	{
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	// Printing the LCS
	int len = dp[n][m];
	char *ans = new char[len + 1];
	ans[len] = '\0';
	// len --;
	// int i = n, j = m;
	// while (len >= 0) {
	// 	if (s1[i - 1] == s2[j - 1]) {
	// 		ans[len] = s1[i - 1];
	// 		i--;
	// 		j--;
	// 		len--;
	// 	}
	// 	else {
	// 		if (dp[i - 1][j] > dp[i][j - 1]) {
	// 			i--;
	// 		}
	// 		else {
	// 			j--;
	// 		}
	// 	}
	// }
	printAllLCS(len, s1, s2, n, m, ans, dp);
	cout << "LCS: " << ans << endl;
	return dp[n][m];
}

int main() {

	char s1[] = "coding";
	char s2[] = "coidng";
	int dp[100][100] = {0};
	memset(dp, -1, sizeof(dp));

	cout << solve(s1, s2, 0, 0) << endl;
	cout << topDown(s1, s2, 0, 0, dp) << endl;
	cout << bottomUp(s1, s2) << endl;


	return 0;
}
















