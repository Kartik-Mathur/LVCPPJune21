#include <iostream>
using namespace std;

// void PrintArray(int a[100], int n) { // Option-1, mention the size of the array
void PrintArray(int a[], int n) { // Option-2, skip the size
	cout << "Printing: ";
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void UpdateArray(int a[], int n) {
	for (int i = 0 ; i < n ; i++) {
		a[i] += 20;
	}
}

int main() {

	int a[] = {1, 2, 3, 6, 5, 4};
	// int n = sizeof(a) / sizeof(int);
	int n = 6;

	PrintArray(a, n);
	UpdateArray(a, n);
	PrintArray(a, n);


	return 0;
}
















