// BirthdayParadox.cpp
#include <iostream>
using namespace std;

int main() {

	int num = 365;
	double pd = 1;

	int people = 0;
	double percentage;
	cin >> percentage;
	if (percentage == 100) {
		cout << 366 << endl;
	}
	else {
		percentage /= 100;

		while (1 - pd < percentage) {
			pd = pd * num / 365;
			num--;

			people ++;

			cout << "People " << people << " Probability: " << pd << endl;
			// 1 - pd: probability of atleast two people having birthday on same day
			// 1 - pd < 0.5
		}

		cout << people << endl;
	}
	cout << 1 - 0.492703 << endl;

	return 0;
}
















