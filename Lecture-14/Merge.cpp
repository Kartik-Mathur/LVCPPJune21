// Merge.cpp
#include <iostream>
using namespace std;

void merge(int *a, int *b, int *c, int n, int m) {
	int i = 0, j = 0, k = 0;
	while (i < n and j < m) {
		if (b[i] < c[j]) {
			a[k] = b[i];
			k++;
			i++;
		}
		else {
			a[k++] = c[j++];
		}
	}

	while (i < n) {
		a[k++] = b[i++];
	}

	while (j < m) {
		a[k++] = c[j++];
	}
}

int main() {

	int a[100];
	int b[] = {2, 4, 8, 10, 11};
	int n = sizeof(b) / sizeof(int);

	int c[] = {6, 7, 9};
	int m = sizeof(c) / sizeof(int);

	merge(a, b, c, n, m);

	for (int i = 0 ; i < n + m; i++) {
		cout << a[i] << " ";
	}
	cout << endl;


	return 0;
}
















