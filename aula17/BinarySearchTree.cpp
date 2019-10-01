// marco.mangan@pucrs.br
// 2019-10-01

#include <iostream>

using namespace std;

class Node {
public:
	int key;
	Node* left;
	Node* right;
	Node(int k) {
		key = k;
		left = nullptr;
		right = nullptr;
	}
};

class BinarySearchTree {
private:	
	Node* root;

	Node* insert(Node* n, int k) {
		if (n == nullptr) {
			Node* no = new Node(k);
			return no;
		}
		if (k < n->key) {
			n->left = insert(n->left, k);
		} else if (k > n->key) {
			n->right = insert(n->right, k);
		} else {
			// duplicate key; do nothing
		}
		return n;
	}

	void print(Node* n) {
		if (n == nullptr)
			return;
		print(n->left);
		cout << n->key << endl;
		print(n->right);
	}

public:
	BinarySearchTree() {
		root = nullptr;
	}
	void insert(int k) {
		root = insert(root, k);
	}
	bool empty() {
		return root == nullptr;
	}

	void print() {
		print(root);
	}

	bool contains(int k) {
		// TODO: check if tree contains key
	}

/*	
	TODO: implement other methods
	remove() {
	}
	height() {
	}
*/
};



