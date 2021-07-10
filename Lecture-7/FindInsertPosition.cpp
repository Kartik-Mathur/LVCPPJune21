// FindInsertPosition.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4};
	int n = sizeof(a) / sizeof(int);

	int t = 0;
	bool isAnsFound = false;
	for (int i = 0 ; i < n ; i++) {
		if (a[i] == t ||  a[i] > t) {
			cout << i << endl;
			isAnsFound = true;
			break;
		}
	}

	if (t > a[n - 1] and isAnsFound == false) {
		cout << n << endl;
	}

	return 0;
}
















