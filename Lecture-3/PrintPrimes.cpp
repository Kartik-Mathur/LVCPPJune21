// PrintPrimes.cpp
#include <iostream>
using namespace std;

int main() {

	int n, no, i;
	cin >> n;
	cout << "Prime Numbers : ";
	for (no = 2; no <= n; no++) {

		bool isPrime = true;
		for (i = 2; i < no ; i++) {
			if (no % i == 0) {
				isPrime = false;
			}
		}

		if (isPrime == true) {
			cout << no << " ";
		}
	}

	cout << endl;
	return 0;
}
















