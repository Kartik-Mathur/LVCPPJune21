#include <iostream>
#include <climits>
using namespace std;

int main() {
	int l = INT_MIN;
	int a[] = {5, 1, 2, 13, 10};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0 ; i < n ; i++) {
		if (a[i] > l) {
			l = a[i];
		}
	}
	cout << "Largest: " << l << endl;
	return 0;
}
















