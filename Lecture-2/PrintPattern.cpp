// PrintPattern.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	int row, i;
	int no = 1;

	cin >> n;

	row = 1;
	while (row <= n) {
		// Write the work to be done in a particular row
		i = 1;
		while (i <= row) {

			cout << no << ' ';
			no = no + 1;

			i = i + 1;
		}

		cout << '\n';
		row = row + 1;
	}

	return 0;
}















