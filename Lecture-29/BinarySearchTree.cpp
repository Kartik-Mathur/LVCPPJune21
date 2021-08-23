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
	if (abs(height(root->left) - height(root->right)) <= 1 and isBalanced(root->left) and isBalanced(root->right)) {
		return true;
	}
	else {
		return false;
	}

}

int a[] = {1, 2, 8, 9, 10, 11, 12};
int n = sizeof(a) / sizeof(int);

node* makeTree(int s, int e) {
	// base case
	if (s > e) {
		return NULL;
	}

	// recursive case
	int mid = (s + e) / 2;
	node* root = new node(a[mid]);
	root->left = makeTree(s, mid - 1);
	root->right = makeTree(mid + 1, e);

	return root;
}

class LinkedList {
public:
	node* head;
	node* tail;
};

LinkedList BSTtoLL(node* root) {
	LinkedList l;
	// base case
	if (root == NULL) {
		l.head = l.tail = NULL;
		return l;
	}

	// recursive case
	// 1. Both are NULL
	if (root->left == NULL and root->right == NULL) {
		l.head = l.tail = root;
		return l;

	}
	else if (root->left != NULL and root->right == NULL) {
		// 2. LST is not NULL and RST is NULL
		LinkedList left = BSTtoLL(root->left);
		left.tail->right = root;
		l.head = left.head;
		l.tail = root;
		return l;

	}
	else if (root->left == NULL and root->right != NULL) {
		// 3. RST is not NULL and LST is NULL
		LinkedList right = BSTtoLL(root->right);
		root->right = right.head;
		l.head = root;
		l.tail = right.tail;
		return l;
	}
	else {
		// 4. LST are RST are not NULL
		LinkedList left = BSTtoLL(root->left);
		LinkedList right = BSTtoLL(root->right);
		left.tail->right = root;
		root->right = right.head;
		l.head = left.head;
		l.tail = right.tail;
		return l;
	}
}

void printLL(node* head) {
	while (head) {
		cout << head->data << "-->";
		head = head->right;
	}
	cout << endl;
}

node* LCA(node* root, int x, int y) {
	// base case
	if (!root) {
		return NULL;
	}

	// recursive case
	if (root->data == x || root->data == y) {
		return root;
	}

	node* left = LCA(root->left, x, y);
	node* right = LCA(root->right, x, y);

	if (left != NULL and right != NULL) {
		return root;
	}
	if (left != NULL) {
		return left;
	}
	return right;
}

int main() {
	node* root = NULL;
	// root = createBST();
	root = makeTree(0, n - 1);

	cout << "PRE: ";
	preorder(root);
	cout << "In: ";
	inorder(root);
	cout << endl;
	cout << "Post: ";
	postorder(root);
	cout << endl;
	LevelOrder(root);
	node* ans = LCA(root, 11, 12);

	if (ans != NULL) {
		cout << ans->data << endl;
	}
	else {
		cout << "No LCA" << endl;
	}

	// LinkedList l = BSTtoLL(root);
	// printLL(l.head);
	// printLL(l.head);
	// while (l.head) {
	// 	cout << l.head->data << "-->";
	// 	l.head = l.head->right;
	// }
	// cout << endl;

}




























