// PrintPatter01.cpp
#include <iostream>
using namespace std;

int main() {

	int n, row, i, no;
	cin >> n;

	for (row = 1 ; row <= n ; row++) {
		// work
		// Number starts from 0,even rows
		// 1, odd rows
		if (row % 2 == 0) { // even row
			no = 0;
		}
		else { // odd row
			no = 1;
		}
		// we have to print some numbers row times
		for (i = 1 ; i <= row ; i++) {
			cout << no;

			no = 1 - no;
		}

		cout << '\n';
	}

	return 0;
}
















