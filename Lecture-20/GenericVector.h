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