// GenericVector.cpp
#include <iostream>
using namespace std;

template<typename T>
class Vector {
public: // Homework:
	T *arr;
	int cs;
	int ms;
	// Constructor
	Vector(int s = 2) {
		cs = 0;
		ms = s;
		arr = new T[ms];
	}

	// 1. push_back();
	void push_back(T data) {
		if (cs == ms) {
			T *oldarr = arr;
			int oldms = ms;
			arr = new T[2 * ms];
			ms = 2 * ms;

			for (int i = 0 ; i < oldms ; i++) {
				arr[i] = oldarr[i];
			}
			delete []oldarr;
		}
		arr[cs] = data;
		cs++;
	}

	// pop_back();
	void pop_back() {
		if (cs > 0) {
			cs--;
		}
	}

	// size();
	int size() {
		return cs;
	}

	// capacity();
	int capacity() {
		return ms;
	}

	// v[i] - Operator Overloading: []
	T operator[](int i) {
		return arr[i];
	}
};

int main() {

	Vector<char> v;
	v.push_back('A');
	v.push_back('B');
	v.push_back('C');
	v.push_back('D');
	v.push_back('E');
	// v.push_back(1);
	// v.push_back(2);
	// v.push_back(3);
	// v.push_back(4);
	// v.push_back(5);
	v.pop_back();
	for (int i = 0 ; i < v.size() ; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	cout << "capacity: " << v.capacity() << endl;
	cout << "size: " << v.size() << endl;
	return 0;
}
















