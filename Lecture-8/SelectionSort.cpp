// SelectionSort.cpp
#include <iostream>
using namespace std;
void PrintArray(int a[], int n) {
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void SelectionSort(int a[], int n) {
	for (int i = 0 ; i < n - 1; i ++) {
		int min = i;
		for (int j = i + 1; j < n ; j++) {
			if (a[min] > a[j]) {
				min = j;
			}
		}
		swap(a[min], a[i]);
	}
}

int main() {

	int a[] = {5, 4, 7, 6, 2, 3, 1, 0};
	int n = sizeof(a) / sizeof(int);

	PrintArray(a, n);
	SelectionSort(a, n);
	PrintArray(a, n);

	return 0;
}
















