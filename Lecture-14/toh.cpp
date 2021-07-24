#include <iostream>
using namespace std;

void toh(int n, char source, char helper, char destination, int &steps) {
	// base case
	if (n == 0) {
		return;
	}

	// recursive case
	// 1. Take n-1 disks from src to helper
	toh(n - 1, source, destination, helper, steps);

	// 2. Take nth disk to destination from source
	cout << "Taking disk " << n << " from " << source << " to " << destination << endl;
	steps++;
	// 3. Helper se n-1 disk utha kar destination par rakh de
	toh(n - 1, helper, source, destination, steps);
}

int main() {
	int n;
	cin >> n;
	int steps = 0;
	toh(n, 'A', 'B', 'C', steps);
	cout << "Steps: " << steps << endl;

	return 0;
}
















