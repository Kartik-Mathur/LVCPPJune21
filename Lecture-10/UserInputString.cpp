// UserInputString.cpp
#include <iostream>
using namespace std;

void readString(char *a, int s, char delimiter = '\n') {
	char ch;
	ch = cin.get();

	int i = 0;
	while (ch != delimiter and i < s - 1) { // 1 2 3 ... s - 1, 0 1 2 .... s-2
		a[i] = ch;
		i++;

		ch = cin.get();
	}
	a[i] = '\0';
}

void PrintString(char *a) {
	for (int i = 0 ; a[i] != '\0' ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {

	char a[100];
	// cin >> a;
	// readString(a, 7);
	// cin.getline(array name, size, delimiter); // by default delimiter is '\n'
	cin.getline(a, 100, '$');


	PrintString(a);

	cout << a << endl;
	// for (int i = 0 ; a[i] != '\0' ; i++) {
	// 	cout << a[i] << " ";
	// }
	// cout << endl;
	return 0;
}
















