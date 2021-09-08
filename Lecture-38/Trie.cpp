#include <iostream>
#include <unordered_map>
using namespace std;

class node {
public:
	char c;
	bool KyaWordEndHua;
	unordered_map<char, node*> h;
	node(char ch) {
		this->c = ch;
		KyaWordEndHua = false;
	}
};

class Trie {
public:
	node* root;
	Trie() {
		root = new node('\0');
	}

	void insert(char *word) {
		node* temp = root;
		for (int i = 0 ; word[i] != '\0' ; i++) {
			char ch = word[i];
			if (temp -> h.count(ch) == 0) {
				temp -> h[ch] = new node(ch);
			}
			temp = temp->h[ch];
		}
		temp->KyaWordEndHua = true;
	}

	bool wordSearch(char *word) {
		node* temp = root;
		for (int i = 0 ; word[i] != '\0' ; i++) {
			char ch = word[i];
			if (temp->h.count(ch)) {
				temp = temp->h[ch];
			}
			else {
				return false;
			}
		}
		return temp->KyaWordEndHua;
	}
};

int main() {

	Trie t;
	t.insert("Hello");
	t.insert("Hell");
	t.insert("Coding");
	t.insert("Block");
	t.insert("Blocks");

	while (1) {
		char word[100];
		cin >> word;

		if (t.wordSearch(word)) {
			cout << "Found" << endl;
		}
		else {
			cout << "Not Found" << endl;
		}
	}


	return 0;
}
















