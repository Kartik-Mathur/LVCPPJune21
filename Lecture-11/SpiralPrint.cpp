// SpiralPrint.cpp
#include <iostream>
using namespace std;

void SpiralPrint(int a[][100], int r, int c) {

	int sr = 0, sc = 0, er = r - 1, ec = c - 1;
	while (sr <= er and sc <= ec) {
		// 1. Print sr from sc to ec
		for (int col = sc ; col <= ec ; col++) {
			cout << a[sr][col] << " ";
		}
		sr++;

		// 2. Print ec from sr to er
		for (int row = sr ; row <= er ; row++) {
			cout << a[row][ec] << " ";
		}
		ec--;

		// 3. Print er from ec to sc
		if (sr < er) {
			for (int col = ec ; col >= sc ; col--) {
				cout << a[er][col] << " ";
			}
			er--;
		}

		// 4. Print sc from er to sr
		if (sc < ec) {
			for (int row = er ; row >= sr ; row--) {
				cout << a[row][sc] << " ";
			}
			sc++;
		}
	}

	cout << endl;
}

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

	cout << "Spiral Print: " << endl;
	SpiralPrint(a, r, c);

	return 0;
}
















