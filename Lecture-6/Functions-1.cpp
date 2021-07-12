// Functions - 1.cpp
#include <iostream>
using namespace std;

int add(int a, int b) {
	// return a + b;
	int ans = a + b;
	return ans;
}

float addFloat(float a, float b) {
	// return a + b;
	float ans = a + b;
	return ans;
}


int main() {

	int a = 10, b = 20;
	// cout << (a + b) * 10;
	int ans = add(a, b);
	cout << ans * 10 << endl;

	cout << add(10, 30) << endl;

	cout << ans << endl;


	float x = 10.11, y = 11.11;
	float z = addFloat(x, y);

	cout << z << endl;

	return 0;
}
















