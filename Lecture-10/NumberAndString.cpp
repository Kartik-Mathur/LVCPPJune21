#include <iostream>
using namespace std;

int main() {

	char a[100], b[100];
	int n;

	cin >> n;

	cin.ignore();// or cin.get();

	cin.getline(a, 100, '$');
	// cin.getline(b, 100,'');

	// cout << "Number: " << n << endl;
	cout << n << endl;
	cout << a << endl;
	// cout << b << endl;
	// cout << "String: " << a << endl;

	return 0;
}
















