// SwitchCase.cpp
#include <iostream>
using namespace std;

int main() {

	// only applicable on two things, int or char
	char ch;
	cin >> ch;

	switch (ch) {
	case 'n' :
	case 'N' :
		cout << "North" << endl;
		break;
	case 'e' :
	case 'E' :
		cout << "East" << endl;
		break;
	case 's':
	case 'S':
		cout << "South" << endl;
		break;
	case 'w':
	case 'W':
		cout << "West" << endl;
		break;
	default :
		cout << "Not a Valid Input" << endl;
	};

	// if (ch == 'N' || ch  == 'n') {
	// 	cout << "North" << endl;
	// }
	// else if (ch == 'E' || ch  == 'e') {
	// 	cout << "East" << endl;
	// }
	// else{

	// }
	return 0;
}
















