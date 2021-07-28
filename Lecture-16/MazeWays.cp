// MazeWays.cpp
#include <iostream>
using namespace std;

int MazeWays(int i, int j) {
	if (i == 0 and j == 0) {
		return 1;
	}

	if (i < 0 || j < 0) {
		return 0;
	}

	return MazeWays(i - 1, j) + MazeWays(i, j - 1);
}

int main() {

	int i, j;
	cin >> i >> j;
	cout << MazeWays(i, j) << endl;

	return 0;
}
















