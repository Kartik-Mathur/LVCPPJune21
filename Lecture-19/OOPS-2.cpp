// OOPS.cpp
#include <iostream>
using namespace std;

///////////////////////// BLUE PRINT //////////////////////////
class Car {
private:
	int price;
public:
	char *name;
	// char name[100];
	int mileage;
	int seats;


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

	// Copy Assignment Operator, E = D; // Here E is not getting created, only we are updating it
	// Syntax: returnType operator=(Car &X)
	void operator=(Car X) { // Operator overloading
		cout << "Inside Copy Assignment" << endl;
		if (name != NULL) {
			delete[] name;
			name = NULL;
		}

		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		price = X.price;
		mileage = X.mileage;
		seats = X.seats;
	}

	// Operator Overloading '+=', E+=A;
	void operator+=(Car X) {
		// name,price,mileage,seats: E
		// X.name, X.price, X.mileage, X.seats: A
		char *oldname = name;
		name = new char[strlen(name) + strlen(X.name) + 1];
		strcpy(name, oldname);
		strcat(name, X.name);
		delete[] oldname;

		price += X.price;
		mileage += X.mileage;
		seats += X.seats;
	}

	// setprice
	void setprice(int p) {
		if (p > 1000 and p < 1500) {
			price = p;
		}
		else {
			price = 1000;
		}
	}

	// getprice
	int getprice() {
		return price;
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

	~Car() {
		cout << "Deleting Car " << name << endl;
		delete[] name;
	}
};
///////////////////////// BLUE PRINT //////////////////////////

// ostream& operator<<(ostream& os, Car &A) {
// 	os << "Inside Overloading cout" << endl;
// 	os << "Name   : " << A.name << endl;
// 	os << "Price  : $" << A.price << endl;
// 	os << "Mileage: " << A.mileage << endl;
// 	os << "Seats  : " << A.seats << endl;
// 	return os;
// }

int main() {

	Car A;
	// A.name = "BMW";
	// strcpy(A.name, "BMW");
	A.changeName("BMW");
	// A.price = -1000;
	A.setprice(-1000);
	// cout << A.price << endl;
	cout << A.getprice() << endl;
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
	Car D = C; // Copy Constructor or Car D(C);
	// Car E(D);

	// Copy Assigment Operator
	Car E;
	E = D; // Copy Assignment Operator
	E.name[0] = 'A';

	E += A;

	// cout << A << endl << B << endl;
	A.print();
	B.print();
	C.print();
	D.print();
	// E.print();

	return 0;
}
















