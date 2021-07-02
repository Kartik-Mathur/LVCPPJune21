// Debug.cpp
#include <iostream>
using namespace std;
int main()
{
	int n, i, no = 1, row = 1, m, spaces = 0; //"sp" is "spaces" in your code and "spaces" is "no"
	cout << (" Enter n") << endl;
	cin >> n;

	while (row <= n) {
		int sp = 1;
		while (sp <= n - row) {
			cout << " ";
			sp++;
		}


		no = row;
		i =  1;
		while (i <= row) {
			cout << no;
			no = no + 1;

			i = i + 1;
		}

		i = row - 1;
		while (i > 0) {
			cout << no;
			no = no - 1;

			i = i - 1;
		}

		cout << endl;
		row = row + 1;
	}
}