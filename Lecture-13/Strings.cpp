// Strings.cpp
#include <iostream>
#include <cstring>
using namespace std;

int main() {

	string s, s1;

	// s = "Hello";
	// cin >> s;
	// To take input along with white space characters
	getline(cin, s, '$');
	cout << s << endl;
	// char a[100];
	// cin.getline(a,100,'$');

	s1 = "Hello Coding Blocks";
	cout << s1 << endl;

	s += s1;
	cout << s << endl;

	s = s1;
	cout << s1 << endl;

	cout << s1.length() << endl;

	for (int i = 0 ; i < s.length() ; i++) {
		cout << s[i] << " ";
	}
	cout << endl;

	return 0;
}
















