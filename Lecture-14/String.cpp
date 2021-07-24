// String.cpp
#include <iostream>
#include <string>
using namespace std;

void PrintString(string x) {
	for (int i = 0 ; i < x.length(); i++) {
		cout << x[i] << " ";
	}
	cout << endl;
}

int main() {
	// Initialization
	string s = "Hello World";
	string s1("Hello Coding!");

	char a[] = "Welcome to Strings!";
	string s2(a);

	cout << s << endl;
	cout << s1 << endl;
	cout << s2 << endl;

	string x = "Hello";
	string y = "Zello";
	// String ke upar hum inbuilt functions ko dot laga kar call krte hai
	// kyunki yeh string ke andar hi created hote hai, and that's how we use it

	int ans = x.compare(y);
	// x.compare(y) ki value will be this
	//  0: x and y are equal,
	// <0: x is smaller than y
	// >0: x is greater than y

	if (ans == 0) {
		cout << "X and Y are equal" << endl;
	}
	else if (ans < 0) {
		cout << "X is smaller than Y" << endl;
	}
	else {
		cout << "X is greater than Y" << endl;
	}

	// To insert characters inside string
	// push_back(ch); // Inserts the character at the end
	// pop_back(); // Removes the character from the end
	// x.push_back('!');
	// x.push_back('!');
	// cout << x << endl;

	// x.pop_back();
	// x.pop_back();
	// x.pop_back();

	// cout << x << endl;

	// x.clear();
	// cout << "X is : " << x << endl;

	// String Iteration: Loop lagana means Iteration
	// PrintString(x);

	// Special loop that runs over string, is called as "for each loop"
	// C++ 11 and above

	int f = 10;
	auto f1 = 10;// auto will identify the data type on its own

	cout << sizeof(f1) << endl;

	x = "Coding Blocks";
	for (char ch : x) { // For each character ch, belonging to string x
		cout << ch << " ";
	}
	cout << endl;

	for (auto ch : x) { // For each character ch, belonging to string x
		cout << ch << " ";
	}
	cout << endl;

	// substr
	string z = "Learning Strings!";

	string z1 = z.substr(2, 5); // substr(indx,number_of_char);
	cout << z1 << endl;

	return 0;
}
















