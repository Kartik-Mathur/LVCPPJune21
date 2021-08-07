#include <iostream>
#include <vector>
using namespace std;

int main() {
	// Initialization of the vector
	// int n;
	// cin >> n;
	// vector<int> v(n); // Create n buckets inside vector
	// vector<int> v(n, 10);// Set all the n buckets with value 10
	vector<int> v{1, 2, 10, 0, 4};// Initialize the vector v
	for (int i = 0 ; i < v.size() ; i++) {
		cout << v[i] << " ";
	}
	cout << endl << v.size() << endl;

	// vector<int> v;
	// v.reserve(20);
	// for (int i = 1 ; i <= 9 ; i++) {
	// 	v.push_back(5 - i + 1);
	// 	cout << "After inserting: " << i << ", size becomes: " << v.capacity() << endl;
	// }

	// Taking user input
	// int n;
	// cin >> n;
	// for (int i = 0 ; i <= 5 ; i++) {
	// 	int num; cin >> num;
	// 	v.push_back(num);
	// }
	// Taking user input - 2
	int n;
	cin >> n;
	vector<int> v1(n, 10);

	// for (int i = 0 ; i < n ; i++) {
	// 	cin >> v[i];
	// }
	cout << "Size: " << v.size() << endl;
	cout << "Capacity: " << v.capacity() << endl;

	// v.pop_back();

	for (int i = 0 ; i < v.size() ; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	// sort the vector
	sort(v.begin(), v.end()); // vector ka starting address, vector ka ending address
	// The case in array is also the same only
	// sort(arr,arr+n);

	for (int i = 0 ; i < v.size() ; i++) {
		cout << v[i] << " ";
	}
	cout << endl;


	return 0;
}
















