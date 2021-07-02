// isPrime.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int i = 2;
	while (i < n) {
		if (n % i == 0) {
			cout << "Not Prime" << endl;
			return 0; // exit
		}

		i = i + 1;
	}

	cout << "Prime" << endl;
	return 0; // return 0 inside of main means exit
}


