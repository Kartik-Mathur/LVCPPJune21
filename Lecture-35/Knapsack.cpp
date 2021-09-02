// Knapsack.cpp
#include <iostream>
using namespace std;

int Knapsack(int *wt, int *price, int n, int capacity, int dp[][100]) {
	// base case
	if (n == 0 || capacity == 0) {
		return dp[n][capacity] = 0;
	}

	if (dp[n][capacity] != -1) {
		return dp[n][capacity];
	}

	// recursive case
	int op1 = INT_MIN, op2 = INT_MIN;
	if (wt[n - 1] <= capacity) {
		op1 = price[n - 1] + Knapsack(wt, price, n - 1, capacity - wt[n - 1], dp);
	}
	op2 = 0 + Knapsack(wt, price, n - 1, capacity, dp);

	return dp[n][capacity] = max(op1, op2);
}

int bottomUp(int *wt, int *price, int N, int Cap) {
	int dp[100][100] = {0};

	for (int n = 0 ; n <= N ; n++) {
		for (int capacity = 0 ; capacity <= Cap ; capacity++) {
			if (n == 0 || capacity == 0) {
				dp[n][capacity] = 0;
			}
			else {
				int op1 = INT_MIN, op2 = INT_MIN;
				if (capacity >= wt[n - 1]) {
					op1 = price[n - 1] + dp[n - 1][capacity - wt[n - 1]];
				}
				op2 = 0 + dp[n - 1][capacity];
				dp[n][capacity] = max(op1, op2);
			}
		}
	}

	for (int n = 0 ; n <= N ; n++) {
		for (int capacity = 0 ; capacity <= Cap ; capacity++) {
			cout << dp[n][capacity] << " ";
		}
		cout << endl;
	}
	return dp[N][Cap];

}

int main() {

	int wt[] = {2, 1, 3, 4};
	int price[] = {6, 3, 4, 5};

	int dp[100][100];
	memset(dp, -1, sizeof(dp));

	int n = 4;
	int capacity = 5;
	cout << Knapsack(wt, price, n, capacity, dp) << endl;
	cout << bottomUp(wt, price, n, capacity) << endl;

	return 0;
}