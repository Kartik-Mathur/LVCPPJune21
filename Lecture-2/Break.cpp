// Break.cpp
#include <iostream>
using namespace std;

int main() {

	int i = 1, n;
	cin >> n;

	while (i <= n) {
		if (i == 4) {
			// break;
			i = i + 1;
			continue;
		}
		cout << i << " ";
		i = i + 1;
	}
	cout << '\n';
	return 0;
}

