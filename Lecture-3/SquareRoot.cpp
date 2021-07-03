// SquareRoot.cpp
#include <iostream>
using namespace std;

int main() {

	int n ;
	cin >> n;

	float i;

	float inc = 1;
	i = 1;
	int current_precision = 0;
	int total_precision = 3;

	while (current_precision <= total_precision) {
		while (i * i <= n) {
			i = i + inc;
		}
		i = i - inc;

		inc = inc / 10;
		current_precision = current_precision + 1;
	}


	cout << i << endl;

	return 0;
}
















