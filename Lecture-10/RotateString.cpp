// RotateString.cpp
#include <iostream>
using namespace std;
int length(char *a) {
	int i;
	// int length = 0;
	for (i = 0 ; a[i] != '\0' ; i++) {
		// length++;
	}

	return i;
}

int main() {

	char a[100] = "Coding";
	int n  = 7;
	int lena = length(a);
	n %= lena;

	int i = lena - 1;
	while (i >= 0) {
		a[i + n] = a[i];
		i--;
	}
	cout << a << endl;

	// Bring n characters from end to the front
	i = lena;
	int j = 0;
	for (int k = 0 ; k < n ; k++) {
		a[j] = a[i];
		j++;
		i++;
	}

	cout << a << endl;

	// Add null at the lena position
	a[lena] = '\0';
	cout << a << endl;
	return 0;
}
















