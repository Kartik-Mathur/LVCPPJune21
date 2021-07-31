// StairCaseSearch.cpp
#include <iostream>
using namespace std;

void StairCaseSearch(int a[][1000], int n, int m, int key) {

	int i = 0, j = m - 1;
	bool isKeyFound = false;

	while (i < n and j >= 0) {
		if (a[i][j] == key) {
			isKeyFound = true;
			cout << "Key found at " << i << ", " << j << endl;
			break;
		}
		else if (a[i][j] < key) {
			i++;
		}
		else {
			j--;
		}
	}

	if (isKeyFound == false) {
		cout << "Key not found" << endl;
	}
}

int main() {
	// int a[][4] = {
	// 	{1, 2, 5, 8},
	// 	{4, 9, 12, 13},
	// 	{6, 10, 14, 16},
	// 	{7, 11, 15, 17}
	// };
	// int n = 4, m = 4;

	int a[1000][1000];
	int n, m;
	cin >> n >> m;

	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < m ; j++) {
			cin >> a[i][j];
		}
	}

	int key = 150;

	StairCaseSearch(a, n, m, key);



	return 0;
}
















