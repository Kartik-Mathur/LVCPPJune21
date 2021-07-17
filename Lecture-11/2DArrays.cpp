// 2DArrays.cpp
#include <iostream>
using namespace std;

int main() {
	// Initialization of 2-D Array
	int a[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	for (int r = 0 ; r < 3 ; r++) {
		for (int c = 0 ; c < 3 ; c++) {
			cout << a[r][c] << " ";
		}
		cout << endl;
	}

	char c[][5] = {
		{'A', 'M', 'A', 'N', '\0'},
		{'T', 'O', 'M', 'S', '\0'},
		{'M', 'O', 'M', '\0'}
	};

	char d[][5] = {
		"AMAN",
		"TOMS",
		"MOM"
	};

	cout << c[0] << endl;
	cout << c[1] << endl;
	cout << c[2] << endl;


	return 0;
}
















