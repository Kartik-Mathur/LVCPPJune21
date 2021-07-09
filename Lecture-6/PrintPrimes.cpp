// PrintPrimes.cpp
#include <iostream>
using namespace std;

void PrintPrimes(int n) {
	for (int no = 2; no <= n; no++) {

		bool isPrime = true;
		for (int i = 2; i < no ; i++) {
			if (no % i == 0) {
				isPrime = false;
			}
		}

		if (isPrime == true) {
			cout << no << " ";
		}
	}
	cout << endl;
}

int main() {

	int n;
	cin >> n;
	PrintPrimes(n);

	return 0;
}
















