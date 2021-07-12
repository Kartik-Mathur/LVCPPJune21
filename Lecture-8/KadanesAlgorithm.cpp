// MaxSumSubArray.cpp
#include <iostream>
using namespace std;

int main() {
	// Kadane's Algorithm
	int a[] = {1, -2, 4, 1, -3, 5, -10};
	int n = sizeof(a) / sizeof(int);
	int max_sum = INT_MIN;
	int sum = 0;
	int start = 0, end;
	int s, e;

	for (int i = 0 ; i < n ; i++) { // Kadanes Algorithm
		sum += a[i];
		if (sum < 0) {
			sum = 0;
		}

		max_sum = max(max_sum, sum);
	}

	for (int i = 0 ; i < n ; i++) { // Finding the range (i,j) that has max sum
		sum += a[i];
		end = i;
		if (sum < 0) {
			sum = 0;
			start = i + 1;
		}

		// max_sum = max(max_sum, sum);
		if (max_sum < sum) {
			s = start;
			e = end;
			max_sum = sum;
		}
	}

	cout << "Maximum Sum : " << max_sum << endl;
	// cout << s << ", " << e << endl;
	return 0;
}
















