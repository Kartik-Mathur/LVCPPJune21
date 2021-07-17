// WavePrint.cpp
#include <iostream>
using namespace std;

int main() {

	int a[100][100];
	int r, c;
	cin >> r >> c;

	int val = 1;
	for (int row = 0 ; row < r ; row++) {
		for (int col = 0 ; col < c ; col++) {
			a[row][col] = val;
			val++;
		}
	}

	for (int row = 0 ; row < r ; row++) {
		for (int col = 0 ; col < c ; col++) {
			cout << a[row][col] << " ";
		}
		cout << endl;
	}

	for (int col = 0 ; col < c ; col++) {
		if (col % 2 == 0) {
			for (int row = 0 ; row < r ; row++) {
				cout << a[row][col] << " ";
			}
		}
		else {
			for (int row = r - 1 ; row >= 0 ; row--) {
				cout << a[row][col] << " ";
			}
		}
	}

	cout << endl;

	return 0;
}
















