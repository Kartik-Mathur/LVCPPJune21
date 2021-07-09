// PrintCelAndFar.cpp
#include <iostream>
using namespace std;

void PrintTable(int init, int fval, int step) {
	int f, c;

	f = init;

	while (f <= fval) {

		c = 5 * (f - 32) / 9;

		cout << f << " " << c << endl;

		f = f + step;
	}
}

int main() {

	int init, fval, step;

	cin >> init >> fval >> step;
	PrintTable(init, fval, step);

	cin >> init >> fval >> step;
	PrintTable(init, fval, step);

	return 0;
}
















