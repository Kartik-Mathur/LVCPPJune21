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

bool isPallindrome(char *a) {
	int i = 0;
	int len = length(a);
	int j = len - 1;

	while (i < j) {
		if (a[i] != a[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int main() {
	char a[100];
	cin >> a;

	if (isPallindrome(a)) {
		cout << "Pallindrome" << endl;
	}
	else {
		cout << "Not a Pallindrome" << endl;
	}

	// cout << "Length: " << length(a) << endl;

	return 0;
}
















