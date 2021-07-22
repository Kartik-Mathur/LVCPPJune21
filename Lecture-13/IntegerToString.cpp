// IntegerToString.cpp
#include <iostream>
using namespace std;

char arr[][10] = {
	"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
};

void IntegerToString(int no) {
	// base case
	if (no == 0) {
		return;
	}

	// recursive case
	IntegerToString(no / 10); // Assumption

	int digit = no % 10;
	cout << arr[digit] << " ";
}

int main() {

	IntegerToString(2048);
	cout << endl;
	IntegerToString(10);
	cout << endl;
	return 0;
}
















