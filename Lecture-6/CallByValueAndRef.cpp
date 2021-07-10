// CallByValueAndRef.cpp
#include <iostream>
using namespace std;

// void Update(int &a) { // call by reference
// 	a = a + 1;
// 	// cout << "Inside Function " << a << endl;
// }

void Update(int a) { // Call by value
	a = a + 1;
	// cout << "Inside Function " << a << endl;
}

int main() {

	int x = 10;
	cout << "Before Update X : " << x << endl;
	Update(x);
	cout << "After Update X : " << x << endl;


	return 0;
}
















