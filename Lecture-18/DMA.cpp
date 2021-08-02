#include <iostream>
using namespace std;

int* createArray(int n) {
	int *a = new int[n];
	int number = 1;
	for (int i = 0 ; i < n ; i++) {
		a[i] = number;
		number += 2;
	}

	return a;
}


int main() {


	int n;
	cin >> n;
	int *arr = createArray(n);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	// int *a = new int[n];

	// for (int i = 0 ; i < n ; i++) {
	// 	a[i] = i + 1;
	// }

	// for (int i = 0; i < n; ++i)
	// {
	// 	cout << a[i] << " ";
	// }
	// cout << endl;

	// delete[] a;
	// a = NULL;


	// int *x = new int;
	// *x = 10;
	// cout << "X: " << *x << endl;
	// *x = 20;
	// cout << "X: " << *x << endl;

	// for (int i = 0; i < n; ++i)
	// {
	// 	cout << a[i] << " ";
	// }
	// cout << endl;
	return 0;
}
















