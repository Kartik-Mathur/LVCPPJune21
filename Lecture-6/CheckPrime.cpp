// CheckPrime.cpp
#include <iostream>
using namespace std;

bool CheckPrime(int no) {
	bool isPrime = true;

	for (int i = 2; i < no ; i++) {
		if (no % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {

	int n;
	cin >> n;

	bool ans = CheckPrime(n);

	if (ans == true) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}
















