// MaxSumSubArrayOpt.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {0, 1, -2, 4, 1, -3, 5};
	int n = sizeof(a) / sizeof(int), max_sum = INT_MIN;

	int csum[100] = {0};

	for (int i = 1 ; i < n ; i ++) {
		csum[i] = a[i] + csum[i - 1];
	}

	// for (int i = 0 ; i < n ; i ++) {
	// 	cout << csum[i] << " ";
	// }
	// cout << endl;

	for (int i = 1 ; i < n ; i ++) {
		for (int j = i ; j < n ; j++) {
			int sum = csum[j] - csum[i - 1];

			if (sum > max_sum) {
				max_sum = sum;
			}
			// cout << endl;
		}
	}

	cout << "Maximum Sum is : " << max_sum << endl;

	return 0;
}
















