// RatInAMaze.cpp
#include <iostream>
using namespace std;

int sol[10][10] = {0};

bool RatInAMaze(char maze[][5], int i, int j, int n, int m) {
	// base case
	if (i == n - 1 and j == m - 1) {
		sol[i][j] = 1;
		for (int i = 0 ; i < n ; i++) {
			for (int j = 0 ; j < m ; j++) {
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}

	// recursive case
	sol[i][j] = 1;

	// Right se raasta dekh kar aa
	if (j + 1 < m and maze[i][j + 1] != 'X') {
		bool KyaRightSeRaastaMilla = RatInAMaze(maze, i, j + 1, n, m);
		if (KyaRightSeRaastaMilla == true) {
			return true;
		}
	}

	// Neeche se raasta dekh kar aa
	if (i + 1 < n and maze[i + 1][j] != 'X') {
		bool KyaNeecheSeRaastaMilla = RatInAMaze(maze, i + 1, j, n, m);
		if (KyaNeecheSeRaastaMilla == true) {
			return true;
		}
	}

	sol[i][j] = 0;
	return false;
}

int main() {

	char maze[][5] = {
		"0000",
		"00XX",
		"0000",
		"XX00"
	};


	int n = 4, m = 4;


	RatInAMaze(maze, 0, 0, n, m);


	return 0;
}
















