// Fibonacci.cpp
#include <iostream>
using namespace std;

int fibo(int n) {
	// base case
	if (n == 0 || n == 1) {
		return n;
	}
	// recursive case
	// fibo(n) = fibo(n-1) + fibo(n-2);
	// int chotiProblem1 = fibo(n - 1);
	// int chotiProblem2 = fibo(n - 2);

	// int BadiProblem = chotiProblem1 + chotiProblem2;
	// return	BadiProblem;
	return fibo(n - 1) + fibo(n - 2);
}

int main() {

	cout << fibo(10) << endl;
	return 0;
}
















