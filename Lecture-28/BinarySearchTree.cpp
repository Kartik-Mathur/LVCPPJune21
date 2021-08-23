// BinarySearchTree.cpp
#include <iostream>
#include <queue>
using namespace std;

class node {
public:
	int data;
	node* left, *right;

	node(int d): data(d), left(NULL), right(NULL) {}
};

node* InsertInBST(node* root, int d) {
	// base case
	if (root == NULL) {
		root = new node(d);
		return root;
	}

	// recursive case
	if (d <= root->data) {
		root->left = InsertInBST(root->left, d);
	}
	else {
		root->right = InsertInBST(root->right, d);
	}
	return root;
}

node* createBST() {

	node* root = NULL;

	int data;
	cin >> data;

	while (data != -1) {

		root = InsertInBST(root, data);

		cin >> data;
	}
	return root;
}

void preorder(node* root) {
	// base case
	if (root == NULL) {
		return;
	}

	// recursive case
	cout << root->data << ", ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node* root) {
	// base case
	if (root == NULL) {
		return;
	}

	// recursive case
	inorder(root->left);
	cout << root->data << ", ";
	inorder(root->right);
}

void postorder(node* root) {
	// base case
	if (root == NULL) {
		return;
	}

	// recursive case
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}

void LevelOrder(node* root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		auto x = q.front();
		q.pop();

		if (x != NULL) {
			cout << x->data << " ";
			if (x->left != NULL) {
				q.push(x->left);
			}
			if (x->right != NULL) {
				q.push(x->right);
			}
		}
		else {
			cout << endl;
			if (!q.empty()) {
				q.push(NULL);
			}
		}
	}
}

node* searchBST(node* root, int key) {
	// base case
	if (root == NULL) {
		return NULL;
	}

	// recursive case
	if (root->data == key) {
		return root;
	}
	else if (root->data > key) {
		return searchBST(root->left, key);
	}
	else {
		return searchBST(root->right, key);
	}
}

int height(node *root) {
	// base case
	if (root == NULL) {
		return 0;
	}

	// recursive case
	int left_height = height(root->left);
	int right_height = height(root->right);

	return max(left_height, right_height) + 1;
}

bool isBalanced(node* root) {
	// base case
	if (!root) { // NULL = 0, !0 == !false, !false means true, !NULL(!0)->true
		return true;
	}

	// recursive case

	// int left_height = height(root->left);
	// int right_height = height(root->right);

	// int curr_diff = abs(left_height - right_height);

	if (abs(height(root->left) - height(root->right)) <= 1 and isBalanced(root->left) and isBalanced(root->right)) {
		return true;
	}
	else {
		return false;
	}

}

class Pair {
public:
	int height;
	bool balanced;
};

Pair fastBalanced(node* root) {
	Pair p;
	// base case
	if (!root) {
		p.height = 0;
		p.balanced = true;
		return p;
	}

	// recursive case
	Pair left = fastBalanced(root->left);
	Pair right = fastBalanced(root->right);
	p.height = max(left.height , right.height) + 1;
	if (abs(left.height - right.height) <= 1 and left.balanced and right.balanced) {
		p.balanced = true;
	}
	else {
		p.balanced = false;
	}
	return p;
}

bool isBST(node* root, int mi = INT_MIN, int mx = INT_MAX) {
	// base case
	if (!root) {
		return true;
	}
	// recursive case

	if (root->data >= mi and root->data <= mx and isBST(root->left, mi, root->data) and isBST(root->right, root->data, mx)) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	node* root = NULL;
	root = createBST();

	cout << "PRE: ";
	preorder(root);
	cout << "In: ";
	inorder(root);
	cout << endl;
	cout << "Post: ";
	postorder(root);
	cout << endl;
	LevelOrder(root);
	if (isBalanced(root)) {
		cout << "isBalanced" << endl;
	}
	else {
		cout << "Not Balanced" << endl;
	}
	Pair ans = fastBalanced(root);
	cout << "Fast Height " << ans.height << endl;
	if (ans.balanced) {
		cout << "isBalanced" << endl;
	}
	else {
		cout << "Not Balanced" << endl;
	}

	if (isBST(root)) {
		cout << "It is a BST" << endl;
	}
	else {
		cout << "Not a BST" << endl;
	}
	// node* ans = searchBST(root, 140);
	// if (ans) {
	// 	cout << "Found: " << ans->data << endl;
	// }
	// else {
	// 	cout << "Not Found" << endl;
	// }



}




























