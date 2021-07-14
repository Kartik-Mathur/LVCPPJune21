// CallByReference.cpp
#include <iostream>
using namespace std;

void Update(int *x) {
	*x = *x + 1;
}

int main() {

	int a = 10;
	// cout << a << endl;

	int *x = &a;

	cout << a << endl;

	Update(x);

	cout << a << endl;



	return 0;
}
















