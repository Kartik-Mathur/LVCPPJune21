// PrintPattern - 1.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int row = 1, spaces, no, i;
	while (row <= n) {
		// 1. Print n-row times spaces
		spaces = 1;
		while (spaces <= n - row) {
			cout << ' ';
			spaces = spaces + 1;
		}

		// 2. Print increasing numbers, row times, starting from no = row
		no = row;
		i = 1;
		while (i <= row) {
			cout << no;
			no = no + 1;

			i = i + 1;
		}

		// 3. Print decreasing numbers, row-1 times, starting from no = no-2;
		// no = no - 2; // decreasing numbers print will start from no-2
		no = 2 * row - 2;
		i = 1;
		while (i <= row - 1) {
			cout << no;
			no = no - 1;

			i = i + 1;
		}

		// 4. Print '\n'
		cout << '\n';
		row = row + 1;
	}




	// int no = 4;

	// int i = 1;
	// while (i <= 4) {
	// 	cout << no << " ";
	// 	no = no + 1;
	// 	i = i + 1;
	// }

	// cout << endl << "No: " << no << endl;

	return 0;
}
















