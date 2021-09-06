// Set.cpp
#include <iostream>
#include <set>
using namespace std;

int main() {

	set<pair<int, string> > s;

	s.insert({200, "Kiwi"});
	s.insert({150, "Apple"});
	s.insert({100, "Mango"});
	s.insert({50, "Banana"});
	s.insert({120, "Pineapple"});
	// We want to update something in set, pehle delete karna padega phr dobara se daalna padega
	auto address = s.find({120, "Pineapple"});
	if (address != s.end()) {
		cout << "Pineapple found " << endl;
		s.erase(address);
		s.insert({130, "Pineapple"});
	}
	else {
		cout << "Not found" << endl;
	}


	for (auto node : s) {
		cout << node.first << ", " << node.second << endl;
	}

	// set<int> s;

	// s.insert(10);
	// s.insert(1);
	// s.insert(20);
	// s.insert(15);
	// s.insert(6);
	// s.insert(5);


	return 0;
}
















