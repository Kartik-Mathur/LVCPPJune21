// MergeSortedArrays.cpp
#include <iostream>
using namespace std;

void PrintArray(int a[], int n) {
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void mergeSorted(int a[], int b[], int m, int n) {
	int i = m - 1;
	int j = n - 1;
	int k = m + n - 1;

	while (i >= 0 and j >= 0) {
		if (a[i] > b[j]) {
			a[k] = a[i];
			k--;
			i--;
		}
		else {
			a[k] = b[j];
			k--;
			j--;
		}
	}

	while (j >= 0) {
		a[k] = b[j];
		k--;
		j--;
	}
}


int main() {

	int a[100] = {1, 3, 5, 6, 8, 9};
	int b[] = {2, 4, 7, 10};
	int m = 6;
	int n = 4;

	mergeSorted(a, b, m, n);
	PrintArray(a, m + n);

	return 0;
}
















