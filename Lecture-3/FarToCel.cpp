#include <iostream>
using namespace std;

int main() {

	int init = 0, fval = 300, step = 20;
	// int init, fval, step;
	// cin >> init >> fval >> step;

	int f, c;

	f = init;

	while (f <= fval) {

		c = 5 * (f - 32) / 9;

		cout << f << " " << c << endl;

		f = f + step;
	}


	return 0;
}
















