// 2DArrayDMA.cpp
#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int **a = new int*[n];

	for (int i = 0 ; i < n ; i++) {
		a[i] = new int[m];
	}

	int number = 1;
	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < m ; j++) {
			a[i][j] = number++;
		}
	}

	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < m ; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
















