// Pointers.cpp
#include <iostream>
using namespace std;

int main() {

	int a = 10;
	int *aptr = &a;
	int *y = NULL, *z = NULL, *x;

	cout << "Hello" << endl;
	cout << x << endl;
	// cout << y << endl;
	// cout << z << endl;

	// cout << *aptr + 1 << endl;
	// cout << *z << endl;
	// To create multiple pointers of same type
	// int *x, *y, *z;
	// float *x, *y, *z;

	float f = 11.1;
	float *fptr;
	fptr = &f;

	char ch = 'A';
	char *chptr = &ch;

	// cout << a << endl;
	// cout << *(&a) << endl;
	// cout << *aptr << endl;
	// cout << f << endl;
	// cout << *(&f) << endl;
	// cout << *fptr << endl;

	// cout << ch << endl;
	// cout << &ch << endl;
	// cout << (int*)&ch << endl;
	// cout << (float*)chptr << endl;
	// cout << (void*)chptr << endl;

	// cout << "Size of address of ch bucket " << sizeof(&ch) << endl;
	// cout << "Size of address chptr Pointer " << sizeof(chptr) << endl;
	// cout << "Size of address of bucket f " << sizeof(&f) << endl;
	// cout << "Size of address fptr Pointer " << sizeof(fptr) << endl;
	// cout << chptr << endl;


	return 0;
}
















