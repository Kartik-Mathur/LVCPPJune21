// SudokuSolver.cpp
#include <iostream>
using namespace std;

bool isSafeToPut(int board[][9], int i, int j, int n, int no) {
	// check row and column
	for (int k = 0 ; k < n ; k++) {
		if (board[i][k] == no || board[k][j] == no) {
			return false;
		}
	}

	// check column
	// for (int k = 0 ; k < n ; k++) {
	// 	if (board[k][j] == no) {
	// 		return false;
	// 	}
	// }

	// check the box
	n = sqrt(n);
	int si = (i / n) * n;
	int sj = (j / n) * n;

	for (int k = si ; k < si + n; k++) {
		for (int l = sj; l < sj + n; l++) {
			if (board[k][l] == no) {
				return false;
			}
		}
	}

	return true;
}

bool sudokuSolver(int board[][9], int i, int j, int n) {
	// base case
	if (i == n) {
		// Sudoku is solved print it
		for (int i = 0 ; i < n ; i++) {
			for (int j = 0 ; j < n ; j++) {
				cout << board[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}

	// recursive case
	if (j == n) {
		return sudokuSolver(board, i + 1, 0, n);
	}
	if (board[i][j] != 0) {
		return sudokuSolver(board, i, j + 1, n);
	}

	for (int number = 1; number <= n ; number++) {
		if (isSafeToPut(board, i, j, n, number)) {
			// If its safe to put the number, then place it
			board[i][j] = number;
			// and ask the recursion to solve the remaining sudoku
			bool kyaBakiSolveHua = sudokuSolver(board, i, j + 1, n);
			if (kyaBakiSolveHua) {
				return true;
			}
			board[i][j] = 0;
		}
	}
	return false;
}

int main() {
	int board[9][9] =
	{	{5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9}
	};

	sudokuSolver(board, 0, 0, 9);
	return 0;
}
















