// Input2DArray.cpp
#include <iostream>
using namespace std;

int main() {

	// int a[4][4];

	// int row, col;

	// cout << "Enter rows and cols";
	// cin >> row >> col;
	// for (int r = 0 ; r < row ; r++) {
	// 	for (int c = 0 ; c < col ; c++) {
	// 		cin >> a[r][c];
	// 	}
	// }

	// for (int r = 0 ; r < row ; r++) {
	// 	for (int c = 0 ; c < col ; c++) {
	// 		cout << a[r][c] << " ";
	// 	}
	// 	cout << endl;
	// }

	// char arr[][5] = {
	// 	{'A', 'M', 'A', 'N', '\0'},
	// 	{'T', 'O', 'M', 'S', '\0'},
	// 	{'M', 'O', 'M', '\0'}
	// };
	// int row = 3;

	// for (int r = 0 ; r < row ; r++) {
	// 	cout << arr[r] << endl;
	// }

	// for (int r = 0 ; r < row ; r++) {
	// 	for (int c = 0 ; arr[r][c] != '\0' ; c++) {
	// 		cout << arr[r][c] << " ";
	// 	}
	// 	cout << endl;
	// }

	// Taking input of 2d character array using cin
	// char arr[100][100];
	// int row;
	// cout << "Enter number of strings to input:";
	// cin >> row;

	// for (int i = 0 ; i < row ; i++) {
	// 	cin >> arr[i];
	// }

	// for (int i = 0 ; i < row ; i++) {
	// 	cout << arr[i] << endl;
	// }
	// for (int r = 0 ; r < row ; r++) {
	// 	for (int c = 0 ; arr[r][c] != '\0' ; c++) {
	// 		cout << arr[r][c] << " ";
	// 	}
	// 	cout << endl;
	// }

	char arr[100][100];
	int row;
	cout << "Enter number of strings to input:";
	cin >> row;
	cin.ignore();// or cin.get()

	for (int i = 0 ; i < row ; i++) {
		cin.getline(arr[i], 100);
	}

	for (int i = 0 ; i < row ; i++) {
		cout << arr[i] << endl;
	}
	for (int r = 0 ; r < row ; r++) {
		for (int c = 0 ; arr[r][c] != '\0' ; c++) {
			cout << arr[r][c] << " ";
		}
		cout << endl;
	}



	return 0;
}
















