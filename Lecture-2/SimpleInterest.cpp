// SimpleInterest.cpp
#include <iostream>
using namespace std;

int main() {
	int p, r, t;
	float si;

	// 1. Take input of p,r,t
	cin >> p >> r >> t;

	// 2. Calculate si
	si = (p * r * t) / 100.0; // (1*1*10)/100 => 0.1

	// 3. Print si
	cout << "SimpleInterest is " << si << endl;

	return 0;
}
















