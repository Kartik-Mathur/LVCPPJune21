// NewYearChaos.cpp
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t > 0) {
		int n;
		int a[100005];
		cin >> n;

		for (int i = 1 ; i <= n ; i++) {
			cin >> a[i];
		}

		int bribe = 0;
		bool isTooChaotic = false;
		for (int i = n ; i >= 1 ; i--) {
			if (i != a[i]) {
				if (i == a[i - 1]) {
					swap(a[i], a[i - 1]);
					bribe += 1;
				}
				else if (i == a[i - 2]) {
					swap(a[i - 1], a[i - 2]);
					swap(a[i - 1], a[i]);
					bribe += 2;
				}
				else {
					cout << "Too chaotic" << endl;
					isTooChaotic = true;
					break;
				}
			}
		}
		if (isTooChaotic == false) {
			cout << bribe << endl;
		}
		t--;
	}

	return 0;
}
















