#include <iostream>
using namespace std;
// Declare the function before and use it later anywhere in the program
// int factorial(int n) : Function Declaration
// int factorial(int); // or int factorial(int n);
// int nCr(int, int); // or int nCr(int n, int r); // or int nCr(int x, int y);

int factorial(int n) { // Definition
	int ans = 1;
	for (int i = 1 ; i <= n ; i++) {
		ans *= i;
	}
	return ans;
}

int nCr(int n, int r) {
	int ans = factorial(n) / (factorial(r) * factorial(n - r));
	return ans;
}

int main() {
	int n;
	cout << nCr(5, 2) << endl;

	return 0;
}
