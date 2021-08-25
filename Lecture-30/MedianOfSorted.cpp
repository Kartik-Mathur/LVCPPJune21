// MedianOfSorted.cpp
// https://leetcode.com/problems/median-of-two-sorted-arrays/
#include <iostream>
using namespace std;

double solve(int *a, int m, int *b, int n) {
	int s = 0;
	int e = m;

	while (s <= e) {
		int mid = (s + e) / 2;

		int p1 = mid;
		int p2 = (m + n + 1) / 2 - p1;

		int x = (p1 - 1 < 0) ? INT_MIN : a[p1 - 1];
		int y = (p1 == m) ? INT_MAX : a[p1];

		int k = (p2 - 1 < 0) ? INT_MIN : b[p2 - 1];
		int l = (p2 == n) ? INT_MAX : b[p2];

		if (x <= l and k <= y) {
			if ((m + n) % 2 == 0) {
				return (max(x, k) + min(y, l)) / 2.0;
			}
			else {
				return max(x, k);
			}
		}
		else if (x > l) {
			e = p1 - 1;
		}
		else {
			s = p1 + 1;
		}
	}
	return -1;
}


int main() {
	int a[] = {1, 4, 8, 10};
	int b[] = {2, 3, 5, 6, 7, 12};
	// m<n
	int m = sizeof(a) / sizeof(int);
	int n = sizeof(b) / sizeof(int);

	cout << solve(a, m, b, n) << endl;

	return 0;
}
















