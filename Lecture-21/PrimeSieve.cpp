// PrimeSieve.cpp
#include <iostream>
using namespace std;

void PrimeSieve(bool *primes, int n) {

	for (int i = 2 ; i <= n ; i++) {
		if (primes[i] != false) {
			for (int j = 2 * i ; j <= n ; j += i) {
				primes[j] = false;
			}
		}
	}

	for (int i = 2 ; i <= n ; i++) {
		if (primes[i] == true) {
			cout << i << " ";
		}
	}

	cout << endl;
}

int main() {

	int n;
	cin >> n;

	bool primes[100000];

	for (int i = 0 ; i <= n ; i++) {
		primes[i] = true;
	}

	PrimeSieve(primes, n);

	return 0;
}
















