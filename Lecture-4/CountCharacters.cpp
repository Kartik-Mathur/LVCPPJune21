// CountCharacters.cpp
#include <iostream>
using namespace std;

int main() {

	char ch;
	int cnt = 0;
	int digit = 0;
	int alphabets = 0;
	int other = 0;
	int spaces = 0;

	ch = cin.get();
	while (ch != '$') {
		if (ch >= 'A' and ch <= 'Z' || ch >= 'a' and ch <= 'z') {
			alphabets++;
		}
		else if (ch == ' ' || ch == '\n' || ch == '\t') {
			spaces++;
		}
		else if (ch >= '0' and ch <= '9') {
			digit++;
		}
		else {
			other++;
		}

		ch = cin.get();
	}

	cout << "Alphabets : " << alphabets << endl;
	cout << "Spaces : " << spaces << endl;
	cout << "Digit : " << digit << endl;
	cout << "Other Special : " << other << endl;


	// cin >> ch;
	// ch = cin.get();
	// while (ch != '$') {
	// 	cnt++;

	// 	// cin >> ch;
	// 	ch = cin.get();
	// }

	// cout << "Total Characters : " << cnt << endl;

	return 0;
}
















