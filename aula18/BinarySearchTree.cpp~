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

	bool contains(Node* n, int k) {
		if (n == nullptr) {
			return false;
		} else if (k < n->key) {
			return contains(n->left, k);
		} else if (k > n->key) {
			return contains(n->right, k);
		} else {
			// key found; return true
			return true;
		}
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
		cout << "{{{" << endl;
		print(root);
		cout << "}}}" << endl;
	}

	bool contains(int k) {
		return contains(root, k);
	}

/*	
	TODO: implement other methods
	remove() {
	}
	height() {
	}
*/
};


int main() {
	BinarySearchTree t;

	for(int i = 1; i < 100000; i++) {
		t.insert(i);
	}
	//t.print();
	for(int i = 1; i < 100000; i++) {
		if (! t.contains(i) ) {
			cout << 
			"ERRO: 10 não encontrado"
			 << endl;
		}
	}

	return 0;
}




