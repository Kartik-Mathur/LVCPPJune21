// TertiaryOperator.cpp
#include <iostream>
using namespace std;

int main() {

	int a = 10;
	if (a == 10) {
		cout << "Hello" << endl;
	}
	else {
		cout << "World" << endl;
	}

	// Tertiary Operator (condition) ? (if condition is true) : (if condition is false);
	a == 10 ? cout << "Welcome" << endl : cout << "Welcome World" << endl;

	// int x = 3;
	// if (x > 3) {
	// 	x = x + 1;
	// }
	// else {
	// 	x = x - 1;
	// }
	// x > 3 ? x++ : x--;

	int x = 30, y;
	if (x > 3) {
		y = 10;
	}
	else {
		y = -10;
	}

	y = (x > 3) ? 10 : -10;
	cout << y << endl;

	return 0;
}
















