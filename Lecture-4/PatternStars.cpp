// PatternStars.cpp
#include <iostream>
using namespace std;

int main() {

	int n, row;
	cin >> n;

	for (row = 1; row <= n ; row++) {
		// Print row times stars
		for (int i = 1 ; i <= row ; i++) {
			cout << "*";
		}
		cout << " ";

		// Print n-row+1 stars
		for (int i = 1 ; i <= n - row + 1 ; i++) {
			cout << "*";
		}
		cout << " ";

		// Print n-row+1 stars
		for (int i = 1 ; i <= n - row + 1 ; i++) {
			cout << "*";
		}

		cout << " ";

		// Print row times stars
		for (int i = 1 ; i <= row ; i++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
















