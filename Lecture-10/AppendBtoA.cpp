// AppendBtoA.cpp
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

void append(char *a, char *b) {
	int i = length(a);
	int lenb = length(b);

	int j = 0;
	while (j <= lenb) {
		a[i] = b[j];
		i++;
		j++;
	}
}

int main() {
	char a[100] = "Hello";
	char b[100] = "World";

	cout << a << endl;
	append(a, b);
	cout << a << endl;


	return 0;
}
















