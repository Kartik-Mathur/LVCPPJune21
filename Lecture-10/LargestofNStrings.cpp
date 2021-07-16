// LargestofNStrings.cpp
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


void copy(char *a, char *b) {
	int i = 0, j = 0;
	int lenb = length(b);

	while (j <= lenb) {
		a[i] = b[j];
		i++;
		j++;
	}
}


int main() {

	char largest[100];
	int largest_len = 0;

	char a[100];

	int n;
	cin >> n;

	cin.ignore();

	for (int i = 0 ; i < n ; i++) {
		cin.getline(a, 100);
		int len = length(a);

		if (largest_len < len) {
			copy(largest, a);
			largest_len = len;
		}
	}

	cout << "Largest String: " << largest << endl;
	cout << "Largest String Length: " << largest_len << endl;

	return 0;
}
















