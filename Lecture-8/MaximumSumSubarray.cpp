// MaximumSumSubarray.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, -2, 4, 1, -3, 5, -10};
	int n = sizeof(a) / sizeof(int);
	int max_sum = INT_MIN;

	for (int i = 0 ; i < n ; i ++) {
		for (int j = i ; j < n ; j++) {
			int sum = 0;
			for (int k = i ; k <= j ; k ++) {
				// cout << a[k] << " ";
				sum += a[k];
			}

			if (sum > max_sum) {
				max_sum = sum;
			}
			// cout << endl;
		}
	}

	cout << "Maximum Sum is : " << max_sum << endl;
	return 0;
}
















