// hashmapSTL.cpp
#include <iostream>
#include <unordered_map>
#include <map> // Ordered_map
using namespace std;

int main() {

	// unordered_map<string, int> h; // T.C: O(1)
	map<string, int> h; // T.C: O(logN)

	h.insert({"Mango", 100});
	h.insert(make_pair("Banana", 130));
	pair<string, int> p("Guava", 55);
	h.insert(p);
	h.insert({"Apple", 120});
	h.insert({"Kiwi", 50});
	h.insert({"Orange", 40});
	h.insert({"Litch", 30});


	// h.search("Apple");
	h["Pineapple"] = 60; // Insertion
	h["Pineapple"] = 600; // Updation
	cout << h["Pineapple"] << endl; // Searching

	for (auto node : h) {
		cout << node.first << ", " << node.second << endl;
	}

	return 0;
}
















