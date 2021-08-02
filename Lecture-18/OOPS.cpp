// OOPS.cpp
#include <iostream>
using namespace std;

///////////////////////// BLUE PRINT //////////////////////////
class Car {
public:
	char *name;
	// char name[100];
	int mileage;
	int seats;
	int price;

	// Default - Constructor
	Car() {
		name = NULL;
		cout << "Creating an Object using Default Constructor" << endl;
	}

	// Parameterized Constructor
	Car(char *n, int p, int s, int m) {
		cout << "Inside Parameterized Constructor" << endl;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		price = p;
		seats = s;
		mileage = m;
	}

	// Parameterized Constructor - 2
	// Car(int p, int s, int m, char *n) {
	// 	cout << "Inside Parameterized Constructor - 2" << endl;
	// 	strcpy(name, n);
	// 	price = p;
	// 	seats = s;
	// 	mileage = m;
	// }

	// Copy Constructor
	Car(Car &X) {
		cout << "Inside Copy Constructor" << endl;
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		price = X.price;
		mileage = X.mileage;
		seats = X.seats;
	}

	void print() {
		cout << "Name   : " << name << endl;
		cout << "Price  : $" << price << endl;
		cout << "Mileage: " << mileage << endl;
		cout << "Seats  : " << seats << endl << endl;
	}

	void changeName(char *n) {
		if (name != NULL) {
			delete[] name;
			name = NULL;
		}
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
};
///////////////////////// BLUE PRINT //////////////////////////

int main() {

	Car A;
	// A.name = "BMW";
	strcpy(A.name, "BMW");
	// A.changeName("BMW");
	A.price = 100;
	A.seats = 2;
	A.mileage = 10;

	char a[100] = "Audi";

	Car B("Audi", 150, 5, 15);
	// strcpy(B.name, "Audi");
	// B.price = 150;
	// B.seats = 4;
	// B.mileage = 15;
	Car C("Maruti", 200, 3, 20);

	// While initialization if we assign an object
	Car D = C; // Copy Constructor

	A.print();
	B.print();
	C.print();
	D.print();

	return 0;
}
















