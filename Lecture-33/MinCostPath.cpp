// MinCostPath.cpp
#include <iostream>
#include <climits>
using namespace std;

int MinCostPath(int cost[][10], int i, int j, int dp[][100]) {
	// base case
	if (i == 0 and j == 0) {
		return dp[i][j] = cost[i][j];
	}
	if (i < 0 || j < 0 ) {
		return INT_MAX;
	}

	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	// recursive case
	return dp[i][j] = min(MinCostPath(cost, i - 1, j, dp), MinCostPath(cost, i, j - 1, dp)) + cost[i][j];
}

int bottomUp(int cost[][10], int n, int m) {
	int dp[100][100] = {0};
	for (int i = 0 ; i <= n ; i++) {
		for (int j = 0 ; j <= m ; j++) {
			if (i == 0 and j == 0) {
				dp[i][j] = cost[i][j];
			}
			else {
				int op1 = (i - 1 >= 0) ? dp[i - 1][j] : INT_MAX;
				int op2 = (j - 1 >= 0) ? dp[i][j - 1] : INT_MAX;
				dp[i][j] = min(op1, op2) + cost[i][j];
			}
		}
	}
	return dp[n][m];
}

int main() {
	int cost[][10] = {
		{1, 10, 20, 30},
		{4, 5, 1, 8},
		{1, 6, 1, 9},
		{2, 1, 1, 1},
		{4, 8, 10, 1}
	};
	int dp[100][100];
	memset(dp, -1, sizeof(dp));

	cout << MinCostPath(cost, 4, 3, dp) << endl;
	cout << bottomUp(cost, 4, 3) << endl;

	return 0;
}
















