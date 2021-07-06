// UniqueNumber - 1.cpp
#include <iostream>
using namespace std;

int main() {

	int n, no;
	cin >> n;

	int ans = 0;

	for (int i = 0 ; i < n ; i++) {
		cin >> no;
		ans = ans ^ no;
	}

	cout << ans << endl;

	return 0;
}
















