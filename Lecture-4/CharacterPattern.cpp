// CharacterPattern.cpp
#include <iostream>
using namespace std;

int main() {
	int n, row, i;
	char ch;

	cin >> n;

	for (row = 1; row <= n ; row++) {
		char ch = 'A';
		// increasing characters n-row+1 times
		for (i = 1 ; i <= n - row + 1 ; i++) {
			cout << ch;
			ch++;
		}
		// cout << " AL: " << ch;
		// ch = 'A' + n - row;
		ch--;

		for (i = 1 ; i <= n - row + 1 ; i++) {
			cout << ch;
			ch--;
		}
		cout << endl;
	}

	return 0;
}
















