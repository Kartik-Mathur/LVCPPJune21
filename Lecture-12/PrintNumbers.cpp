// PrintNumbers.cpp
#include <iostream>
using namespace std;

void printDec(int n) {
	// base case
	if (n == 0) {
		return;
	}

	// recursive case
	printDec(n - 1);
	cout << n << " ";
}

int main() {

	int n;
	cin >> n;

	printDec(n);

	return 0;
}
















