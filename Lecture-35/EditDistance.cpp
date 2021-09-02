#include <iostream>
using namespace std;

int editDistance(char *s1, char *s2, int n, int m, int dp[][100]) {
	// base case
	if (n == 0) {
		return dp[n][m] = m;
	}

	if (m == 0) {
		return dp[n][m] = n;
	}

	if (dp[n][m] != -1) {
		return dp[n][m];
	}

	// recursive case
	if (s1[n - 1] == s2[m - 1]) {
		return dp[n][m] = editDistance(s1, s2, n - 1, m - 1, dp);
	}
	else {
		return dp[n][m] = 1 +
		                  min(editDistance(s1, s2, n, m - 1, dp), // Performing addition of jth character in s1
		                      min(editDistance(s1, s2, n - 1, m, dp), // Peforming Deletion of ith character
		                          editDistance(s1, s2, n - 1, m - 1, dp))); // Performing updation of the ith character

	}
}

int main() {

	char s1[] = "Saturday";
	char s2[] = "Sunday";

	int dp[100][100];
	memset(dp, -1, sizeof(dp));

	cout << editDistance(s1, s2, strlen(s1), strlen(s2), dp) << endl;


	return 0;
}
















