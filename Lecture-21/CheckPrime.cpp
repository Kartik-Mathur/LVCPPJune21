// CheckPrime.cpp
#include <iostream>
using namespace std;

bool isPrime(int n) {
	// i <= sqrt(n)
	// i*i <= n
	for (int i = 2; i * i <= n ; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {

	int n;
	cin >> n;

	for (int i = 2 ; i <= n ; i++) {
		if (isPrime(i)) {
			cout << i << " ";
		}
	}
	cout << endl;
	// if (isPrime(n)) {
	// 	cout << "Prime" << endl;
	// }
	// else {
	// 	cout << "Not Prime" << endl;
	// }


	return 0;
}
















