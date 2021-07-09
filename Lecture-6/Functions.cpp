// Functions.cpp
#include <iostream>
using namespace std;

// syntax :
// return_type function_name (arguments){
// work jo yeh function krega or statements
// }

void HelloWorld() {
	cout << "Hello World!!" << endl;
}

void PrintSum(int a, int b) {
	cout << "Sum : " << a + b << endl;
}

int main() {

	HelloWorld(); // Calling or Invoking the function

	int a = 10 , b = 20;
	PrintSum(a, b);

	return 0;
}
















