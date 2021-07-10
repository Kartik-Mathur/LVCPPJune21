// Test.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int stars = 2, spaces = (pow(2, n / 2) - 2) / 2;
	// cout << spaces << endl;
	for (int i = 0 ; i < n ; i += 2) {
		// space
		for (int i = 0 ; i < n - i * 2 ; i++) {
			cout << " ";
		}
		// stars
		for (int i = 0 ; i < stars ; i++) {
			cout << "*";
		}
		cout << endl;

		// space
		for (int i = 0 ; i <  n - i * 2  ; i++) {
			cout << " ";
		}
		// stars
		for (int i = 0 ; i < stars ; i++) {
			cout << "*";
		}


		stars *= 2;
		// spaces--;
		cout << endl;
	}

	return 0;
}
















