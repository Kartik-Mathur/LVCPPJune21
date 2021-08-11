#include <iostream>
using namespace std;

int main() {

	int left[] = {2, 3};
	int right[] = {4, 5};
	int n = 2;
	int m = 2;

	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < m ; j++) {
			cout << left[i]*right[j] << " ";
		}
	}
	cout << endl;

	// string s = "aab";

	// int start = 0;

	// for (int end = start ; end < s.length(); end++) {
	// 	cout << s.substr(start, end - start + 1) << endl;
	// }

	// s = "2*3-4*5";
	// int i = 1;
	// cout << s.substr(0, i) << endl;
	// cout << s.substr(i + 1) << endl;




	return 0;
}
















