// CountSetBits.cpp
#include <iostream>
using namespace std;

int main() {

	int m = 1;
	int a, cnt = 0;

	cin >> a;
	// a = 5
	// 0 0 1(a)
	// 0 0 1(m)
	// 0 0 1 if( (a&m) == 1 ) {cnt++;}
	// a = a>>1, a =0 0 0
	// 0 0 1
	// 0 means false
	while (a > 0) {
		if ((a & m) == 1) {
			cnt++;
		}
		a = a >> 1;
	}
	cout << "Set bits : " << cnt << endl;
	return 0;
}
















