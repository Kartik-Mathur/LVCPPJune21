// ForLoop.cpp
#include <iostream>
using namespace std;

int main() {

	int i;

	i = 1;
	while (i <= 10) {

		cout << i << " ";
		i++;
	}
	cout << endl;

	for (i = 1; i <= 5 ; i++) {
		cout << i << " ";
	}
	cout << endl;

	i = 1;
	for ( ; i <= 5 ; ) {
		cout << i << " ";

		i++;
	}
	cout << endl;

	return 0;
}
















