// WineProblem.cpp
#include <iostream>
using namespace std;

int WineProblem(int *prices, int i, int j, int day) {
	// base case
	if (i > j) {
		return 0;
	}

	// recursive case
	int op1 = prices[i] * day + WineProblem(prices, i + 1, j, day + 1);
	int op2 = prices[j] * day + WineProblem(prices, i , j - 1, day + 1);

	return max(op1, op2);
}

int topDown(int *prices, int i, int j, int day, int dp[][100]) {
	// base case
	if (i > j) {
		return dp[i][j] = 0;
	}

	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	// recursive case
	int op1 = prices[i] * day + topDown(prices, i + 1, j, day + 1, dp);
	int op2 = prices[j] * day + topDown(prices, i , j - 1, day + 1, dp);

	return dp[i][j] = max(op1, op2);
}

int bottomUp(int *prices, int n) {
	int dp[100][100] = {0};

	// Filling the diagonal Values
	for (int i = 0 ; i < n ; i++) {
		dp[i][i] = prices[i] * n;
	}

	for (int i = n - 2 ; i >= 0 ; i--) {
		for (int j = 0 ; j < n ; j++) {
			if (i < j) {
				int day = n - (j - i);
				int op1 = prices[i] * day + dp[i + 1][j];
				int op2 = prices[j] * day + dp[i][j - 1];
				dp[i][j] = max(op1, op2);
			}
		}
	}

	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < n ; j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	return dp[0][n - 1];
}

int main() {

	int prices[] = {2, 3, 5, 1, 4};
	int n = sizeof(prices) / sizeof(int);

	int dp[100][100];
	for (int i = 0 ; i < 100 ; i++) {
		for (int j = 0; j < 100; ++j)
		{
			dp[i][j] = -1;
		}
	}


	cout << topDown(prices, 0, n - 1, 1, dp) << endl;
	cout << bottomUp(prices, n) << endl;
	cout << WineProblem(prices, 0, n - 1, 1) << endl;

	return 0;
}
















