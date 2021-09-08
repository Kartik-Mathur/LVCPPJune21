// Trie.cpp
#include <iostream>
using namespace std;

class node {
public:
	int no;
	node* left; // 0
	node* right; // 1
};

class Trie {
public:
	node* root;
	Trie() {
		root = new node();
	}

	void insert(int n) {
		node* temp = root;
		for (int i = 31 ; i >= 0 ; i--) {
			int bit = n & (1 << i);
			if (bit) {
				if (temp->right == NULL) {
					temp->right = new node();
				}
				temp = temp->right;
			}
			else {
				if (temp->left == NULL) {
					temp->left = new node();
				}
				temp = temp->left;
			}
		}
		temp->no = n;
	}

	int max_xor_helper(int n) {
		node* temp = root;
		int ans = 0;
		for (int i = 31 ; i >= 0 ; i--) {
			int bit = (n) & (1 << i);
			if (bit) {
				if (temp->left) {
					ans += (1 << i);
					temp = temp->left;
				}
				else {
					temp = temp->right;
				}
			}
			else {
				if (temp->right) {
					ans += (1 << i);
					temp = temp->right;
				}
				else {
					temp = temp->left;
				}
			}
		}
		return n ^ (temp->no);

	}

	int max_xor(int *arr, int n) {
		int max_ans = INT_MIN;
		for (int i = 0 ; i < n ; i++) {
			int no = arr[i];
			insert(no);

			int ans = max_xor_helper(no);
			max_ans = max(ans, max_ans);
		}
		return max_ans;
	}

};

int main() {


	int arr[] = {1, 3, 5, 4, 10};
	int n = 5;

	Trie t;
	cout << t.max_xor(arr, n) << endl;


	return 0;
}
















