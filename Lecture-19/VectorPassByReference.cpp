// VectorPassByReference.cpp
#include <iostream>
#include <vector>
using namespace std;

void Print(vector<int> v) {
	for (int i = 0 ; i < v.size() ; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

void UpdateVector(vector<int> &v) {
	for (int i = 0 ; i < v.size() ; i++) {
		v[i]++;
	}
}

int main() {
	// Initialization of the vector
	// int n;
	// cin >> n;
	// vector<int> v(n); // Create n buckets inside vector
	// vector<int> v(n, 10);// Set all the n buckets with value 10
	vector<int> v{1, 2, 10, 0, 4};// Initialize the vector v
	Print(v);
	UpdateVector(v); //2, 3, 11, 1, 5
	// cout << "Size: " << v.size() << endl;
	// cout << "Capacity: " << v.capacity() << endl;

	// v.pop_back();

	Print(v);
	UpdateVector(v);
	// sort the vector
	// sort(v.begin(), v.end()); // vector ka starting address, vector ka ending address
	// The case in array is also the same only
	// sort(arr,arr+n);
	Print(v);


	return 0;
}
















