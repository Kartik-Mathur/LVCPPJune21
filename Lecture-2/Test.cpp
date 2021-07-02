#include <iostream>
using namespace std;

int main() {

	int a = 10, b = 10, c; // a,b,c will be of type int
	// float f = 0, f1 = 0, f2 = 0; // f,f1,f2 will of type float
	/*
		This is a
		Multile line
		Comment
	*/

	cout << a << " " << b << '\n'; // '\n' === endl, endl is end of line

	// int a = 5;
	// if (a > 0) {
	// 	cout << "Hello" << endl;
	// }
	// else {
	// 	cout << "a is less than 0" << endl;
	// }

	if (a > 0 && a <= 10) {
		cout << "Coding" << endl;
	}
	else if (a > 10 && a <= 20) {
		cout << "Blocks" << endl;
	}
	else if (a > 20 && a <= 30) {
		cout << "Coding Blocks" << endl;
	}
	else {
		cout << "Welcome to Coding blocks" << endl;
	}

	if (b > 2) {
		cout << "Yaay!!" << endl;
	}
	return 0;
}
















