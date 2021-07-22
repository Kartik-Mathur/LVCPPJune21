// StringToInt.cpp
#include <iostream>
using namespace std;

int StringToInt(char *a, int n) {
	// base case
	if (n == 0) {
		return 0;
	}

	// recursive case
	char ch = a[n - 1];
	int digit = ch - '0';
	return StringToInt(a, n - 1) * 10 + digit;

}

int StringToInt1(string a, int n) {
	// base case
	if (n == 0) {
		return 0;
	}

	// recursive case
	char ch = a[n - 1];
	int digit = ch - '0';
	return StringToInt1(a, n - 1) * 10 + digit;

}

int main() {
	string s = "1234";
	int n = s.length();

	cout << StringToInt1(s, n) << endl;
	cout << StringToInt1(s, n) + 10 << endl;

	// char a[100] = "12345678";
	// int n = strlen(a);
	// // cout << sizeof(a) << endl;
	// cout << n << endl;
	// int ans = StringToInt(a, n);
	// cout << ans << endl;
	// cout << ans + 10 << endl;
	// cout << ans - 10 << endl;

	return 0;
}
















