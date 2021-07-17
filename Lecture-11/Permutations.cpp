// Permutations.cpp
#include <iostream>
using namespace std;

int main() {

	char a[] = "abbca";
	char b[] = "baabcz";

	int freq[26] = {0};

	for (int i = 0 ; a[i] != '\0' ; i++) {
		char ch = a[i];
		int indx = ch - 'a'; //int indx = ch - 97;
		freq[indx] ++;
	}

	// for (int i = 0; i < 26 ; i++) {
	// 	cout << freq[i] << " ";
	// }
	// cout << endl;

	for (int i = 0 ; b[i] != '\0' ; i++) {
		char ch = b[i];
		int indx = ch - 'a'; //int indx = ch - 97;
		freq[indx] --;
	}

	bool isPermutation = true;
	for (int i = 0; i < 26 ; i++) {
		// cout << freq[i] << " ";
		if (freq[i] != 0) {
			isPermutation = false;
			break;
		}
	}
	// cout << endl;
	if (isPermutation == true) {
		cout << "Permutation " << endl;
	}
	else {
		cout << "Not a Permutation" << endl;
	}
	return 0;
}
















