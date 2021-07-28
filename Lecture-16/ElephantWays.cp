// ElephantWays.cpp
#include <iostream>
using namespace std;

int ElephantWays(int i, int j) {
	// base case
	if (i == 0 and j == 0) {
		return 1;
	}

	// recursive case
	int ans = 0;
	for (int k = 0 ; k <= j - 1 ; k++) {
		ans += ElephantWays(i, k);
	}

	for (int k = 0 ; k <= i - 1 ; k++) {
		ans += ElephantWays(k, j);
	}

	return ans;
}

int main() {

	int i, j;
	cin >> i >> j;
	cout << ElephantWays(i, j) << endl;
	return 0;
}
















