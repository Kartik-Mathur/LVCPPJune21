bool NQueen(int board[][10], int i, int n) {
	// base case
	if (i == n) {
		for (int i = 0 ; i < n ; i++) {
			for (int j = 0 ; j < n ; j++) {
				if (board[i][j]) {
					cout << "Q ";
				}
				else {
					cout << "_ ";
				}
				// cout << board[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}
	// recursive case
	for (int j = 0 ; j < n ; j++) {
		if (PlaceKarnaSafeHai(board, i, j, n) == true) {
			// If place karna safe hai, then place the queen
			board[i][j] = 1;
			bool KyaBaakiBaatBani = NQueen(board, i + 1, n);
			if (KyaBaakiBaatBani == true) {
				return true;
			}
			// If baat nahi bani, toh i,j se queen hatao and next cell par
			// rakh kar dekho
			board[i][j] = 0;
		}
	}
	return false;
}