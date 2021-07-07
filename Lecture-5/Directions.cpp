// Directions.cpp
#include <iostream>
using namespace std;

int main() {

	int x = 0, y = 0;

	char ch = cin.get();
	while (ch != '\n') {

		if (ch == 'S') {
			y--;
		}
		else if (ch == 'N') {
			y++;
		}
		else if (ch == 'E') {
			x++;
		}
		else
			x--;
		ch = cin.get();
	}

	if (x >= 0 && y >= 0) {
		// 1st Quad
		for (int i = 0 ; i < x ; i++) {
			cout << 'E';
		}
		for (int i = 0 ; i < y ; i++) {
			cout << 'N';
		}
	}
	else if (x <= 0 && y >= 0) {
		// 2nd quad
		for (int i = 0 ; i < y ; i++) {
			cout << 'N';
		}
		x *= -1;
		for (int i = 0 ; i < x ; i++) {
			cout << 'W';
		}
	}
	else if (x <= 0 && y <= 0) {
		// 3rd quad
		x *= -1;
		y *= -1;
		for (int i = 0 ; i < y ; i++) {
			cout << 'S';
		}
		for (int i = 0 ; i < x ; i++) {
			cout << 'W';
		}
	}
	else {
		// 4th quad
		y *= -1;
		for (int i = 0 ; i < x ; i++) {
			cout << 'E';
		}
		for (int i = 0 ; i < y ; i++) {
			cout << 'S';
		}
	}
	cout << endl;

	return 0;
}
















