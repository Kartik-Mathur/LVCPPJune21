#include <iostream>
using namespace std;

int factorial(int n) {
	// base case
	if (n == 0) {
		return 1;
	}

	// recursive, factorial(n) = n * factorial(n-1)
	// int chotaAns = factorial(n - 1); // Pure assumption that recursion will give us the answer

	// int BadaAns = n * chotaAns;
	// return BadaAns;
	return n * factorial(n - 1);
}

int main() {

	int n;
	cin >> n;

	cout << factorial(n) << endl;

	return 0;
}
















