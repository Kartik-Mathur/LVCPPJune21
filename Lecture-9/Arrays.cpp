// Arrays.cpp
#include <iostream>
using namespace std;

// void PrintArray(int a[], int n) {
void PrintArray(int *a, int n) {

	for (int i = 0 ; i < n ; i++) {
		cout << *(a + i) << " "; //*(a + i) == a[i]
	}
	cout << endl;
}

int main() {
	int a[] = {1, 2, 3, 4, 5, 6, 7};
	// cout << sizeof(a) << endl;
	int n = sizeof(a) / sizeof(int);

	PrintArray(a, n);
	// for (int i = 0 ; i < n ; i++) {
	// 	cout << a[i] << " ";
	// }
	// cout << endl;


	return 0;
}
















