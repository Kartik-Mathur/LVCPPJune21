// SubarraySumK.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 0, 2, 1};
	int n = sizeof(a) / sizeof(int);
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	int k = 6, ans = 0;

	for (int i = 0 ; i < n ; i++) {
		int sum = 0;
		for (int j = i ; j < n; j ++) {
			sum += a[j];
			if (sum == k) {
				cout << "Subarray : [" << i << "," << j << "]" << endl;
				ans++;
			}
		}
	}

	cout << "Total Subarrays of Sum " << k << " : " << ans << endl;

	return 0;
}
















