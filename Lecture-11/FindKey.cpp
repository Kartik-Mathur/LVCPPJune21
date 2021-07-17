// FindKey.cpp
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

	int key;
	cout << "Enter Key to Search: ";
	cin >> key;
	bool iskeyPresent = false;
	for (int row = 0 ; row < r ; row++) {

		for (int col = 0 ; col < c ; col++) {
			if (a[row][col] == key) {
				cout << "Key Found at: " << row << ", " << col << endl;
				iskeyPresent = true;
				break;
			}
		}

		if (iskeyPresent == true) {
			break;
		}
	}

	if (iskeyPresent == false) {
		cout << "Key Not Found" << endl;

	}
	return 0;
}
















