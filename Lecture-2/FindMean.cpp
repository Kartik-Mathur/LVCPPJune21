// FindMean.cpp
#include <iostream>
#include <climits> // INT_MAX: 2^31-1 and INT_MIN: -2^31
using namespace std;

int main() {

	int n, sum = 0, i, no, largest = INT_MIN, smallest = INT_MAX;

	cin >> n;

	i = 1;
	while (i <= n) {
		cin >> no;

		if (no > largest) {
			largest = no;
		}

		if (no < smallest) {
			smallest = no;
		}

		sum = sum + no;

		i = i + 1;
	}

	int mean = sum / n;
	cout << "Mean : " << mean << endl;
	cout << "Largest : " << largest << endl;
	cout << "smallest : " << smallest << endl;

	return 0;
}
















