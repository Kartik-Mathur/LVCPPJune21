// Stringlength.cpp
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
	char a[100] = "Hello World";

	cout << "Length: " << length(a) << endl;

	return 0;
}
















