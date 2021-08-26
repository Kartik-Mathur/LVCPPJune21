// HashmapFruits.cpp
#include <iostream>
#include <unordered_map>
using namespace std;

class fruit {
public:
	int sweetness;
	string color;
	int price;
	fruit() {

	}

	fruit(int s, string c, int p) {
		sweetness = s;
		color = c;
		price = p;
	}
};

int main() {

	unordered_map<string, fruit> h;

	fruit Mango(8, "Yellow", 100);
	fruit Apple(7, "Red", 120);
	fruit Guava(4, "Green", 80);

	h["Mango"] = Mango;
	h["Apple"] = Apple;
	h["Guava"] = Guava;

	for (auto node : h) {
		cout << node.first << ", " << "\nSweetness: " << node.second.sweetness;
		cout << "\nColor: " << node.second.color << "\nPrice: " << node.second.price << endl << endl;
	}

	return 0;
}
















