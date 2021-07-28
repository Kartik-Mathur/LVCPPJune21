// PhoneKeyPad.cpp
#include <iostream>
using namespace std;

string keys[10] = {
	"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"
};

string ans[10000];
int k = 0;

void PhoneKeyPad(char *in, int i, char *out, int j) {
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		// // ans[k++] = out;
		// if (strcmp(out, "MOM") == 0) {
		// 	cout << "MOM is present" << endl;
		// }
		return;
	}

	// recursive case
	int indx = in[i] - '0';
	for (int k = 0 ; keys[indx][k] != '\0' ; k++) {
		out[j] = keys[indx][k];
		PhoneKeyPad(in, i + 1, out, j + 1);
	}
}

int main() {
	char in[100], out[100];
	cin >> in;

	PhoneKeyPad(in, 0, out, 0);

	// for (int i = 0 ; i < k ; i++) {
	// 	cout << "Output: " << ans[i] << endl;
	// }

	// int indx = 2;
	// int j = 0;
	// char out[100];
	// for (int k = 0 ; keys[indx][k] != '\0' ; k++) {
	// 	// cout << keys[indx][k] << endl;
	// 	out[j] = keys[indx][k];
	// 	cout << out[j] << endl;
	// }

	return 0;
}
















