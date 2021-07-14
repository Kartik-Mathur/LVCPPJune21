// ReverseElements.cpp
#include <iostream>
using namespace std;

void reverse(int *a, int n) {
	int i = 0;
	int j = n - 1;

	while (i < j) {
		swap(a[i], a[j]);
		i++;
		j--;
	}
}

void PrintArray(int *a, int n) {

	for (int i = 0 ; i < n ; i++) {
		cout << *(a + i) << " "; //*(a + i) == a[i]
	}
	cout << endl;
}

int main() {

	int a[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(a) / sizeof(int);

	PrintArray(a, n);
	reverse(a, n);
	PrintArray(a, n);

	return 0;
}
















