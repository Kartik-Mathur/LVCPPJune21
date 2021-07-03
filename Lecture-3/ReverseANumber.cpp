// ReverseANumber.cpp
#include <iostream>
using namespace std;

// input : 1234
// ouput : 4321 + 100 ==> 4421
int main() {

	int n;
	cin >> n;
	int sum = 0;
	while (n > 0) {
		// cout << n % 10;
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	cout << sum + 100 << endl;
	// adding random things

	return 0;
}
















