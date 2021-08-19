// BinaryTrees.cpp
#include <iostream>
using namespace std;
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
class node {
public:
	int data;
	node* left, *right;

	node(int d): data(d), left(NULL), right(NULL) {

	}
};

node* createTree() {
	node* root = NULL;
	int data;
	cin >> data;

	if (data == -1) {
		return root;
	}
	else {
		root = new node(data);
		root->left = createTree();
		root->right = createTree();
	}
	return root;
}

void preorder(node* root) {
	// base case
	if (root == NULL) {
		return;
	}

	// recursive case
	cout << root->data << " ";
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
	cout << root->data << " ";
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

int countNodes(node* root) {
	// base case
	if (root == NULL) {
		return 0;
	}

	// recursive case
	return countNodes(root->left) + countNodes(root->right) + 1;
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

int diameter(node* root) {
	// base case
	if (root == NULL) {
		return 0;
	}

	// recursive case
	// 1. Dia meter via root node
	int op1 = height(root->left) + height(root->right);
	// 2. Dia meeter exists in LST
	int op2 = diameter(root->left);
	// 3. Dia meter exists in RST
	int op3 = diameter(root->right);

	return max(op1, max(op2, op3));
}

class Pair {
public:
	int height;
	int diameter;
};

Pair fastDia(node* root) {
	// base case
	if (root == NULL) {
		Pair p;
		p.height = p.diameter = 0;
		return p;
	}
	// recursive case
	Pair left = fastDia(root->left);
	Pair right = fastDia(root->right);

	Pair p;
	p.height = max(left.height, right.height) + 1;

	// Diameter
	int op1 = left.height + right.height;
	int op2 = left.diameter;
	int op3 = right.diameter;

	p.diameter = max(op1, max(op2, op3));
	return p;
}

node* searchBT(node* root, int key) {
	// base case
	if (root == NULL) {
		return NULL;
	}

	// recursive case
	if (root->data == key) {
		return root;
	}

	node* left = searchBT(root->left, key);
	if (left != NULL) {
		return left;
	}

	node* right = searchBT(root->right, key);
	// right: Valid, NULL
	return right;
}

void mirror(node* root) {
	// base case
	if (root == NULL) {
		return;
	}
	// recursive case
	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
}

int main() {

	node* root = NULL;
	root = createTree();
	mirror(root);
	cout << "PRE: ";
	preorder(root);
	cout << endl;
	cout << "In: ";
	inorder(root);
	cout << endl;
	cout << "Post: ";
	postorder(root);
	cout << endl;

	cout << "Total Nodes: " << countNodes(root) << endl;
	cout << "Height: " << height(root) << endl;
	cout << "Diameter: " << diameter(root) << endl;
	Pair ans = fastDia(root);

	cout << "Fast Height: " << ans.height << endl;
	cout << "Fast Diameter: " << ans.diameter << endl;

	node* x = searchBT(root, 113);
	if (x != NULL) {
		cout << "Found key: " << x->data << endl;
	}
	else {
		cout << "Key not found" << endl;
	}

	return 0;
}
















