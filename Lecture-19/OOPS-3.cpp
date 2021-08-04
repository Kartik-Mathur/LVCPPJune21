// OOPS - 3.cpp
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
	const int tyres;
	static int count;

	// Default - Constructor
	Car(): tyres(4), name(NULL) {
		// name = NULL;
		count++;
		cout << "Creating an Object using Default Constructor" << endl;
	}

	// Parameterized Constructor
	Car(char *n, int p, int s, int m): tyres(4), price(p), seats(s), mileage(m) {
		cout << "Inside Parameterized Constructor" << endl;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		count++;
		// price = p;
		// seats = s;
		// mileage = m;
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
	// Car E = A; or Car E(A);
	Car(Car &X): tyres(4) {
		count++;

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

	void print() const {
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
	int getprice() const {
		return price;
	}

	~Car() {
		if (name != NULL) {
			cout << "Deleting Car " << name << endl;
			delete[] name;
			count--;
		}
	}
};
///////////////////////// BLUE PRINT //////////////////////////

int Car::count = 0;

int main() {

	Car A;
	A.changeName("BMW");
	// A.price = 100;
	A.setprice(100);
	A.seats = 2;
	A.mileage = 10;

	A.print();

	Car B("AUDI", 20, 10, 4);
	cout << Car::count << endl;

	return 0;
}
















